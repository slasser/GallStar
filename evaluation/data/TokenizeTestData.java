import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.nio.charset.StandardCharsets;
import java.util.List;
import java.util.Map;
import java.util.HashMap;
import java.util.regex.Pattern;
import java.util.stream.Collectors;
import java.util.stream.Stream;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.LexerInterpreter;
import org.antlr.v4.runtime.Vocabulary;
import org.antlr.v4.tool.LexerGrammar;
import org.json.*;

public class TokenizeTestData {

    static String readFile(String path) throws IOException {
	byte[] encoded = Files.readAllBytes(Paths.get(path));
	return new String(encoded, StandardCharsets.UTF_8);
    }

    // Might not be totally idiomatic...
    static JSONObject nameSubs;
    static {
	try { nameSubs = new JSONObject(new JSONTokener(new FileReader("../resources/name_substitutions.json")));
	} catch (Exception e) {
	    System.out.println("couldn't find name subsitutions file");
	    System.exit(1);
	}
    }

    static boolean legalCoqConstr(String s) {
	Pattern p = Pattern.compile("[^a-zA-Z0-9_]");
	boolean hasIllegalChar = p.matcher(s).find();
	return !hasIllegalChar;
    }
    
    static String normalize(String s) {
	return legalCoqConstr(s) ? s : nameSubs.getString(s);
    }
    
    static JSONObject jsonTokenRepr(Vocabulary v, Token t) {
	String literal = t.getText();
	String terminal;
	String symbolicName = v.getSymbolicName(t.getType());
	if (symbolicName == null) {
	    terminal = "Lit_" + normalize(literal);
	} else {
	    terminal = symbolicName;
	}
	return new JSONObject().put("terminal", terminal)
	                       .put("literal" , literal);
    }

    static JSONObject jsonReprOfPythonToken(Vocabulary v, Token t) {
	String literal = t.getText();
	String terminal;
	String symbolicName = v.getSymbolicName(t.getType());
	if (symbolicName == null) {
	    terminal = "Lit_" + normalize(literal);
	} else {
	    terminal = symbolicName;
	}
	return new JSONObject().put("terminal", terminal)
	                       .put("literal" , literal);
    }
    
    static JSONArray getJsonTokens(String lexerPath, String dataPath) throws Exception {
	LexerGrammar lg = new LexerGrammar(readFile(lexerPath));
	LexerInterpreter li = lg.createLexerInterpreter(CharStreams.fromFileName(dataPath));
	Vocabulary v = li.getVocabulary();
	List<? extends Token> tokens = li.getAllTokens();
	List<JSONObject> jsonTokens = tokens.stream().filter(t -> t.getChannel() == Token.DEFAULT_CHANNEL)
	                                             .map(t -> jsonTokenRepr(v, t)).collect(Collectors.toList());
	return new JSONArray(jsonTokens);
    }

    static JSONArray getJsonTokensOfPython(String dataPath) throws Exception {
	Python3Lexer l = new Python3Lexer(CharStreams.fromFileName(dataPath));
	Python3Parser p = new Python3Parser(new CommonTokenStream(l));
	Vocabulary v = p.getVocabulary();
	List<? extends Token> tokens = l.getAllTokens();
	List<JSONObject> jsonTokens = tokens.stream().filter(t -> t.getChannel() == Token.DEFAULT_CHANNEL)
	                                             .map(t -> jsonTokenRepr(v, t)).collect(Collectors.toList());
	return new JSONArray(jsonTokens);
    }
	
    static String PYTHON3 = "python3";
    
    static void tokenizeAllFiles(String lexerPath, String dataDir, String tokensDir) throws Exception {
	for (File f : new File(dataDir).listFiles()) {
	    JSONArray tokens;
	    if (lexerPath.equals(PYTHON3)) {
		tokens = getJsonTokensOfPython(f.getPath());
	    } else {
		tokens = getJsonTokens(lexerPath, f.getPath());
	    }
	    System.out.print("tokenizing : " + f.getName() + "\n# tokens   : " + tokens.length() + "\n***\n");
	    String fname = f.getName();
	    String tokensPath = tokensDir + "/" + fname.substring(0, fname.lastIndexOf('.')) + ".json";
	    PrintWriter writer = new PrintWriter(tokensPath, "UTF-8");
	    writer.print(tokens.toString(4));
	    writer.close();
	}
    }

    public static void main(String [] args) throws Exception {
	tokenizeAllFiles(args[0], args[1], args[2]);
    }
}
