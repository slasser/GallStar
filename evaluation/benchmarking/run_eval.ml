(*open Core_bench
open Core.Time*)

module Yb = Yojson.Basic
module Yu = Yojson.Basic.Util

type coq_string = char list
let coq_string_of (s : string) : coq_string = List.init (String.length s) (String.get s)
let string_of_coq_str (cs : coq_string) : string = String.concat "" (List.map Char.escaped cs)
                                                 
let costar_token_of (f : char list -> 'a) (json_tok : Yb.t) : 'a * char list =
  let terminal = json_tok |> Yu.member "terminal" |> Yu.to_string |> coq_string_of |> f in
  let literal  = json_tok |> Yu.member "literal"  |> Yu.to_string |> coq_string_of      in
  (terminal, literal)
       
let read_tokens_from_file (t_of_string : coq_string -> 'a) (fname : string) : ('a * coq_string) list =
  let json_tokens = Yb.from_file fname |> Yu.to_list in
  List.map (costar_token_of t_of_string) json_tokens

(* Functions for reading JSON encodings of CoStar tokens from a file *)
      
let read_json_tokens : string -> (Json.D.SymTy.terminal * coq_string) list = read_tokens_from_file Json.D.SymTy.terminalOfString
(*let read_xml_tokens    = read_tokens_from_file XMLParser.D.SymTy.terminalOfString
let read_dot_tokens    = read_tokens_from_file DOTParser.D.SymTy.terminalOfString
let read_erlang_tokens = read_tokens_from_file ErlangParser.D.SymTy.terminalOfString*)
                                             

let json_data_dir = "tokenized_data/json"
let xml_data_dir  = "tokenized_data/xml"
let dot_data_dir  = "tokenized_data/dot"
let erlang_data_dir  = "tokenized_data/erlang"

(* Functions for parsing various formats.
   Each is partially applied to a grammar and start symbol. *)
let parse_json = Json.PG.ParserAndProofs.PEF.PS.P.parse Json.coq_JsonGrammar Coq_json
(*let parse_xml  = XMLParser.PG.ParserAndProofs.PEF.PS.P.parse XMLParser.xMLGrammar Document
let parse_dot  = DOTParser.PG.ParserAndProofs.PEF.PS.P.parse DOTParser.dOTGrammar Graph
let parse_erlang = ErlangParser.PG.ParserAndProofs.PEF.PS.P.parse ErlangParser.erlangGrammar Coq_forms*)
(*
let get_json_test (data_dir : string) (fname : string) : Bench.Test.t =
  let ts : JsonParser.D.Defs.token list = read_json_tokens (data_dir ^ "/" ^ fname) in
  Bench.Test.create fname (fun () -> parse_json ts)

let get_xml_test (data_dir : string) (fname : string) : Bench.Test.t =
  let ts : XMLParser.D.Defs.token list = read_xml_tokens (data_dir ^ "/" ^ fname) in
  Bench.Test.create fname (fun () -> parse_xml ts)

let get_dot_test (data_dir : string) (fname : string) : Bench.Test.t =
  let ts : DOTParser.D.Defs.token list = read_dot_tokens (data_dir ^ "/" ^ fname) in
  Bench.Test.create fname (fun () -> parse_dot ts)
                    
let get_json_tests () : Bench.Test.t list =
  let data_files = Array.to_list (Sys.readdir json_data_dir) in
  List.map (get_json_test json_data_dir) data_files

let get_xml_tests () : Bench.Test.t list =
  let data_files = Array.to_list (Sys.readdir xml_data_dir) in
  List.map (get_xml_test xml_data_dir) data_files

let get_dot_tests () =
  let data_files = Array.to_list (Sys.readdir dot_data_dir) in
  List.map (get_dot_test dot_data_dir) data_files
 *)
                                                                  
(* experiment *)
let benchmark (f : 'a -> 'b) (x : 'a) : float * 'b =
  let start = Unix.gettimeofday () in
  let res   = f x                  in
  let stop  = Unix.gettimeofday () in
  let time  = stop -. start
  in  (time, res)

(*let get_dot_tokens () =
  let data_files = Array.to_list (Sys.readdir dot_data_dir) in
  List.map (fun fname -> read_dot_tokens (dot_data_dir ^ "/" ^ fname)) data_files*)
(*
let get_erlang_tokens () =
  let data_files = Array.to_list (Sys.readdir erlang_data_dir) in
  List.map (fun fname -> read_erlang_tokens (erlang_data_dir ^ "/" ^ fname)) data_files

let tss = get_erlang_tokens ()
let ts  = List.nth tss 32
 *)
                  (*           
let () =
  let format = Sys.argv.(1) in
  match format with
                               | "json" -> Bench.bench ~run_config:(Bench.Run_config.create ~quota:(Span (Span.of_string "1s")) ()) ~save_to_file:Bench.Measurement.name (get_json_tests ())
     let data_files = Sys.readdir json_data_dir in
     for i = 0 to 1 do
       let ts = read_json_tokens (json_data_dir ^ "/" ^ data_files.(i)) in
       let _  = print_endline "read tokens"                             in
       let (time, _) = benchmark parse_json ts                          in
       Printf.printf "# of tokens: %d\n" (List.length ts);
       Printf.printf "time       : %f\n" time;
       print_endline "***"
     done
  | "xml" -> Bench.bench ~run_config:(Bench.Run_config.create ~quota:(Span (Span.of_string "1s")) ()) ~save_to_file:Bench.Measurement.name (get_xml_tests ())
  | "dot" -> let data_files = Sys.readdir dot_data_dir in
             for i = 1 to 1 do
               let ts = read_dot_tokens (dot_data_dir ^ "/" ^ data_files.(i)) in
               let (time, _) = benchmark parse_dot ts                         in
               Printf.printf "# of tokens: %d\n" (List.length ts);
               Printf.printf "time       : %f\n" time;
               print_endline "***"
             done
  | "erlang" -> let data_files = Sys.readdir erlang_data_dir in
                for i = 32 to 32 do
                  let ts = read_erlang_tokens (erlang_data_dir ^ "/" ^ data_files.(i)) in
                  let (time, _) = benchmark parse_erlang ts                            in
                  Printf.printf "# of tokens: %d\n" (List.length ts);
                  Printf.printf "time       : %f\n" time;
                  print_endline "***"
                done
  Bench.bench ~run_config:(Bench.Run_config.create ~quota:(Span (Span.of_string "1s")) ()) ~save_to_file:Bench.Measurement.name (get_dot_tests ())
  | _      -> failwith "unrecognized format argument"
*)

let main () =
  let lang     = Sys.argv.(1) in
  let data_dir = Sys.argv.(2) in
  let files    = Sys.readdir data_dir in
  for i = 0 to Array.length files - 1 do
    match lang with
    | "json" ->
       let ts = read_json_tokens (data_dir ^ "/" ^ files.(i)) in
       let (tm, res) = benchmark parse_json ts in
       print_float tm; print_endline "";
       (match res with
        | Accept _ -> print_endline "accept"
        | Ambig  _ -> print_endline "ambig"
        | Reject _ -> print_endline "reject"
        | Error _  -> print_endline "error")
                   
    | _ -> failwith "unrecognized lang argument"
  done

let () = main ()
