# 1 "longobject.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "longobject.c"




# 1 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 1






# 1 "/Users/parrt/tmp/Python-3.3.1/Include/patchlevel.h" 1
# 8 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/pyconfig.h" 1
# 9 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/pymacconfig.h" 1
# 10 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2

# 1 "/Developer/usr/llvm-gcc-4.2/lib/gcc/i686-apple-darwin11/4.2.1/include/limits.h" 1 3 4






# 1 "/Developer/usr/llvm-gcc-4.2/lib/gcc/i686-apple-darwin11/4.2.1/include/syslimits.h" 1 3 4
# 8 "/Developer/usr/llvm-gcc-4.2/lib/gcc/i686-apple-darwin11/4.2.1/include/limits.h" 2 3 4







# 1 "/usr/include/limits.h" 1 3 4
# 63 "/usr/include/limits.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 417 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 418 "/usr/include/sys/cdefs.h" 2 3 4
# 494 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 495 "/usr/include/sys/cdefs.h" 2 3 4
# 64 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/machine/limits.h" 1 3 4





# 1 "/usr/include/i386/limits.h" 1 3 4
# 40 "/usr/include/i386/limits.h" 3 4
# 1 "/usr/include/i386/_limits.h" 1 3 4
# 41 "/usr/include/i386/limits.h" 2 3 4
# 7 "/usr/include/machine/limits.h" 2 3 4
# 65 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/sys/syslimits.h" 1 3 4
# 66 "/usr/include/limits.h" 2 3 4
# 16 "/Developer/usr/llvm-gcc-4.2/lib/gcc/i686-apple-darwin11/4.2.1/include/limits.h" 2 3 4
# 12 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 25 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h"
# 1 "/usr/include/stdio.h" 1 3 4
# 65 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 141 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 142 "/usr/include/Availability.h" 2 3 4
# 66 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 33 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;





typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 58 "/usr/include/sys/_types.h" 3 4
struct __darwin_pthread_handler_rec
{
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};
struct _opaque_pthread_attr_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_cond_t { long __sig; char __opaque[40]; };
struct _opaque_pthread_condattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_mutex_t { long __sig; char __opaque[56]; };
struct _opaque_pthread_mutexattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_once_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_rwlock_t { long __sig; char __opaque[192]; };
struct _opaque_pthread_rwlockattr_t { long __sig; char __opaque[16]; };
struct _opaque_pthread_t { long __sig; struct __darwin_pthread_handler_rec *__cleanup_stack; char __opaque[1168]; };
# 94 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef struct _opaque_pthread_attr_t
   __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t
   __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t
   __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t
   __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t
   __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t
   __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t
   __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t
   __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t
   *__darwin_pthread_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];
# 28 "/usr/include/_types.h" 2 3 4
# 39 "/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 68 "/usr/include/stdio.h" 2 3 4





typedef __darwin_va_list va_list;




typedef __darwin_size_t size_t;






typedef __darwin_off_t fpos_t;
# 96 "/usr/include/stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 130 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (*_close)(void *);
 int (*_read) (void *, char *, int);
 fpos_t (*_seek) (void *, fpos_t, int);
 int (*_write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;


extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;

# 238 "/usr/include/stdio.h" 3 4

void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * , fpos_t *);
char *fgets(char * , int, FILE *);

FILE *fopen(const char * , const char * ) __asm("_" "fopen" "$DARWIN_EXTSN");



int fprintf(FILE * , const char * , ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * , FILE * ) __asm("_" "fputs" );
size_t fread(void * , size_t, size_t, FILE * );
FILE *freopen(const char * , const char * ,
                 FILE * ) __asm("_" "freopen" );
int fscanf(FILE * , const char * , ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * , size_t, size_t, FILE * ) __asm("_" "fwrite" );
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *);
int printf(const char * , ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *, const char *);
void rewind(FILE *);
int scanf(const char * , ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * , char * );
int setvbuf(FILE * , char * , int, size_t);
int sprintf(char * , const char * , ...) __attribute__((__format__ (__printf__, 2, 3)));
int sscanf(const char * , const char * , ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);
char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * , const char * , va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * , va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * , const char * , va_list) __attribute__((__format__ (__printf__, 2, 0)));

# 296 "/usr/include/stdio.h" 3 4




char *ctermid(char *);



FILE *fdopen(int, const char *) __asm("_" "fdopen" "$DARWIN_EXTSN");



int fileno(FILE *);

# 318 "/usr/include/stdio.h" 3 4

int pclose(FILE *);

FILE *popen(const char *, const char *) __asm("_" "popen" "$DARWIN_EXTSN");




# 340 "/usr/include/stdio.h" 3 4

int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);








static __inline int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 377 "/usr/include/stdio.h" 3 4

void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);


char *tempnam(const char *, const char *) __asm("_" "tempnam" );

# 414 "/usr/include/stdio.h" 3 4
typedef __darwin_off_t off_t;



int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);





int snprintf(char * , size_t, const char * , ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * , const char * , va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * , va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * , size_t, const char * , va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * , const char * , va_list) __attribute__((__format__ (__scanf__, 2, 0)));

# 442 "/usr/include/stdio.h" 3 4
typedef __darwin_ssize_t ssize_t;



int dprintf(int, const char * , ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((visibility("default")));
int vdprintf(int, const char * , va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((visibility("default")));
ssize_t getdelim(char ** , size_t * , int, FILE * ) __attribute__((visibility("default")));
ssize_t getline(char ** , size_t * , FILE * ) __attribute__((visibility("default")));









extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char **, const char *, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char **, const char *, va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (*)(void *, char *, int),
                 int (*)(void *, const char *, int),
                 fpos_t (*)(void *, fpos_t, int),
                 int (*)(void *));

# 499 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/secure/_stdio.h" 1 3 4
# 31 "/usr/include/secure/_stdio.h" 3 4
# 1 "/usr/include/secure/_common.h" 1 3 4
# 32 "/usr/include/secure/_stdio.h" 2 3 4
# 45 "/usr/include/secure/_stdio.h" 3 4
extern int __sprintf_chk (char * , int, size_t,
     const char * , ...)
  ;




extern int __snprintf_chk (char * , size_t, int, size_t,
      const char * , ...)
  ;





extern int __vsprintf_chk (char * , int, size_t,
      const char * , va_list)
  ;




extern int __vsnprintf_chk (char * , size_t, int, size_t,
       const char * , va_list)
  ;
# 500 "/usr/include/stdio.h" 2 3 4
# 26 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2




# 1 "/usr/include/string.h" 1 3 4
# 79 "/usr/include/string.h" 3 4

void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);
char *strcat(char *, const char *);
char *strchr(const char *, int);
int strcmp(const char *, const char *);
int strcoll(const char *, const char *);
char *strcpy(char *, const char *);
size_t strcspn(const char *, const char *);
char *strerror(int) __asm("_" "strerror" );
size_t strlen(const char *);
char *strncat(char *, const char *, size_t);
int strncmp(const char *, const char *, size_t);
char *strncpy(char *, const char *, size_t);
char *strpbrk(const char *, const char *);
char *strrchr(const char *, int);
size_t strspn(const char *, const char *);
char *strstr(const char *, const char *);
char *strtok(char *, const char *);
size_t strxfrm(char *, const char *, size_t);

# 113 "/usr/include/string.h" 3 4

char *strtok_r(char *, const char *, char **);

# 125 "/usr/include/string.h" 3 4

int strerror_r(int, char *, size_t);
char *strdup(const char *);
void *memccpy(void *, const void *, int, size_t);

# 139 "/usr/include/string.h" 3 4

char *stpcpy(char *, const char *);
char *stpncpy(char *, const char *, size_t) __attribute__((visibility("default")));
char *strndup(const char *, size_t) __attribute__((visibility("default")));
size_t strnlen(const char *, size_t) __attribute__((visibility("default")));
char *strsignal(int sig);

# 158 "/usr/include/string.h" 3 4

void *memmem(const void *, size_t, const void *, size_t) __attribute__((visibility("default")));
void memset_pattern4(void *, const void *, size_t) __attribute__((visibility("default")));
void memset_pattern8(void *, const void *, size_t) __attribute__((visibility("default")));
void memset_pattern16(void *, const void *, size_t) __attribute__((visibility("default")));

char *strcasestr(const char *, const char *);
char *strnstr(const char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
void strmode(int, char *);
char *strsep(char **, const char *);


void swab(const void * , void * , ssize_t);







# 1 "/usr/include/strings.h" 1 3 4
# 71 "/usr/include/strings.h" 3 4



int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) __attribute__((visibility("default")));
int fls(int) __attribute__((visibility("default")));
int flsl(long) __attribute__((visibility("default")));


# 1 "/usr/include/string.h" 1 3 4
# 95 "/usr/include/strings.h" 2 3 4
# 181 "/usr/include/string.h" 2 3 4
# 190 "/usr/include/string.h" 3 4
# 1 "/usr/include/secure/_string.h" 1 3 4
# 58 "/usr/include/secure/_string.h" 3 4
static __inline void *
__inline_memcpy_chk (void *__dest, const void *__src, size_t __len)
{
  return __builtin___memcpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}






static __inline void *
__inline_memmove_chk (void *__dest, const void *__src, size_t __len)
{
  return __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}






static __inline void *
__inline_memset_chk (void *__dest, int __val, size_t __len)
{
  return __builtin___memset_chk (__dest, __val, __len, __builtin_object_size (__dest, 0));
}






static __inline char *
__inline_strcpy_chk (char * __dest, const char * __src)
{
  return __builtin___strcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}







static __inline char *
__inline_stpcpy_chk (char *__dest, const char *__src)
{
  return __builtin___stpcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}






static __inline char *
__inline_stpncpy_chk (char * __dest, const char * __src,
        size_t __len)
{
  return __builtin___stpncpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}







static __inline char *
__inline_strncpy_chk (char * __dest, const char * __src,
        size_t __len)
{
  return __builtin___strncpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}






static __inline char *
__inline_strcat_chk (char * __dest, const char * __src)
{
  return __builtin___strcat_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}







static __inline char *
__inline_strncat_chk (char * __dest, const char * __src,
        size_t __len)
{
  return __builtin___strncat_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}
# 191 "/usr/include/string.h" 2 3 4
# 31 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2

# 1 "/usr/include/errno.h" 1 3 4
# 23 "/usr/include/errno.h" 3 4
# 1 "/usr/include/sys/errno.h" 1 3 4
# 74 "/usr/include/sys/errno.h" 3 4

extern int * __error(void);


# 24 "/usr/include/errno.h" 2 3 4
# 33 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2

# 1 "/usr/include/stdlib.h" 1 3 4
# 65 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/wait.h" 1 3 4
# 79 "/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;






typedef __darwin_pid_t pid_t;




typedef __darwin_id_t id_t;
# 116 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 73 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/usr/include/sys/signal.h" 2 3 4







# 1 "/usr/include/machine/signal.h" 1 3 4
# 32 "/usr/include/machine/signal.h" 3 4
# 1 "/usr/include/i386/signal.h" 1 3 4
# 39 "/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t;
# 55 "/usr/include/i386/signal.h" 3 4
# 1 "/usr/include/i386/_structs.h" 1 3 4
# 56 "/usr/include/i386/signal.h" 2 3 4
# 33 "/usr/include/machine/signal.h" 2 3 4
# 82 "/usr/include/sys/signal.h" 2 3 4
# 148 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/_structs.h" 1 3 4
# 57 "/usr/include/sys/_structs.h" 3 4
# 1 "/usr/include/machine/_structs.h" 1 3 4
# 29 "/usr/include/machine/_structs.h" 3 4
# 1 "/usr/include/i386/_structs.h" 1 3 4
# 38 "/usr/include/i386/_structs.h" 3 4
# 1 "/usr/include/mach/i386/_structs.h" 1 3 4
# 43 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_thread_state
{
    unsigned int __eax;
    unsigned int __ebx;
    unsigned int __ecx;
    unsigned int __edx;
    unsigned int __edi;
    unsigned int __esi;
    unsigned int __ebp;
    unsigned int __esp;
    unsigned int __ss;
    unsigned int __eflags;
    unsigned int __eip;
    unsigned int __cs;
    unsigned int __ds;
    unsigned int __es;
    unsigned int __fs;
    unsigned int __gs;
};
# 89 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_control
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
      :2,
    __pc :2,





    __rc :2,






             :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 147 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_status
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
    __stkflt :1,
    __errsumm :1,
    __c0 :1,
    __c1 :1,
    __c2 :1,
    __tos :3,
    __c3 :1,
    __busy :1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
# 191 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 210 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 232 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_float_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
};


struct __darwin_i386_avx_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
};
# 402 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_exception_state
{
 __uint16_t __trapno;
 __uint16_t __cpu;
 __uint32_t __err;
 __uint32_t __faultvaddr;
};
# 422 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state32
{
 unsigned int __dr0;
 unsigned int __dr1;
 unsigned int __dr2;
 unsigned int __dr3;
 unsigned int __dr4;
 unsigned int __dr5;
 unsigned int __dr6;
 unsigned int __dr7;
};
# 454 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_thread_state64
{
 __uint64_t __rax;
 __uint64_t __rbx;
 __uint64_t __rcx;
 __uint64_t __rdx;
 __uint64_t __rdi;
 __uint64_t __rsi;
 __uint64_t __rbp;
 __uint64_t __rsp;
 __uint64_t __r8;
 __uint64_t __r9;
 __uint64_t __r10;
 __uint64_t __r11;
 __uint64_t __r12;
 __uint64_t __r13;
 __uint64_t __r14;
 __uint64_t __r15;
 __uint64_t __rip;
 __uint64_t __rflags;
 __uint64_t __cs;
 __uint64_t __fs;
 __uint64_t __gs;
};
# 509 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_float_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
};


struct __darwin_x86_avx_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
};
# 751 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_exception_state64
{
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint64_t __faultvaddr;
};
# 771 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state64
{
 __uint64_t __dr0;
 __uint64_t __dr1;
 __uint64_t __dr2;
 __uint64_t __dr3;
 __uint64_t __dr4;
 __uint64_t __dr5;
 __uint64_t __dr6;
 __uint64_t __dr7;
};
# 39 "/usr/include/i386/_structs.h" 2 3 4
# 48 "/usr/include/i386/_structs.h" 3 4
struct __darwin_mcontext32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_float_state __fs;
};


struct __darwin_mcontext_avx32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx_state __fs;
};
# 86 "/usr/include/i386/_structs.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext_avx64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};
# 127 "/usr/include/i386/_structs.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 30 "/usr/include/machine/_structs.h" 2 3 4
# 58 "/usr/include/sys/_structs.h" 2 3 4
# 75 "/usr/include/sys/_structs.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
# 128 "/usr/include/sys/_structs.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};
# 218 "/usr/include/sys/_structs.h" 3 4
typedef struct __darwin_sigaltstack stack_t;
# 227 "/usr/include/sys/_structs.h" 3 4
typedef struct __darwin_ucontext ucontext_t;
# 149 "/usr/include/sys/signal.h" 2 3 4
# 157 "/usr/include/sys/signal.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;




typedef __darwin_sigset_t sigset_t;
# 172 "/usr/include/sys/signal.h" 3 4
typedef __darwin_uid_t uid_t;


union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 286 "/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
         void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 348 "/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 365 "/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 384 "/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 406 "/usr/include/sys/signal.h" 3 4

void (*signal(int, void (*)(int)))(int);

# 117 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 77 "/usr/include/sys/resource.h" 3 4
# 1 "/usr/include/sys/_structs.h" 1 3 4
# 100 "/usr/include/sys/_structs.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 78 "/usr/include/sys/resource.h" 2 3 4
# 89 "/usr/include/sys/resource.h" 3 4
typedef __uint64_t rlim_t;
# 151 "/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 162 "/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 222 "/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 244 "/usr/include/sys/resource.h" 3 4

int getpriority(int, id_t);

int getiopolicy_np(int, int) __attribute__((visibility("default")));

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) __attribute__((visibility("default")));

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );

# 118 "/usr/include/sys/wait.h" 2 3 4
# 193 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 35 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/i386/endian.h" 1 3 4
# 99 "/usr/include/i386/endian.h" 3 4
# 1 "/usr/include/sys/_endian.h" 1 3 4
# 124 "/usr/include/sys/_endian.h" 3 4
# 1 "/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 66 "/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static __inline__
__uint16_t
_OSSwapInt16(
    __uint16_t _data
)
{
    return ((_data << 8) | (_data >> 8));
}

static __inline__
__uint32_t
_OSSwapInt32(
    __uint32_t _data
)
{

    return __builtin_bswap32(_data);




}


static __inline__
__uint64_t
_OSSwapInt64(
    __uint64_t _data
)
{
    return __builtin_bswap64(_data);
}
# 67 "/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 125 "/usr/include/sys/_endian.h" 2 3 4
# 100 "/usr/include/i386/endian.h" 2 3 4
# 36 "/usr/include/machine/endian.h" 2 3 4
# 194 "/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
    w_Coredump:1,
    w_Retcode:8,
    w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
    w_Stopsig:8,
    w_Filler:16;






 } w_S;
};
# 254 "/usr/include/sys/wait.h" 3 4

pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);


# 66 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/alloca.h" 1 3 4
# 35 "/usr/include/alloca.h" 3 4

void *alloca(size_t);

# 68 "/usr/include/stdlib.h" 2 3 4
# 81 "/usr/include/stdlib.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;




typedef __darwin_rune_t rune_t;






typedef __darwin_wchar_t wchar_t;



typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;
# 134 "/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 144 "/usr/include/stdlib.h" 3 4

void abort(void) __attribute__((__noreturn__));
int abs(int) __attribute__((__const__));
int atexit(void (*)(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *, const void *, size_t,
     size_t, int (*)(const void *, const void *));
void *calloc(size_t, size_t);
div_t div(int, int) __attribute__((__const__));
void exit(int) __attribute__((__noreturn__));
void free(void *);
char *getenv(const char *);
long labs(long) __attribute__((__const__));
ldiv_t ldiv(long, long) __attribute__((__const__));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);

void *malloc(size_t);
int mblen(const char *, size_t);
size_t mbstowcs(wchar_t * , const char * , size_t);
int mbtowc(wchar_t * , const char * , size_t);
int posix_memalign(void **, size_t, size_t) __attribute__((visibility("default")));
void qsort(void *, size_t, size_t,
     int (*)(const void *, const void *));
int rand(void);
void *realloc(void *, size_t);
void srand(unsigned);
double strtod(const char *, char **) __asm("_" "strtod" );
float strtof(const char *, char **) __asm("_" "strtof" );
long strtol(const char *, char **, int);
long double
  strtold(const char *, char **) ;

long long
  strtoll(const char *, char **, int);

unsigned long
  strtoul(const char *, char **, int);

unsigned long long
  strtoull(const char *, char **, int);

int system(const char *) __asm("_" "system" );
size_t wcstombs(char * , const wchar_t * , size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((__noreturn__));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *, int *);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *, int *);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]);
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void);
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void);
long nrand48(unsigned short[3]);
int posix_openpt(int);
char *ptsname(int);
int putenv(char *) __asm("_" "putenv" );
long random(void);
int rand_r(unsigned *);

char *realpath(const char * , char * ) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char *, const char *, int) __asm("_" "setenv" );

void setkey(const char *) __asm("_" "setkey" );



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" );






# 1 "/usr/include/machine/types.h" 1 3 4
# 35 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/i386/types.h" 1 3 4
# 70 "/usr/include/i386/types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 71 "/usr/include/i386/types.h" 2 3 4







typedef signed char int8_t;

typedef unsigned char u_int8_t;


typedef short int16_t;

typedef unsigned short u_int16_t;


typedef int int32_t;

typedef unsigned int u_int32_t;


typedef long long int64_t;

typedef unsigned long long u_int64_t;


typedef int64_t register_t;






typedef __darwin_intptr_t intptr_t;



typedef unsigned long uintptr_t;




typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;
# 36 "/usr/include/machine/types.h" 2 3 4
# 256 "/usr/include/stdlib.h" 2 3 4


typedef __darwin_dev_t dev_t;




typedef __darwin_mode_t mode_t;



u_int32_t
  arc4random(void);
void arc4random_addrandom(unsigned char * , int );
void arc4random_buf(void * , size_t ) __attribute__((visibility("default")));
void arc4random_stir(void);
u_int32_t
  arc4random_uniform(u_int32_t ) __attribute__((visibility("default")));

int atexit_b(void (^)(void)) __attribute__((visibility("default")));
void *bsearch_b(const void *, const void *, size_t,
     size_t, int (^)(const void *, const void *)) __attribute__((visibility("default")));



char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" "$1050") __attribute__((deprecated,visibility("default")));
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);

int heapsort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int heapsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((visibility("default")));

int mergesort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int mergesort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((visibility("default")));

void psort(void *, size_t, size_t,
     int (*)(const void *, const void *)) __attribute__((visibility("default")));

void psort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((visibility("default")));

void psort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *)) __attribute__((visibility("default")));

void qsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((visibility("default")));

void qsort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *));
int radixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void setprogname(const char *);
int sradixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *, size_t);

long long
  strtoq(const char *, char **, int);
unsigned long long
  strtouq(const char *, char **, int);

extern char *suboptarg;
void *valloc(size_t);







# 35 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2

# 1 "/usr/include/unistd.h" 1 3 4
# 72 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/unistd.h" 1 3 4
# 138 "/usr/include/sys/unistd.h" 3 4
struct accessx_descriptor {
 unsigned int ad_name_offset;
 int ad_flags;
 int ad_pad[2];
};
# 73 "/usr/include/unistd.h" 2 3 4




typedef __darwin_gid_t gid_t;
# 114 "/usr/include/unistd.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 468 "/usr/include/unistd.h" 3 4

void _exit(int) __attribute__((__noreturn__));
int access(const char *, int);
unsigned int
  alarm(unsigned int);
int chdir(const char *);
int chown(const char *, uid_t, gid_t);

int close(int) __asm("_" "close" );

int dup(int);
int dup2(int, int);
int execl(const char *, const char *, ...);
int execle(const char *, const char *, ...);
int execlp(const char *, const char *, ...);
int execv(const char *, char * const *);
int execve(const char *, char * const *, char * const *);
int execvp(const char *, char * const *);
pid_t fork(void);
long fpathconf(int, int);
char *getcwd(char *, size_t);
gid_t getegid(void);
uid_t geteuid(void);
gid_t getgid(void);

int getgroups(int, gid_t []) __asm("_" "getgroups" "$DARWIN_EXTSN");



char *getlogin(void);
pid_t getpgrp(void);
pid_t getpid(void);
pid_t getppid(void);
uid_t getuid(void);
int isatty(int);
int link(const char *, const char *);
off_t lseek(int, off_t, int);
long pathconf(const char *, int);

int pause(void) __asm("_" "pause" );

int pipe(int [2]);

ssize_t read(int, void *, size_t) __asm("_" "read" );

int rmdir(const char *);
int setgid(gid_t);
int setpgid(pid_t, pid_t);
pid_t setsid(void);
int setuid(uid_t);

unsigned int
  sleep(unsigned int) __asm("_" "sleep" );

long sysconf(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);
char *ttyname(int);


int ttyname_r(int, char *, size_t) __asm("_" "ttyname_r" );




int unlink(const char *);

ssize_t write(int, const void *, size_t) __asm("_" "write" );

# 545 "/usr/include/unistd.h" 3 4

size_t confstr(int, char *, size_t) __asm("_" "confstr" );

int getopt(int, char * const [], const char *) __asm("_" "getopt" );

extern char *optarg;
extern int optind, opterr, optopt;

# 570 "/usr/include/unistd.h" 3 4





void *brk(const void *);
int chroot(const char *) ;


char *crypt(const char *, const char *);






void encrypt(char *, int) __asm("_" "encrypt" );



int fchdir(int);
long gethostid(void);
pid_t getpgid(pid_t);
pid_t getsid(pid_t);



int getdtablesize(void) ;
int getpagesize(void) __attribute__((__const__)) ;
char *getpass(const char *) ;




char *getwd(char *) ;


int lchown(const char *, uid_t, gid_t) __asm("_" "lchown" );

int lockf(int, int, off_t) __asm("_" "lockf" );

int nice(int) __asm("_" "nice" );

ssize_t pread(int, void *, size_t, off_t) __asm("_" "pread" );

ssize_t pwrite(int, const void *, size_t, off_t) __asm("_" "pwrite" );





void *sbrk(int);



pid_t setpgrp(void) __asm("_" "setpgrp" );




int setregid(gid_t, gid_t) __asm("_" "setregid" );

int setreuid(uid_t, uid_t) __asm("_" "setreuid" );

void swab(const void * , void * , ssize_t);
void sync(void);
int truncate(const char *, off_t);
useconds_t ualarm(useconds_t, useconds_t);
int usleep(useconds_t) __asm("_" "usleep" );
pid_t vfork(void);


int fsync(int) __asm("_" "fsync" );

int ftruncate(int, off_t);
int getlogin_r(char *, size_t);

# 657 "/usr/include/unistd.h" 3 4

int fchown(int, uid_t, gid_t);
int gethostname(char *, size_t);
ssize_t readlink(const char * , char * , size_t);
int setegid(gid_t);
int seteuid(uid_t);
int symlink(const char *, const char *);








# 1 "/usr/include/sys/select.h" 1 3 4
# 78 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/sys/_structs.h" 1 3 4
# 88 "/usr/include/sys/_structs.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 183 "/usr/include/sys/_structs.h" 3 4

typedef struct fd_set {
 __int32_t fds_bits[((((1024) % ((sizeof(__int32_t) * 8))) == 0) ? ((1024) / ((sizeof(__int32_t) * 8))) : (((1024) / ((sizeof(__int32_t) * 8))) + 1))];
} fd_set;



static __inline int
__darwin_fd_isset(int _n, const struct fd_set *_p)
{
 return (_p->fds_bits[_n/(sizeof(__int32_t) * 8)] & (1<<(_n % (sizeof(__int32_t) * 8))));
}
# 79 "/usr/include/sys/select.h" 2 3 4
# 87 "/usr/include/sys/select.h" 3 4
typedef __darwin_time_t time_t;




typedef __darwin_suseconds_t suseconds_t;
# 134 "/usr/include/sys/select.h" 3 4



int pselect(int, fd_set * , fd_set * ,
  fd_set * , const struct timespec * ,
  const sigset_t * )

  __asm("_" "pselect" "$DARWIN_EXTSN" )







  ;


# 1 "/usr/include/sys/_select.h" 1 3 4
# 39 "/usr/include/sys/_select.h" 3 4
int select(int, fd_set * , fd_set * ,
  fd_set * , struct timeval * )

  __asm("_" "select" "$DARWIN_EXTSN" )







  ;
# 153 "/usr/include/sys/select.h" 2 3 4


# 673 "/usr/include/unistd.h" 2 3 4
# 686 "/usr/include/unistd.h" 3 4
typedef __darwin_uuid_t uuid_t;



void _Exit(int) __attribute__((__noreturn__));
int accessx_np(const struct accessx_descriptor *, size_t, int *, uid_t);
int acct(const char *);
int add_profil(char *, size_t, unsigned long, unsigned int);
void endusershell(void);
int execvP(const char *, const char *, char * const *);
char *fflagstostr(unsigned long);
int getdomainname(char *, int);
int getgrouplist(const char *, int, int *, int *);
int gethostuuid(uuid_t, const struct timespec *) __attribute__((visibility("default")));
mode_t getmode(const void *, mode_t);
int getpeereid(int, uid_t *, gid_t *);
int getsgroups_np(int *, uuid_t);
char *getusershell(void);
int getwgroups_np(int *, uuid_t);
int initgroups(const char *, int);
int iruserok(unsigned long, int, const char *, const char *);
int iruserok_sa(const void *, int, int, const char *, const char *);
int issetugid(void);
char *mkdtemp(char *);
int mknod(const char *, mode_t, dev_t);
int mkstemp(char *);
int mkstemps(char *, int);
char *mktemp(char *);
int nfssvc(int, void *);
int profil(char *, size_t, unsigned long, unsigned int);
int pthread_setugid_np(uid_t, gid_t);
int pthread_getugid_np( uid_t *, gid_t *);
int rcmd(char **, int, const char *, const char *, const char *, int *);
int rcmd_af(char **, int, const char *, const char *, const char *, int *,
  int);
int reboot(int);
int revoke(const char *);
int rresvport(int *);
int rresvport_af(int *, int);
int ruserok(const char *, int, const char *, const char *);
int setdomainname(const char *, int);
int setgroups(int, const gid_t *);
void sethostid(long);
int sethostname(const char *, int);

void setkey(const char *) __asm("_" "setkey" );



int setlogin(const char *);
void *setmode(const char *) __asm("_" "setmode" );
int setrgid(gid_t);
int setruid(uid_t);
int setsgroups_np(int, const uuid_t);
void setusershell(void);
int setwgroups_np(int, const uuid_t);
int strtofflags(char **, unsigned long *, unsigned long *);
int swapon(const char *);
int syscall(int, ...);
int ttyslot(void);
int undelete(const char *);
int unwhiteout(const char *);
void *valloc(size_t);

extern char *suboptarg;
int getsubopt(char **, char * const *, char **);



int fgetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((visibility("default")));
int fsetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((visibility("default")));
int getattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "getattrlist" );
int setattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "setattrlist" );
int exchangedata(const char*,const char*,unsigned int);
int getdirentriesattr(int,void*,void*,size_t,unsigned int*,unsigned int*,unsigned int*,unsigned int);
# 772 "/usr/include/unistd.h" 3 4
struct fssearchblock;
struct searchstate;

int searchfs(const char *, struct fssearchblock *, unsigned long *, unsigned int, unsigned int, struct searchstate *);
int fsctl(const char *,unsigned long,void*,unsigned int);
int ffsctl(int,unsigned long,void*,unsigned int) __attribute__((visibility("default")));

extern int optreset;


# 37 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 48 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h"
# 1 "/usr/include/assert.h" 1 3 4
# 75 "/usr/include/assert.h" 3 4

void __assert_rtn(const char *, const char *, int, const char *) __attribute__((__noreturn__));




# 49 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2

# 1 "/Users/parrt/tmp/Python-3.3.1/Include/pyport.h" 1
# 9 "/Users/parrt/tmp/Python-3.3.1/Include/pyport.h"
# 1 "/usr/include/inttypes.h" 1 3 4
# 247 "/usr/include/inttypes.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 40 "/usr/include/stdint.h" 3 4
typedef unsigned char uint8_t;




typedef unsigned short uint16_t;




typedef unsigned int uint32_t;




typedef unsigned long long uint64_t;



typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;
# 97 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
# 106 "/usr/include/stdint.h" 3 4
typedef long unsigned int uintmax_t;
# 248 "/usr/include/inttypes.h" 2 3 4
# 257 "/usr/include/inttypes.h" 3 4



  extern intmax_t imaxabs(intmax_t j);


  typedef struct {
        intmax_t quot;
        intmax_t rem;
  } imaxdiv_t;

  extern imaxdiv_t imaxdiv(intmax_t numer, intmax_t denom);


  extern intmax_t strtoimax(const char * nptr, char ** endptr, int base);
  extern uintmax_t strtoumax(const char * nptr, char ** endptr, int base);
# 282 "/usr/include/inttypes.h" 3 4
  extern intmax_t wcstoimax(const wchar_t * nptr, wchar_t ** endptr, int base);
  extern uintmax_t wcstoumax(const wchar_t * nptr, wchar_t ** endptr, int base);







# 10 "/Users/parrt/tmp/Python-3.3.1/Include/pyport.h" 2
# 170 "/Users/parrt/tmp/Python-3.3.1/Include/pyport.h"
typedef uintptr_t Py_uintptr_t;
typedef intptr_t Py_intptr_t;
# 194 "/Users/parrt/tmp/Python-3.3.1/Include/pyport.h"
typedef ssize_t Py_ssize_t;







typedef Py_ssize_t Py_hash_t;

typedef size_t Py_uhash_t;
# 340 "/Users/parrt/tmp/Python-3.3.1/Include/pyport.h"
# 1 "/usr/include/math.h" 1 3 4
# 28 "/usr/include/math.h" 3 4
# 1 "/usr/include/architecture/i386/math.h" 1 3 4
# 49 "/usr/include/architecture/i386/math.h" 3 4
 typedef float float_t;
 typedef double double_t;
# 108 "/usr/include/architecture/i386/math.h" 3 4
extern int __math_errhandling ( void );
# 128 "/usr/include/architecture/i386/math.h" 3 4
extern int __fpclassifyf(float );
extern int __fpclassifyd(double );
extern int __fpclassify (long double);
# 163 "/usr/include/architecture/i386/math.h" 3 4
 static __inline__ int __inline_isfinitef (float ) __attribute__ ((always_inline));
 static __inline__ int __inline_isfinited (double ) __attribute__ ((always_inline));
 static __inline__ int __inline_isfinite (long double) __attribute__ ((always_inline));
 static __inline__ int __inline_isinff (float ) __attribute__ ((always_inline));
 static __inline__ int __inline_isinfd (double ) __attribute__ ((always_inline));
 static __inline__ int __inline_isinf (long double) __attribute__ ((always_inline));
 static __inline__ int __inline_isnanf (float ) __attribute__ ((always_inline));
 static __inline__ int __inline_isnand (double ) __attribute__ ((always_inline));
 static __inline__ int __inline_isnan (long double) __attribute__ ((always_inline));
 static __inline__ int __inline_isnormalf (float ) __attribute__ ((always_inline));
 static __inline__ int __inline_isnormald (double ) __attribute__ ((always_inline));
 static __inline__ int __inline_isnormal (long double) __attribute__ ((always_inline));
 static __inline__ int __inline_signbitf (float ) __attribute__ ((always_inline));
 static __inline__ int __inline_signbitd (double ) __attribute__ ((always_inline));
 static __inline__ int __inline_signbit (long double) __attribute__ ((always_inline));

 static __inline__ int __inline_isinff( float __x ) { return __builtin_fabsf(__x) == __builtin_inff(); }
 static __inline__ int __inline_isinfd( double __x ) { return __builtin_fabs(__x) == __builtin_inf(); }
 static __inline__ int __inline_isinf( long double __x ) { return __builtin_fabsl(__x) == __builtin_infl(); }
 static __inline__ int __inline_isfinitef( float __x ) { return __x == __x && __builtin_fabsf(__x) != __builtin_inff(); }
 static __inline__ int __inline_isfinited( double __x ) { return __x == __x && __builtin_fabs(__x) != __builtin_inf(); }
 static __inline__ int __inline_isfinite( long double __x ) { return __x == __x && __builtin_fabsl(__x) != __builtin_infl(); }
 static __inline__ int __inline_isnanf( float __x ) { return __x != __x; }
 static __inline__ int __inline_isnand( double __x ) { return __x != __x; }
 static __inline__ int __inline_isnan( long double __x ) { return __x != __x; }
 static __inline__ int __inline_signbitf( float __x ) { union{ float __f; unsigned int __u; }__u; __u.__f = __x; return (int)(__u.__u >> 31); }
 static __inline__ int __inline_signbitd( double __x ) { union{ double __f; unsigned int __u[2]; }__u; __u.__f = __x; return (int)(__u.__u[1] >> 31); }
 static __inline__ int __inline_signbit( long double __x ){ union{ long double __ld; struct{ unsigned int __m[2]; short __sexp; }__p; }__u; __u.__ld = __x; return (int) (((unsigned short) __u.__p.__sexp) >> 15); }
 static __inline__ int __inline_isnormalf( float __x ) { float fabsf = __builtin_fabsf(__x); if( __x != __x ) return 0; return fabsf < __builtin_inff() && fabsf >= 1.17549435e-38F; }
 static __inline__ int __inline_isnormald( double __x ) { double fabsf = __builtin_fabs(__x); if( __x != __x ) return 0; return fabsf < __builtin_inf() && fabsf >= 2.2250738585072014e-308; }
 static __inline__ int __inline_isnormal( long double __x ) { long double fabsf = __builtin_fabsl(__x); if( __x != __x ) return 0; return fabsf < __builtin_infl() && fabsf >= 3.36210314311209350626e-4932L; }
# 253 "/usr/include/architecture/i386/math.h" 3 4
extern double acos( double );
extern float acosf( float );

extern double asin( double );
extern float asinf( float );

extern double atan( double );
extern float atanf( float );

extern double atan2( double, double );
extern float atan2f( float, float );

extern double cos( double );
extern float cosf( float );

extern double sin( double );
extern float sinf( float );

extern double tan( double );
extern float tanf( float );

extern double acosh( double );
extern float acoshf( float );

extern double asinh( double );
extern float asinhf( float );

extern double atanh( double );
extern float atanhf( float );

extern double cosh( double );
extern float coshf( float );

extern double sinh( double );
extern float sinhf( float );

extern double tanh( double );
extern float tanhf( float );

extern double exp ( double );
extern float expf ( float );

extern double exp2 ( double );
extern float exp2f ( float );

extern double expm1 ( double );
extern float expm1f ( float );

extern double log ( double );
extern float logf ( float );

extern double log10 ( double );
extern float log10f ( float );

extern double log2 ( double );
extern float log2f ( float );

extern double log1p ( double );
extern float log1pf ( float );

extern double logb ( double );
extern float logbf ( float );

extern double modf ( double, double * );
extern float modff ( float, float * );

extern double ldexp ( double, int );
extern float ldexpf ( float, int );

extern double frexp ( double, int * );
extern float frexpf ( float, int * );

extern int ilogb ( double );
extern int ilogbf ( float );

extern double scalbn ( double, int );
extern float scalbnf ( float, int );

extern double scalbln ( double, long int );
extern float scalblnf ( float, long int );

extern double fabs( double );
extern float fabsf( float );

extern double cbrt( double );
extern float cbrtf( float );

extern double hypot ( double, double );
extern float hypotf ( float, float );

extern double pow ( double, double );
extern float powf ( float, float );

extern double sqrt( double );
extern float sqrtf( float );

extern double erf( double );
extern float erff( float );

extern double erfc( double );
extern float erfcf( float );






extern double lgamma( double );
extern float lgammaf( float );

extern double tgamma( double );
extern float tgammaf( float );

extern double ceil ( double );
extern float ceilf ( float );

extern double floor ( double );
extern float floorf ( float );

extern double nearbyint ( double );
extern float nearbyintf ( float );

extern double rint ( double );
extern float rintf ( float );

extern long int lrint ( double );
extern long int lrintf ( float );

extern double round ( double );
extern float roundf ( float );

extern long int lround ( double );
extern long int lroundf ( float );



    extern long long int llrint ( double );
    extern long long int llrintf ( float );
    extern long long int llround ( double );
    extern long long int llroundf ( float );


extern double trunc ( double );
extern float truncf ( float );

extern double fmod ( double, double );
extern float fmodf ( float, float );

extern double remainder ( double, double );
extern float remainderf ( float, float );

extern double remquo ( double, double, int * );
extern float remquof ( float, float, int * );

extern double copysign ( double, double );
extern float copysignf ( float, float );

extern double nan( const char * );
extern float nanf( const char * );

extern double nextafter ( double, double );
extern float nextafterf ( float, float );

extern double fdim ( double, double );
extern float fdimf ( float, float );

extern double fmax ( double, double );
extern float fmaxf ( float, float );

extern double fmin ( double, double );
extern float fminf ( float, float );

extern double fma ( double, double, double );
extern float fmaf ( float, float, float );

extern long double acosl(long double);
extern long double asinl(long double);
extern long double atanl(long double);
extern long double atan2l(long double, long double);
extern long double cosl(long double);
extern long double sinl(long double);
extern long double tanl(long double);
extern long double acoshl(long double);
extern long double asinhl(long double);
extern long double atanhl(long double);
extern long double coshl(long double);
extern long double sinhl(long double);
extern long double tanhl(long double);
extern long double expl(long double);
extern long double exp2l(long double);
extern long double expm1l(long double);
extern long double logl(long double);
extern long double log10l(long double);
extern long double log2l(long double);
extern long double log1pl(long double);
extern long double logbl(long double);
extern long double modfl(long double, long double *);
extern long double ldexpl(long double, int);
extern long double frexpl(long double, int *);
extern int ilogbl(long double);
extern long double scalbnl(long double, int);
extern long double scalblnl(long double, long int);
extern long double fabsl(long double);
extern long double cbrtl(long double);
extern long double hypotl(long double, long double);
extern long double powl(long double, long double);
extern long double sqrtl(long double);
extern long double erfl(long double);
extern long double erfcl(long double);






extern long double lgammal(long double);

extern long double tgammal(long double);
extern long double ceill(long double);
extern long double floorl(long double);
extern long double nearbyintl(long double);
extern long double rintl(long double);
extern long int lrintl(long double);
extern long double roundl(long double);
extern long int lroundl(long double);



    extern long long int llrintl(long double);
    extern long long int llroundl(long double);


extern long double truncl(long double);
extern long double fmodl(long double, long double);
extern long double remainderl(long double, long double);
extern long double remquol(long double, long double, int *);
extern long double copysignl(long double, long double);
extern long double nanl(const char *);
extern long double nextafterl(long double, long double);
extern double nexttoward(double, long double);
extern float nexttowardf(float, long double);
extern long double nexttowardl(long double, long double);
extern long double fdiml(long double, long double);
extern long double fmaxl(long double, long double);
extern long double fminl(long double, long double);
extern long double fmal(long double, long double, long double);
# 507 "/usr/include/architecture/i386/math.h" 3 4
extern double __inf( void );
extern float __inff( void );
extern long double __infl( void );
extern float __nan( void );


extern double j0 ( double );

extern double j1 ( double );

extern double jn ( int, double );

extern double y0 ( double );

extern double y1 ( double );

extern double yn ( int, double );

extern double scalb ( double, double );
# 543 "/usr/include/architecture/i386/math.h" 3 4
extern int signgam;
# 558 "/usr/include/architecture/i386/math.h" 3 4
extern long int rinttol ( double );


extern long int roundtol ( double );
# 570 "/usr/include/architecture/i386/math.h" 3 4
struct exception {
 int type;
 char *name;
 double arg1;
 double arg2;
 double retval;
};
# 601 "/usr/include/architecture/i386/math.h" 3 4
extern int finite ( double );


extern double gamma ( double );




extern int matherr ( struct exception * );





extern double significand ( double );






extern double drem ( double, double );







# 1 "/usr/include/AvailabilityMacros.h" 1 3 4
# 631 "/usr/include/architecture/i386/math.h" 2 3 4

 extern float lgammaf_r ( float, int * ) ;
 extern double lgamma_r ( double, int * ) ;
 extern long double lgammal_r ( long double, int * ) ;
# 29 "/usr/include/math.h" 2 3 4
# 341 "/Users/parrt/tmp/Python-3.3.1/Include/pyport.h" 2






# 1 "/usr/include/sys/time.h" 1 3 4
# 78 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/sys/_structs.h" 1 3 4
# 79 "/usr/include/sys/time.h" 2 3 4
# 94 "/usr/include/sys/time.h" 3 4
struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 144 "/usr/include/sys/time.h" 3 4
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 187 "/usr/include/sys/time.h" 3 4
struct clockinfo {
 int hz;
 int tick;
 int tickadj;
 int stathz;
 int profhz;
};




# 1 "/usr/include/time.h" 1 3 4
# 69 "/usr/include/time.h" 3 4
# 1 "/usr/include/_structs.h" 1 3 4
# 24 "/usr/include/_structs.h" 3 4
# 1 "/usr/include/sys/_structs.h" 1 3 4
# 25 "/usr/include/_structs.h" 2 3 4
# 70 "/usr/include/time.h" 2 3 4







typedef __darwin_clock_t clock_t;
# 90 "/usr/include/time.h" 3 4
struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
 long tm_gmtoff;
 char *tm_zone;
};
# 113 "/usr/include/time.h" 3 4
extern char *tzname[];


extern int getdate_err;

extern long timezone __asm("_" "timezone" );

extern int daylight;


char *asctime(const struct tm *);
clock_t clock(void) __asm("_" "clock" );
char *ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *) __asm("_" "mktime" );
size_t strftime(char * , size_t, const char * , const struct tm * ) __asm("_" "strftime" );
char *strptime(const char * , const char * , struct tm * ) __asm("_" "strptime" );
time_t time(time_t *);


void tzset(void);



char *asctime_r(const struct tm * , char * );
char *ctime_r(const time_t *, char *);
struct tm *gmtime_r(const time_t * , struct tm * );
struct tm *localtime_r(const time_t * , struct tm * );


time_t posix2time(time_t);



void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * const);
time_t timegm(struct tm * const);



int nanosleep(const struct timespec *, struct timespec *) __asm("_" "nanosleep" );


# 199 "/usr/include/sys/time.h" 2 3 4





int adjtime(const struct timeval *, struct timeval *);
int futimes(int, const struct timeval *);
int lutimes(const char *, const struct timeval *) __attribute__((visibility("default")));
int settimeofday(const struct timeval *, const struct timezone *);


int getitimer(int, struct itimerval *);
int gettimeofday(struct timeval * , void * );



int setitimer(int, const struct itimerval * ,
  struct itimerval * );
int utimes(const char *, const struct timeval *);


# 348 "/Users/parrt/tmp/Python-3.3.1/Include/pyport.h" 2
# 398 "/Users/parrt/tmp/Python-3.3.1/Include/pyport.h"
# 1 "/usr/include/sys/stat.h" 1 3 4
# 79 "/usr/include/sys/stat.h" 3 4
# 1 "/usr/include/sys/_structs.h" 1 3 4
# 80 "/usr/include/sys/stat.h" 2 3 4







typedef __darwin_blkcnt_t blkcnt_t;




typedef __darwin_blksize_t blksize_t;
# 102 "/usr/include/sys/stat.h" 3 4
typedef __darwin_ino_t ino_t;





typedef __darwin_ino64_t ino64_t;
# 119 "/usr/include/sys/stat.h" 3 4
typedef __uint16_t nlink_t;
# 153 "/usr/include/sys/stat.h" 3 4
struct ostat {
 __uint16_t st_dev;
 ino_t st_ino;
 mode_t st_mode;
 nlink_t st_nlink;
 __uint16_t st_uid;
 __uint16_t st_gid;
 __uint16_t st_rdev;
 __int32_t st_size;
 struct timespec st_atimespec;
 struct timespec st_mtimespec;
 struct timespec st_ctimespec;
 __int32_t st_blksize;
 __int32_t st_blocks;
 __uint32_t st_flags;
 __uint32_t st_gen;
};
# 225 "/usr/include/sys/stat.h" 3 4
struct stat { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec; off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; };
# 264 "/usr/include/sys/stat.h" 3 4
struct stat64 { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec; off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; };
# 428 "/usr/include/sys/stat.h" 3 4


int chmod(const char *, mode_t) __asm("_" "chmod" );
int fchmod(int, mode_t) __asm("_" "fchmod" );
int fstat(int, struct stat *) __asm("_" "fstat" "$INODE64");
int lstat(const char *, struct stat *) __asm("_" "lstat" "$INODE64");
int mkdir(const char *, mode_t);
int mkfifo(const char *, mode_t);
int stat(const char *, struct stat *) __asm("_" "stat" "$INODE64");
int mknod(const char *, mode_t, dev_t);
mode_t umask(mode_t);



struct _filesec;
typedef struct _filesec *filesec_t;


int chflags(const char *, __uint32_t);
int chmodx_np(const char *, filesec_t);
int fchflags(int, __uint32_t);
int fchmodx_np(int, filesec_t);
int fstatx_np(int, struct stat *, filesec_t) __asm("_" "fstatx_np" "$INODE64");
int lchflags(const char *, __uint32_t) __attribute__((visibility("default")));
int lchmod(const char *, mode_t) __attribute__((visibility("default")));
int lstatx_np(const char *, struct stat *, filesec_t) __asm("_" "lstatx_np" "$INODE64");
int mkdirx_np(const char *, filesec_t);
int mkfifox_np(const char *, filesec_t);
int statx_np(const char *, struct stat *, filesec_t) __asm("_" "statx_np" "$INODE64");
int umaskx_np(filesec_t) __attribute__((deprecated,visibility("default")));



int fstatx64_np(int, struct stat64 *, filesec_t) __attribute__((deprecated,visibility("default")));
int lstatx64_np(const char *, struct stat64 *, filesec_t) __attribute__((deprecated,visibility("default")));
int statx64_np(const char *, struct stat64 *, filesec_t) __attribute__((deprecated,visibility("default")));
int fstat64(int, struct stat64 *) __attribute__((deprecated,visibility("default")));
int lstat64(const char *, struct stat64 *) __attribute__((deprecated,visibility("default")));
int stat64(const char *, struct stat64 *) __attribute__((deprecated,visibility("default")));




# 399 "/Users/parrt/tmp/Python-3.3.1/Include/pyport.h" 2
# 673 "/Users/parrt/tmp/Python-3.3.1/Include/pyport.h"
# 1 "/usr/include/termios.h" 1 3 4
# 27 "/usr/include/termios.h" 3 4
# 1 "/usr/include/sys/termios.h" 1 3 4
# 265 "/usr/include/sys/termios.h" 3 4
typedef unsigned long tcflag_t;
typedef unsigned char cc_t;
typedef unsigned long speed_t;

struct termios {
 tcflag_t c_iflag;
 tcflag_t c_oflag;
 tcflag_t c_cflag;
 tcflag_t c_lflag;
 cc_t c_cc[20];
 speed_t c_ispeed;
 speed_t c_ospeed;
};
# 332 "/usr/include/sys/termios.h" 3 4

speed_t cfgetispeed(const struct termios *);
speed_t cfgetospeed(const struct termios *);
int cfsetispeed(struct termios *, speed_t);
int cfsetospeed(struct termios *, speed_t);
int tcgetattr(int, struct termios *);
int tcsetattr(int, int, const struct termios *);
int tcdrain(int) __asm("_" "tcdrain" );
int tcflow(int, int);
int tcflush(int, int);
int tcsendbreak(int, int);


void cfmakeraw(struct termios *);
int cfsetspeed(struct termios *, speed_t);


# 358 "/usr/include/sys/termios.h" 3 4
# 1 "/usr/include/sys/ttycom.h" 1 3 4
# 72 "/usr/include/sys/ttycom.h" 3 4
# 1 "/usr/include/sys/ioccom.h" 1 3 4
# 73 "/usr/include/sys/ttycom.h" 2 3 4
# 83 "/usr/include/sys/ttycom.h" 3 4
struct winsize {
 unsigned short ws_row;
 unsigned short ws_col;
 unsigned short ws_xpixel;
 unsigned short ws_ypixel;
};
# 359 "/usr/include/sys/termios.h" 2 3 4
# 367 "/usr/include/sys/termios.h" 3 4
# 1 "/usr/include/sys/ttydefaults.h" 1 3 4
# 368 "/usr/include/sys/termios.h" 2 3 4
# 28 "/usr/include/termios.h" 2 3 4








pid_t tcgetsid(int);

# 674 "/Users/parrt/tmp/Python-3.3.1/Include/pyport.h" 2
extern int openpty(int *, int *, char *, struct termios *, struct winsize *);
extern pid_t forkpty(int *, char *, struct termios *, struct winsize *);
# 700 "/Users/parrt/tmp/Python-3.3.1/Include/pyport.h"
# 1 "/usr/include/ctype.h" 1 3 4
# 69 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/runetype.h" 1 3 4
# 70 "/usr/include/runetype.h" 3 4
typedef __darwin_wint_t wint_t;
# 81 "/usr/include/runetype.h" 3 4
typedef struct {
 __darwin_rune_t __min;
 __darwin_rune_t __max;
 __darwin_rune_t __map;
 __uint32_t *__types;
} _RuneEntry;

typedef struct {
 int __nranges;
 _RuneEntry *__ranges;
} _RuneRange;

typedef struct {
 char __name[14];
 __uint32_t __mask;
} _RuneCharClass;

typedef struct {
 char __magic[8];
 char __encoding[32];

 __darwin_rune_t (*__sgetrune)(const char *, __darwin_size_t, char const **);
 int (*__sputrune)(__darwin_rune_t, char *, __darwin_size_t, char **);
 __darwin_rune_t __invalid_rune;

 __uint32_t __runetype[(1 <<8 )];
 __darwin_rune_t __maplower[(1 <<8 )];
 __darwin_rune_t __mapupper[(1 <<8 )];






 _RuneRange __runetype_ext;
 _RuneRange __maplower_ext;
 _RuneRange __mapupper_ext;

 void *__variable;
 int __variable_len;




 int __ncharclasses;
 _RuneCharClass *__charclasses;
} _RuneLocale;




extern _RuneLocale _DefaultRuneLocale;
extern _RuneLocale *_CurrentRuneLocale;

# 70 "/usr/include/ctype.h" 2 3 4
# 145 "/usr/include/ctype.h" 3 4

unsigned long ___runetype(__darwin_ct_rune_t);
__darwin_ct_rune_t ___tolower(__darwin_ct_rune_t);
__darwin_ct_rune_t ___toupper(__darwin_ct_rune_t);


static __inline int
isascii(int _c)
{
 return ((_c & ~0x7F) == 0);
}
# 164 "/usr/include/ctype.h" 3 4

int __maskrune(__darwin_ct_rune_t, unsigned long);



static __inline int
__istype(__darwin_ct_rune_t _c, unsigned long _f)
{



 return (isascii(_c) ? !!(_DefaultRuneLocale.__runetype[_c] & _f)
  : !!__maskrune(_c, _f));

}

static __inline __darwin_ct_rune_t
__isctype(__darwin_ct_rune_t _c, unsigned long _f)
{



 return (_c < 0 || _c >= (1 <<8 )) ? 0 :
  !!(_DefaultRuneLocale.__runetype[_c] & _f);

}
# 204 "/usr/include/ctype.h" 3 4

__darwin_ct_rune_t __toupper(__darwin_ct_rune_t);
__darwin_ct_rune_t __tolower(__darwin_ct_rune_t);



static __inline int
__wcwidth(__darwin_ct_rune_t _c)
{
 unsigned int _x;

 if (_c == 0)
  return (0);
 _x = (unsigned int)__maskrune(_c, 0xe0000000L|0x00040000L);
 if ((_x & 0xe0000000L) != 0)
  return ((_x & 0xe0000000L) >> 30);
 return ((_x & 0x00040000L) != 0 ? 1 : -1);
}






static __inline int
isalnum(int _c)
{
 return (__istype(_c, 0x00000100L|0x00000400L));
}

static __inline int
isalpha(int _c)
{
 return (__istype(_c, 0x00000100L));
}

static __inline int
isblank(int _c)
{
 return (__istype(_c, 0x00020000L));
}

static __inline int
iscntrl(int _c)
{
 return (__istype(_c, 0x00000200L));
}


static __inline int
isdigit(int _c)
{
 return (__isctype(_c, 0x00000400L));
}

static __inline int
isgraph(int _c)
{
 return (__istype(_c, 0x00000800L));
}

static __inline int
islower(int _c)
{
 return (__istype(_c, 0x00001000L));
}

static __inline int
isprint(int _c)
{
 return (__istype(_c, 0x00040000L));
}

static __inline int
ispunct(int _c)
{
 return (__istype(_c, 0x00002000L));
}

static __inline int
isspace(int _c)
{
 return (__istype(_c, 0x00004000L));
}

static __inline int
isupper(int _c)
{
 return (__istype(_c, 0x00008000L));
}


static __inline int
isxdigit(int _c)
{
 return (__isctype(_c, 0x00010000L));
}

static __inline int
toascii(int _c)
{
 return (_c & 0x7F);
}

static __inline int
tolower(int _c)
{
        return (__tolower(_c));
}

static __inline int
toupper(int _c)
{
        return (__toupper(_c));
}


static __inline int
digittoint(int _c)
{
 return (__maskrune(_c, 0x0F));
}

static __inline int
ishexnumber(int _c)
{
 return (__istype(_c, 0x00010000L));
}

static __inline int
isideogram(int _c)
{
 return (__istype(_c, 0x00080000L));
}

static __inline int
isnumber(int _c)
{
 return (__istype(_c, 0x00000400L));
}

static __inline int
isphonogram(int _c)
{
 return (__istype(_c, 0x00200000L));
}

static __inline int
isrune(int _c)
{
 return (__istype(_c, 0xFFFFFFF0L));
}

static __inline int
isspecial(int _c)
{
 return (__istype(_c, 0x00100000L));
}
# 701 "/Users/parrt/tmp/Python-3.3.1/Include/pyport.h" 2
# 1 "/usr/include/wctype.h" 1 3 4
# 39 "/usr/include/wctype.h" 3 4
typedef __darwin_wctrans_t wctrans_t;
# 53 "/usr/include/wctype.h" 3 4
# 1 "/usr/include/_wctype.h" 1 3 4
# 52 "/usr/include/_wctype.h" 3 4
typedef __darwin_wctype_t wctype_t;
# 71 "/usr/include/_wctype.h" 3 4
static __inline int
iswalnum(wint_t _wc)
{
 return (__istype(_wc, 0x00000100L|0x00000400L));
}

static __inline int
iswalpha(wint_t _wc)
{
 return (__istype(_wc, 0x00000100L));
}

static __inline int
iswcntrl(wint_t _wc)
{
 return (__istype(_wc, 0x00000200L));
}

static __inline int
iswctype(wint_t _wc, wctype_t _charclass)
{
 return (__istype(_wc, _charclass));
}

static __inline int
iswdigit(wint_t _wc)
{
 return (__isctype(_wc, 0x00000400L));
}

static __inline int
iswgraph(wint_t _wc)
{
 return (__istype(_wc, 0x00000800L));
}

static __inline int
iswlower(wint_t _wc)
{
 return (__istype(_wc, 0x00001000L));
}

static __inline int
iswprint(wint_t _wc)
{
 return (__istype(_wc, 0x00040000L));
}

static __inline int
iswpunct(wint_t _wc)
{
 return (__istype(_wc, 0x00002000L));
}

static __inline int
iswspace(wint_t _wc)
{
 return (__istype(_wc, 0x00004000L));
}

static __inline int
iswupper(wint_t _wc)
{
 return (__istype(_wc, 0x00008000L));
}

static __inline int
iswxdigit(wint_t _wc)
{
 return (__isctype(_wc, 0x00010000L));
}

static __inline wint_t
towlower(wint_t _wc)
{
        return (__tolower(_wc));
}

static __inline wint_t
towupper(wint_t _wc)
{
        return (__toupper(_wc));
}
# 176 "/usr/include/_wctype.h" 3 4

wctype_t
 wctype(const char *);

# 54 "/usr/include/wctype.h" 2 3 4
# 62 "/usr/include/wctype.h" 3 4
static __inline int
iswblank(wint_t _wc)
{
 return (__istype(_wc, 0x00020000L));
}


static __inline int
iswascii(wint_t _wc)
{
 return ((_wc & ~0x7F) == 0);
}

static __inline int
iswhexnumber(wint_t _wc)
{
 return (__istype(_wc, 0x00010000L));
}

static __inline int
iswideogram(wint_t _wc)
{
 return (__istype(_wc, 0x00080000L));
}

static __inline int
iswnumber(wint_t _wc)
{
 return (__istype(_wc, 0x00000400L));
}

static __inline int
iswphonogram(wint_t _wc)
{
 return (__istype(_wc, 0x00200000L));
}

static __inline int
iswrune(wint_t _wc)
{
 return (__istype(_wc, 0xFFFFFFF0L));
}

static __inline int
iswspecial(wint_t _wc)
{
 return (__istype(_wc, 0x00100000L));
}
# 130 "/usr/include/wctype.h" 3 4


wint_t nextwctype(wint_t, wctype_t);

wint_t towctrans(wint_t, wctrans_t);
wctrans_t
 wctrans(const char *);

# 702 "/Users/parrt/tmp/Python-3.3.1/Include/pyport.h" 2
# 51 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/pymacro.h" 1
# 52 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2

# 1 "/Users/parrt/tmp/Python-3.3.1/Include/pyatomic.h" 1







# 1 "/Users/parrt/tmp/Python-3.3.1/Include/dynamic_annotations.h" 1
# 375 "/Users/parrt/tmp/Python-3.3.1/Include/dynamic_annotations.h"
void AnnotateRWLockCreate(const char *file, int line,
                          const volatile void *lock);
void AnnotateRWLockDestroy(const char *file, int line,
                           const volatile void *lock);
void AnnotateRWLockAcquired(const char *file, int line,
                            const volatile void *lock, long is_w);
void AnnotateRWLockReleased(const char *file, int line,
                            const volatile void *lock, long is_w);
void AnnotateBarrierInit(const char *file, int line,
                         const volatile void *barrier, long count,
                         long reinitialization_allowed);
void AnnotateBarrierWaitBefore(const char *file, int line,
                               const volatile void *barrier);
void AnnotateBarrierWaitAfter(const char *file, int line,
                              const volatile void *barrier);
void AnnotateBarrierDestroy(const char *file, int line,
                            const volatile void *barrier);
void AnnotateCondVarWait(const char *file, int line,
                         const volatile void *cv,
                         const volatile void *lock);
void AnnotateCondVarSignal(const char *file, int line,
                           const volatile void *cv);
void AnnotateCondVarSignalAll(const char *file, int line,
                              const volatile void *cv);
void AnnotatePublishMemoryRange(const char *file, int line,
                                const volatile void *address,
                                long size);
void AnnotateUnpublishMemoryRange(const char *file, int line,
                                  const volatile void *address,
                                  long size);
void AnnotatePCQCreate(const char *file, int line,
                       const volatile void *pcq);
void AnnotatePCQDestroy(const char *file, int line,
                        const volatile void *pcq);
void AnnotatePCQPut(const char *file, int line,
                    const volatile void *pcq);
void AnnotatePCQGet(const char *file, int line,
                    const volatile void *pcq);
void AnnotateNewMemory(const char *file, int line,
                       const volatile void *address,
                       long size);
void AnnotateExpectRace(const char *file, int line,
                        const volatile void *address,
                        const char *description);
void AnnotateBenignRace(const char *file, int line,
                        const volatile void *address,
                        const char *description);
void AnnotateBenignRaceSized(const char *file, int line,
                        const volatile void *address,
                        long size,
                        const char *description);
void AnnotateMutexIsUsedAsCondVar(const char *file, int line,
                                  const volatile void *mu);
void AnnotateTraceMemory(const char *file, int line,
                         const volatile void *arg);
void AnnotateThreadName(const char *file, int line,
                        const char *name);
void AnnotateIgnoreReadsBegin(const char *file, int line);
void AnnotateIgnoreReadsEnd(const char *file, int line);
void AnnotateIgnoreWritesBegin(const char *file, int line);
void AnnotateIgnoreWritesEnd(const char *file, int line);
void AnnotateEnableRaceDetection(const char *file, int line, int enable);
void AnnotateNoOp(const char *file, int line,
                  const volatile void *arg);
void AnnotateFlushState(const char *file, int line);
# 456 "/Users/parrt/tmp/Python-3.3.1/Include/dynamic_annotations.h"
int RunningOnValgrind(void);
# 9 "/Users/parrt/tmp/Python-3.3.1/Include/pyatomic.h" 2
# 23 "/Users/parrt/tmp/Python-3.3.1/Include/pyatomic.h"
typedef enum _Py_memory_order {
    _Py_memory_order_relaxed,
    _Py_memory_order_acquire,
    _Py_memory_order_release,
    _Py_memory_order_acq_rel,
    _Py_memory_order_seq_cst
} _Py_memory_order;

typedef struct _Py_atomic_address {
    void *_value;
} _Py_atomic_address;

typedef struct _Py_atomic_int {
    int _value;
} _Py_atomic_int;





static __inline__ void
_Py_atomic_signal_fence(_Py_memory_order order)
{
    if (order != _Py_memory_order_relaxed)
        __asm__ volatile("":::"memory");
}

static __inline__ void
_Py_atomic_thread_fence(_Py_memory_order order)
{
    if (order != _Py_memory_order_relaxed)
        __asm__ volatile("mfence":::"memory");
}


static __inline__ void
_Py_ANNOTATE_MEMORY_ORDER(const volatile void *address, _Py_memory_order order)
{
    (void)address;
    switch(order) {
    case _Py_memory_order_release:
    case _Py_memory_order_acq_rel:
    case _Py_memory_order_seq_cst:
        ;
        break;
    case _Py_memory_order_relaxed:
    case _Py_memory_order_acquire:
        break;
    }
    switch(order) {
    case _Py_memory_order_acquire:
    case _Py_memory_order_acq_rel:
    case _Py_memory_order_seq_cst:
        ;
        break;
    case _Py_memory_order_relaxed:
    case _Py_memory_order_release:
        break;
    }
}
# 54 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 64 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h"
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/pymath.h" 1
# 65 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/pytime.h" 1





# 1 "/Users/parrt/tmp/Python-3.3.1/Include/object.h" 1
# 105 "/Users/parrt/tmp/Python-3.3.1/Include/object.h"
typedef struct _object {
   
    Py_ssize_t ob_refcnt;
    struct _typeobject *ob_type;
} PyObject;

typedef struct {
    PyObject ob_base;
    Py_ssize_t ob_size;
} PyVarObject;
# 140 "/Users/parrt/tmp/Python-3.3.1/Include/object.h"
typedef struct _Py_Identifier {
    struct _Py_Identifier *next;
    const char* string;
    PyObject *object;
} _Py_Identifier;
# 164 "/Users/parrt/tmp/Python-3.3.1/Include/object.h"
typedef PyObject * (*unaryfunc)(PyObject *);
typedef PyObject * (*binaryfunc)(PyObject *, PyObject *);
typedef PyObject * (*ternaryfunc)(PyObject *, PyObject *, PyObject *);
typedef int (*inquiry)(PyObject *);
typedef Py_ssize_t (*lenfunc)(PyObject *);
typedef PyObject *(*ssizeargfunc)(PyObject *, Py_ssize_t);
typedef PyObject *(*ssizessizeargfunc)(PyObject *, Py_ssize_t, Py_ssize_t);
typedef int(*ssizeobjargproc)(PyObject *, Py_ssize_t, PyObject *);
typedef int(*ssizessizeobjargproc)(PyObject *, Py_ssize_t, Py_ssize_t, PyObject *);
typedef int(*objobjargproc)(PyObject *, PyObject *, PyObject *);



typedef struct bufferinfo {
    void *buf;
    PyObject *obj;
    Py_ssize_t len;
    Py_ssize_t itemsize;

    int readonly;
    int ndim;
    char *format;
    Py_ssize_t *shape;
    Py_ssize_t *strides;
    Py_ssize_t *suboffsets;
    void *internal;
} Py_buffer;

typedef int (*getbufferproc)(PyObject *, Py_buffer *, int);
typedef void (*releasebufferproc)(PyObject *, Py_buffer *);
# 230 "/Users/parrt/tmp/Python-3.3.1/Include/object.h"
typedef int (*objobjproc)(PyObject *, PyObject *);
typedef int (*visitproc)(PyObject *, void *);
typedef int (*traverseproc)(PyObject *, visitproc, void *);


typedef struct {




    binaryfunc nb_add;
    binaryfunc nb_subtract;
    binaryfunc nb_multiply;
    binaryfunc nb_remainder;
    binaryfunc nb_divmod;
    ternaryfunc nb_power;
    unaryfunc nb_negative;
    unaryfunc nb_positive;
    unaryfunc nb_absolute;
    inquiry nb_bool;
    unaryfunc nb_invert;
    binaryfunc nb_lshift;
    binaryfunc nb_rshift;
    binaryfunc nb_and;
    binaryfunc nb_xor;
    binaryfunc nb_or;
    unaryfunc nb_int;
    void *nb_reserved;
    unaryfunc nb_float;

    binaryfunc nb_inplace_add;
    binaryfunc nb_inplace_subtract;
    binaryfunc nb_inplace_multiply;
    binaryfunc nb_inplace_remainder;
    ternaryfunc nb_inplace_power;
    binaryfunc nb_inplace_lshift;
    binaryfunc nb_inplace_rshift;
    binaryfunc nb_inplace_and;
    binaryfunc nb_inplace_xor;
    binaryfunc nb_inplace_or;

    binaryfunc nb_floor_divide;
    binaryfunc nb_true_divide;
    binaryfunc nb_inplace_floor_divide;
    binaryfunc nb_inplace_true_divide;

    unaryfunc nb_index;
} PyNumberMethods;

typedef struct {
    lenfunc sq_length;
    binaryfunc sq_concat;
    ssizeargfunc sq_repeat;
    ssizeargfunc sq_item;
    void *was_sq_slice;
    ssizeobjargproc sq_ass_item;
    void *was_sq_ass_slice;
    objobjproc sq_contains;

    binaryfunc sq_inplace_concat;
    ssizeargfunc sq_inplace_repeat;
} PySequenceMethods;

typedef struct {
    lenfunc mp_length;
    binaryfunc mp_subscript;
    objobjargproc mp_ass_subscript;
} PyMappingMethods;


typedef struct {
     getbufferproc bf_getbuffer;
     releasebufferproc bf_releasebuffer;
} PyBufferProcs;


typedef void (*freefunc)(void *);
typedef void (*destructor)(PyObject *);





typedef int (*printfunc)(PyObject *, FILE *, int);

typedef PyObject *(*getattrfunc)(PyObject *, char *);
typedef PyObject *(*getattrofunc)(PyObject *, PyObject *);
typedef int (*setattrfunc)(PyObject *, char *, PyObject *);
typedef int (*setattrofunc)(PyObject *, PyObject *, PyObject *);
typedef PyObject *(*reprfunc)(PyObject *);
typedef Py_hash_t (*hashfunc)(PyObject *);
typedef PyObject *(*richcmpfunc) (PyObject *, PyObject *, int);
typedef PyObject *(*getiterfunc) (PyObject *);
typedef PyObject *(*iternextfunc) (PyObject *);
typedef PyObject *(*descrgetfunc) (PyObject *, PyObject *, PyObject *);
typedef int (*descrsetfunc) (PyObject *, PyObject *, PyObject *);
typedef int (*initproc)(PyObject *, PyObject *, PyObject *);
typedef PyObject *(*newfunc)(struct _typeobject *, PyObject *, PyObject *);
typedef PyObject *(*allocfunc)(struct _typeobject *, Py_ssize_t);




typedef struct _typeobject {
    PyVarObject ob_base;
    const char *tp_name;
    Py_ssize_t tp_basicsize, tp_itemsize;



    destructor tp_dealloc;
    printfunc tp_print;
    getattrfunc tp_getattr;
    setattrfunc tp_setattr;
    void *tp_reserved;
    reprfunc tp_repr;



    PyNumberMethods *tp_as_number;
    PySequenceMethods *tp_as_sequence;
    PyMappingMethods *tp_as_mapping;



    hashfunc tp_hash;
    ternaryfunc tp_call;
    reprfunc tp_str;
    getattrofunc tp_getattro;
    setattrofunc tp_setattro;


    PyBufferProcs *tp_as_buffer;


    long tp_flags;

    const char *tp_doc;



    traverseproc tp_traverse;


    inquiry tp_clear;



    richcmpfunc tp_richcompare;


    Py_ssize_t tp_weaklistoffset;


    getiterfunc tp_iter;
    iternextfunc tp_iternext;


    struct PyMethodDef *tp_methods;
    struct PyMemberDef *tp_members;
    struct PyGetSetDef *tp_getset;
    struct _typeobject *tp_base;
    PyObject *tp_dict;
    descrgetfunc tp_descr_get;
    descrsetfunc tp_descr_set;
    Py_ssize_t tp_dictoffset;
    initproc tp_init;
    allocfunc tp_alloc;
    newfunc tp_new;
    freefunc tp_free;
    inquiry tp_is_gc;
    PyObject *tp_bases;
    PyObject *tp_mro;
    PyObject *tp_cache;
    PyObject *tp_subclasses;
    PyObject *tp_weaklist;
    destructor tp_del;


    unsigned int tp_version_tag;
# 419 "/Users/parrt/tmp/Python-3.3.1/Include/object.h"
} PyTypeObject;


typedef struct{
    int slot;
    void *pfunc;
} PyType_Slot;

typedef struct{
    const char* name;
    int basicsize;
    int itemsize;
    int flags;
    PyType_Slot *slots;
} PyType_Spec;

PyObject* PyType_FromSpec(PyType_Spec*);

PyObject* PyType_FromSpecWithBases(PyType_Spec*, PyObject*);




typedef struct _heaptypeobject {


    PyTypeObject ht_type;
    PyNumberMethods as_number;
    PyMappingMethods as_mapping;
    PySequenceMethods as_sequence;




    PyBufferProcs as_buffer;
    PyObject *ht_name, *ht_slots, *ht_qualname;
    struct _dictkeysobject *ht_cached_keys;

} PyHeapTypeObject;







int PyType_IsSubtype(PyTypeObject *, PyTypeObject *);



extern PyTypeObject PyType_Type;
extern PyTypeObject PyBaseObject_Type;
extern PyTypeObject PySuper_Type;

long PyType_GetFlags(PyTypeObject*);





int PyType_Ready(PyTypeObject *);
PyObject * PyType_GenericAlloc(PyTypeObject *, Py_ssize_t);
PyObject * PyType_GenericNew(PyTypeObject *,
                                               PyObject *, PyObject *);

PyObject * _PyType_Lookup(PyTypeObject *, PyObject *);
PyObject * _PyObject_LookupSpecial(PyObject *, _Py_Identifier *);
PyTypeObject * _PyType_CalculateMetaclass(PyTypeObject *, PyObject *);

unsigned int PyType_ClearCache(void);
void PyType_Modified(PyTypeObject *);


struct _Py_Identifier;

int PyObject_Print(PyObject *, FILE *, int);
void _Py_BreakPoint(void);
void _PyObject_Dump(PyObject *);

PyObject * PyObject_Repr(PyObject *);
PyObject * PyObject_Str(PyObject *);
PyObject * PyObject_ASCII(PyObject *);
PyObject * PyObject_Bytes(PyObject *);
PyObject * PyObject_RichCompare(PyObject *, PyObject *, int);
int PyObject_RichCompareBool(PyObject *, PyObject *, int);
PyObject * PyObject_GetAttrString(PyObject *, const char *);
int PyObject_SetAttrString(PyObject *, const char *, PyObject *);
int PyObject_HasAttrString(PyObject *, const char *);
PyObject * PyObject_GetAttr(PyObject *, PyObject *);
int PyObject_SetAttr(PyObject *, PyObject *, PyObject *);
int PyObject_HasAttr(PyObject *, PyObject *);
int _PyObject_IsAbstract(PyObject *);
PyObject * _PyObject_GetAttrId(PyObject *, struct _Py_Identifier *);
int _PyObject_SetAttrId(PyObject *, struct _Py_Identifier *, PyObject *);
int _PyObject_HasAttrId(PyObject *, struct _Py_Identifier *);

PyObject ** _PyObject_GetDictPtr(PyObject *);

PyObject * PyObject_SelfIter(PyObject *);

PyObject * _PyObject_NextNotImplemented(PyObject *);

PyObject * PyObject_GenericGetAttr(PyObject *, PyObject *);
int PyObject_GenericSetAttr(PyObject *,
                                              PyObject *, PyObject *);
int PyObject_GenericSetDict(PyObject *, PyObject *, void *);
Py_hash_t PyObject_Hash(PyObject *);
Py_hash_t PyObject_HashNotImplemented(PyObject *);
int PyObject_IsTrue(PyObject *);
int PyObject_Not(PyObject *);
int PyCallable_Check(PyObject *);

void PyObject_ClearWeakRefs(PyObject *);



PyObject *
_PyObject_GenericGetAttrWithDict(PyObject *, PyObject *, PyObject *);
int
_PyObject_GenericSetAttrWithDict(PyObject *, PyObject *,
                                 PyObject *, PyObject *);



PyObject *
_PyObject_GetBuiltin(const char *name);







PyObject * PyObject_Dir(PyObject *);



int Py_ReprEnter(PyObject *);
void Py_ReprLeave(PyObject *);



Py_hash_t _Py_HashDouble(double);
Py_hash_t _Py_HashPointer(void*);
Py_hash_t _Py_HashBytes(unsigned char*, Py_ssize_t);


typedef struct {
    Py_hash_t prefix;
    Py_hash_t suffix;
} _Py_HashSecret_t;
extern _Py_HashSecret_t _Py_HashSecret;
# 830 "/Users/parrt/tmp/Python-3.3.1/Include/object.h"
void Py_IncRef(PyObject *);
void Py_DecRef(PyObject *);







extern PyObject _Py_NoneStruct;
# 849 "/Users/parrt/tmp/Python-3.3.1/Include/object.h"
extern PyObject _Py_NotImplementedStruct;
# 867 "/Users/parrt/tmp/Python-3.3.1/Include/object.h"
extern int _Py_SwappedOp[];
# 966 "/Users/parrt/tmp/Python-3.3.1/Include/object.h"
void _PyTrash_deposit_object(PyObject*);
void _PyTrash_destroy_chain(void);
extern int _PyTrash_delete_nesting;
extern PyObject * _PyTrash_delete_later;


void _PyTrash_thread_deposit_object(PyObject*);
void _PyTrash_thread_destroy_chain(void);
# 993 "/Users/parrt/tmp/Python-3.3.1/Include/object.h"
void
_PyDebugAllocatorStats(FILE *out, const char *block_name, int num_blocks,
                       size_t sizeof_block);
void
_PyObject_DebugTypeStats(FILE *out);
# 7 "/Users/parrt/tmp/Python-3.3.1/Include/pytime.h" 2
# 17 "/Users/parrt/tmp/Python-3.3.1/Include/pytime.h"
typedef struct timeval _PyTime_timeval;
# 26 "/Users/parrt/tmp/Python-3.3.1/Include/pytime.h"
typedef struct {
    const char *implementation;
    int monotonic;
    int adjustable;
    double resolution;
} _Py_clock_info_t;




void _PyTime_gettimeofday(_PyTime_timeval *tp);



void _PyTime_gettimeofday_info(
    _PyTime_timeval *tp,
    _Py_clock_info_t *info);
# 57 "/Users/parrt/tmp/Python-3.3.1/Include/pytime.h"
int _PyTime_ObjectToTime_t(
    PyObject *obj,
    time_t *sec);


PyObject * _PyLong_FromTime_t(
    time_t sec);


time_t _PyLong_AsTime_t(
    PyObject *obj);




int _PyTime_ObjectToTimeval(
    PyObject *obj,
    time_t *sec,
    long *usec);




int _PyTime_ObjectToTimespec(
    PyObject *obj,
    time_t *sec,
    long *nsec);



void _PyTime_Init(void);
# 66 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/pymem.h" 1
# 52 "/Users/parrt/tmp/Python-3.3.1/Include/pymem.h"
void * PyMem_Malloc(size_t);
void * PyMem_Realloc(void *, size_t);
void PyMem_Free(void *);
# 67 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2


# 1 "/Users/parrt/tmp/Python-3.3.1/Include/objimpl.h" 1
# 97 "/Users/parrt/tmp/Python-3.3.1/Include/objimpl.h"
void * PyObject_Malloc(size_t);
void * PyObject_Realloc(void *, size_t);
void PyObject_Free(void *);





void _PyObject_DebugMallocStats(FILE *out);
# 149 "/Users/parrt/tmp/Python-3.3.1/Include/objimpl.h"
PyObject * PyObject_Init(PyObject *, PyTypeObject *);
PyVarObject * PyObject_InitVar(PyVarObject *,
                                                 PyTypeObject *, Py_ssize_t);
PyObject * _PyObject_New(PyTypeObject *);
PyVarObject * _PyObject_NewVar(PyTypeObject *, Py_ssize_t);
# 231 "/Users/parrt/tmp/Python-3.3.1/Include/objimpl.h"
Py_ssize_t PyGC_Collect(void);
# 240 "/Users/parrt/tmp/Python-3.3.1/Include/objimpl.h"
PyVarObject * _PyObject_GC_Resize(PyVarObject *, Py_ssize_t);





typedef union _gc_head {
    struct {
        union _gc_head *gc_next;
        union _gc_head *gc_prev;
        Py_ssize_t gc_refs;
    } gc;
    long double dummy;
} PyGC_Head;

extern PyGC_Head *_PyGC_generation0;
# 300 "/Users/parrt/tmp/Python-3.3.1/Include/objimpl.h"
PyObject * _PyObject_GC_Malloc(size_t);
PyObject * _PyObject_GC_New(PyTypeObject *);
PyVarObject * _PyObject_GC_NewVar(PyTypeObject *, Py_ssize_t);
void PyObject_GC_Track(void *);
void PyObject_GC_UnTrack(void *);
void PyObject_GC_Del(void *);
# 70 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/typeslots.h" 1
# 71 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2

# 1 "/Users/parrt/tmp/Python-3.3.1/Include/pydebug.h" 1







extern int Py_DebugFlag;
extern int Py_VerboseFlag;
extern int Py_QuietFlag;
extern int Py_InteractiveFlag;
extern int Py_InspectFlag;
extern int Py_OptimizeFlag;
extern int Py_NoSiteFlag;
extern int Py_BytesWarningFlag;
extern int Py_UseClassExceptionsFlag;
extern int Py_FrozenFlag;
extern int Py_IgnoreEnvironmentFlag;
extern int Py_DontWriteBytecodeFlag;
extern int Py_NoUserSiteDirectory;
extern int Py_UnbufferedStdioFlag;
extern int Py_HashRandomizationFlag;
# 73 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2

# 1 "/Users/parrt/tmp/Python-3.3.1/Include/bytearrayobject.h" 1
# 9 "/Users/parrt/tmp/Python-3.3.1/Include/bytearrayobject.h"
# 1 "/Developer/usr/llvm-gcc-4.2/lib/gcc/i686-apple-darwin11/4.2.1/include/stdarg.h" 1 3 4
# 43 "/Developer/usr/llvm-gcc-4.2/lib/gcc/i686-apple-darwin11/4.2.1/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 10 "/Users/parrt/tmp/Python-3.3.1/Include/bytearrayobject.h" 2
# 23 "/Users/parrt/tmp/Python-3.3.1/Include/bytearrayobject.h"
typedef struct {
    PyVarObject ob_base;

    int ob_exports;
    Py_ssize_t ob_alloc;
    char *ob_bytes;
} PyByteArrayObject;



extern PyTypeObject PyByteArray_Type;
extern PyTypeObject PyByteArrayIter_Type;






PyObject * PyByteArray_FromObject(PyObject *);
PyObject * PyByteArray_Concat(PyObject *, PyObject *);
PyObject * PyByteArray_FromStringAndSize(const char *, Py_ssize_t);
Py_ssize_t PyByteArray_Size(PyObject *);
char * PyByteArray_AsString(PyObject *);
int PyByteArray_Resize(PyObject *, Py_ssize_t);
# 55 "/Users/parrt/tmp/Python-3.3.1/Include/bytearrayobject.h"
extern char _PyByteArray_empty_string[];
# 75 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/bytesobject.h" 1
# 31 "/Users/parrt/tmp/Python-3.3.1/Include/bytesobject.h"
typedef struct {
    PyVarObject ob_base;
    Py_hash_t ob_shash;
    char ob_sval[1];






} PyBytesObject;


extern PyTypeObject PyBytes_Type;
extern PyTypeObject PyBytesIter_Type;





PyObject * PyBytes_FromStringAndSize(const char *, Py_ssize_t);
PyObject * PyBytes_FromString(const char *);
PyObject * PyBytes_FromObject(PyObject *);
PyObject * PyBytes_FromFormatV(const char*, va_list)
    __attribute__((format(printf, 1, 0)));
PyObject * PyBytes_FromFormat(const char*, ...)
    __attribute__((format(printf, 1, 2)));
Py_ssize_t PyBytes_Size(PyObject *);
char * PyBytes_AsString(PyObject *);
PyObject * PyBytes_Repr(PyObject *, int);
void PyBytes_Concat(PyObject **, PyObject *);
void PyBytes_ConcatAndDel(PyObject **, PyObject *);

int _PyBytes_Resize(PyObject **, Py_ssize_t);

PyObject * PyBytes_DecodeEscape(const char *, Py_ssize_t,
         const char *, Py_ssize_t,
         const char *);
# 80 "/Users/parrt/tmp/Python-3.3.1/Include/bytesobject.h"
PyObject * _PyBytes_Join(PyObject *sep, PyObject *x);







int PyBytes_AsStringAndSize(
    register PyObject *obj,
    register char **s,
    register Py_ssize_t *len


    );





Py_ssize_t _PyBytes_InsertThousandsGroupingLocale(char *buffer,
                                                   Py_ssize_t n_buffer,
                                                   char *digits,
                                                   Py_ssize_t n_digits,
                                                   Py_ssize_t min_width);




Py_ssize_t _PyBytes_InsertThousandsGrouping(char *buffer,
                                                   Py_ssize_t n_buffer,
                                                   char *digits,
                                                   Py_ssize_t n_digits,
                                                   Py_ssize_t min_width,
                                                   const char *grouping,
                                                   const char *thousands_sep);
# 76 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h" 1
# 93 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
typedef wchar_t Py_UNICODE;
# 115 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
# 1 "/usr/include/wchar.h" 1 3 4
# 85 "/usr/include/wchar.h" 3 4
typedef __darwin_mbstate_t mbstate_t;
# 120 "/usr/include/wchar.h" 3 4

wint_t btowc(int);
wint_t fgetwc(FILE *);
wchar_t *fgetws(wchar_t * , int, FILE * );
wint_t fputwc(wchar_t, FILE *);
int fputws(const wchar_t * , FILE * );
int fwide(FILE *, int);
int fwprintf(FILE * , const wchar_t * , ...) ;
int fwscanf(FILE * , const wchar_t * , ...) ;
wint_t getwc(FILE *);
wint_t getwchar(void);
size_t mbrlen(const char * , size_t, mbstate_t * );
size_t mbrtowc(wchar_t * , const char * , size_t,
     mbstate_t * );
int mbsinit(const mbstate_t *);
size_t mbsrtowcs(wchar_t * , const char ** , size_t,
     mbstate_t * );
wint_t putwc(wchar_t, FILE *);
wint_t putwchar(wchar_t);
int swprintf(wchar_t * , size_t, const wchar_t * ,
     ...) ;
int swscanf(const wchar_t * , const wchar_t * , ...) ;
wint_t ungetwc(wint_t, FILE *);
int vfwprintf(FILE * , const wchar_t * ,
     __darwin_va_list) ;
int vswprintf(wchar_t * , size_t, const wchar_t * ,
     __darwin_va_list) ;
int vwprintf(const wchar_t * , __darwin_va_list) ;
size_t wcrtomb(char * , wchar_t, mbstate_t * );
wchar_t *wcscat(wchar_t * , const wchar_t * );
wchar_t *wcschr(const wchar_t *, wchar_t);
int wcscmp(const wchar_t *, const wchar_t *);
int wcscoll(const wchar_t *, const wchar_t *);
wchar_t *wcscpy(wchar_t * , const wchar_t * );
size_t wcscspn(const wchar_t *, const wchar_t *);
size_t wcsftime(wchar_t * , size_t, const wchar_t * ,
     const struct tm * ) __asm("_" "wcsftime" );
size_t wcslen(const wchar_t *);
wchar_t *wcsncat(wchar_t * , const wchar_t * , size_t);
int wcsncmp(const wchar_t *, const wchar_t *, size_t);
wchar_t *wcsncpy(wchar_t * , const wchar_t * , size_t);
wchar_t *wcspbrk(const wchar_t *, const wchar_t *);
wchar_t *wcsrchr(const wchar_t *, wchar_t);
size_t wcsrtombs(char * , const wchar_t ** , size_t,
     mbstate_t * );
size_t wcsspn(const wchar_t *, const wchar_t *);
wchar_t *wcsstr(const wchar_t * , const wchar_t * );
size_t wcsxfrm(wchar_t * , const wchar_t * , size_t);
int wctob(wint_t);
double wcstod(const wchar_t * , wchar_t ** );
wchar_t *wcstok(wchar_t * , const wchar_t * ,
     wchar_t ** );
long wcstol(const wchar_t * , wchar_t ** , int);
unsigned long
  wcstoul(const wchar_t * , wchar_t ** , int);
wchar_t *wmemchr(const wchar_t *, wchar_t, size_t);
int wmemcmp(const wchar_t *, const wchar_t *, size_t);
wchar_t *wmemcpy(wchar_t * , const wchar_t * , size_t);
wchar_t *wmemmove(wchar_t *, const wchar_t *, size_t);
wchar_t *wmemset(wchar_t *, wchar_t, size_t);
int wprintf(const wchar_t * , ...) ;
int wscanf(const wchar_t * , ...) ;
int wcswidth(const wchar_t *, size_t);
int wcwidth(wchar_t);

# 194 "/usr/include/wchar.h" 3 4

int vfwscanf(FILE * , const wchar_t * ,
     __darwin_va_list) ;
int vswscanf(const wchar_t * , const wchar_t * ,
     __darwin_va_list) ;
int vwscanf(const wchar_t * , __darwin_va_list) ;
float wcstof(const wchar_t * , wchar_t ** );
long double
 wcstold(const wchar_t * , wchar_t ** ) ;

long long
 wcstoll(const wchar_t * , wchar_t ** , int);
unsigned long long
 wcstoull(const wchar_t * , wchar_t ** , int);


# 219 "/usr/include/wchar.h" 3 4

size_t mbsnrtowcs(wchar_t * , const char ** , size_t,
            size_t, mbstate_t * );
wchar_t *wcpcpy(wchar_t * , const wchar_t * ) __attribute__((visibility("default")));
wchar_t *wcpncpy(wchar_t * , const wchar_t * , size_t) __attribute__((visibility("default")));
wchar_t *wcsdup(const wchar_t *) __attribute__((visibility("default")));
int wcscasecmp(const wchar_t *, const wchar_t *) __attribute__((visibility("default")));
int wcsncasecmp(const wchar_t *, const wchar_t *, size_t n) __attribute__((visibility("default")));
size_t wcsnlen(const wchar_t *, size_t) __attribute__((visibility("default")));
size_t wcsnrtombs(char * , const wchar_t ** , size_t,
            size_t, mbstate_t * );









wchar_t *fgetwln(FILE * , size_t *) __attribute__((visibility("default")));
size_t wcslcat(wchar_t *, const wchar_t *, size_t);
size_t wcslcpy(wchar_t *, const wchar_t *, size_t);

# 116 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h" 2





typedef unsigned int Py_UCS4;







typedef unsigned short Py_UCS2;




typedef unsigned char Py_UCS1;
# 217 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
typedef struct {
# 291 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
    PyObject ob_base;
    Py_ssize_t length;
    Py_hash_t hash;
    struct {
# 303 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
        unsigned int interned:2;
# 331 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
        unsigned int kind:3;




        unsigned int compact:1;



        unsigned int ascii:1;




        unsigned int ready:1;
    } state;
    wchar_t *wstr;
} PyASCIIObject;




typedef struct {
    PyASCIIObject _base;
    Py_ssize_t utf8_length;

    char *utf8;
    Py_ssize_t wstr_length;

} PyCompactUnicodeObject;




typedef struct {
    PyCompactUnicodeObject _base;
    union {
        void *any;
        Py_UCS1 *latin1;
        Py_UCS2 *ucs2;
        Py_UCS4 *ucs4;
    } data;
} PyUnicodeObject;


extern PyTypeObject PyUnicode_Type;
extern PyTypeObject PyUnicodeIter_Type;
# 448 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
enum PyUnicode_Kind {



    PyUnicode_WCHAR_KIND = 0,

    PyUnicode_1BYTE_KIND = 1,
    PyUnicode_2BYTE_KIND = 2,
    PyUnicode_4BYTE_KIND = 4
};
# 599 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* PyUnicode_New(
    Py_ssize_t size,
    Py_UCS4 maxchar
    );
# 613 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
int _PyUnicode_Ready(
    PyObject *unicode
    );




PyObject* _PyUnicode_Copy(
    PyObject *unicode
    );
# 644 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
Py_ssize_t PyUnicode_CopyCharacters(
    PyObject *to,
    Py_ssize_t to_start,
    PyObject *from,
    Py_ssize_t from_start,
    Py_ssize_t how_many
    );




void _PyUnicode_FastCopyCharacters(
    PyObject *to,
    Py_ssize_t to_start,
    PyObject *from,
    Py_ssize_t from_start,
    Py_ssize_t how_many
    );
# 673 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
Py_ssize_t PyUnicode_Fill(
    PyObject *unicode,
    Py_ssize_t start,
    Py_ssize_t length,
    Py_UCS4 fill_char
    );



void _PyUnicode_FastFill(
    PyObject *unicode,
    Py_ssize_t start,
    Py_ssize_t length,
    Py_UCS4 fill_char
    );
# 701 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* PyUnicode_FromUnicode(
    const Py_UNICODE *u,
    Py_ssize_t size
    );



PyObject* PyUnicode_FromStringAndSize(
    const char *u,
    Py_ssize_t size
    );



PyObject* PyUnicode_FromString(
    const char *u
    );




PyObject* PyUnicode_FromKindAndData(
    int kind,
    const void *buffer,
    Py_ssize_t size);



PyObject* _PyUnicode_FromASCII(
    const char *buffer,
    Py_ssize_t size);


PyObject* PyUnicode_Substring(
    PyObject *str,
    Py_ssize_t start,
    Py_ssize_t end);




Py_UCS4 _PyUnicode_FindMaxChar (
    PyObject *unicode,
    Py_ssize_t start,
    Py_ssize_t end);







Py_UCS4* PyUnicode_AsUCS4(
    PyObject *unicode,
    Py_UCS4* buffer,
    Py_ssize_t buflen,
    int copy_null);




Py_UCS4* PyUnicode_AsUCS4Copy(PyObject *unicode);







Py_UNICODE * PyUnicode_AsUnicode(
    PyObject *unicode
    );
# 781 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
Py_UNICODE * PyUnicode_AsUnicodeAndSize(
    PyObject *unicode,
    Py_ssize_t *size
    );




Py_ssize_t PyUnicode_GetLength(
    PyObject *unicode
);




Py_ssize_t PyUnicode_GetSize(
    PyObject *unicode
    );



Py_UCS4 PyUnicode_ReadChar(
    PyObject *unicode,
    Py_ssize_t index
    );






int PyUnicode_WriteChar(
    PyObject *unicode,
    Py_ssize_t index,
    Py_UCS4 character
    );



Py_UNICODE PyUnicode_GetMax(void);
# 839 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
int PyUnicode_Resize(
    PyObject **unicode,
    Py_ssize_t length
    );
# 861 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* PyUnicode_FromEncodedObject(
    register PyObject *obj,
    const char *encoding,
    const char *errors
    );
# 880 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* PyUnicode_FromObject(
    register PyObject *obj
    );

PyObject * PyUnicode_FromFormatV(
    const char *format,
    va_list vargs
    );
PyObject * PyUnicode_FromFormat(
    const char *format,
    ...
    );


typedef struct {
    PyObject *buffer;
    void *data;
    enum PyUnicode_Kind kind;
    Py_UCS4 maxchar;
    Py_ssize_t size;
    Py_ssize_t pos;


    Py_ssize_t min_length;
    unsigned char overallocate;


    unsigned char readonly;
} _PyUnicodeWriter ;






void
_PyUnicodeWriter_Init(_PyUnicodeWriter *writer, Py_ssize_t min_length);
# 932 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
int
_PyUnicodeWriter_PrepareInternal(_PyUnicodeWriter *writer,
                                 Py_ssize_t length, Py_UCS4 maxchar);

int
_PyUnicodeWriter_WriteStr(_PyUnicodeWriter *writer, PyObject *str);

PyObject *
_PyUnicodeWriter_Finish(_PyUnicodeWriter *writer);

void
_PyUnicodeWriter_Dealloc(_PyUnicodeWriter *writer);





int _PyUnicode_FormatAdvancedWriter(
    _PyUnicodeWriter *writer,
    PyObject *obj,
    PyObject *format_spec,
    Py_ssize_t start,
    Py_ssize_t end);


void PyUnicode_InternInPlace(PyObject **);
void PyUnicode_InternImmortal(PyObject **);
PyObject * PyUnicode_InternFromString(
    const char *u
    );

void _Py_ReleaseInternedUnicodeStrings(void);
# 979 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* PyUnicode_FromWideChar(
    register const wchar_t *w,
    Py_ssize_t size
    );
# 996 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
Py_ssize_t PyUnicode_AsWideChar(
    PyObject *unicode,
    register wchar_t *w,
    Py_ssize_t size
    );
# 1010 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
wchar_t* PyUnicode_AsWideCharString(
    PyObject *unicode,
    Py_ssize_t *size
    );


void* _PyUnicode_AsKind(PyObject *s, unsigned int kind);
# 1030 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* PyUnicode_FromOrdinal(int ordinal);
# 1041 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
int PyUnicode_ClearFreeList(void);
# 1084 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
char * PyUnicode_AsUTF8AndSize(
    PyObject *unicode,
    Py_ssize_t *size);
# 1111 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
char * PyUnicode_AsUTF8(PyObject *unicode);





const char* PyUnicode_GetDefaultEncoding(void);






PyObject* PyUnicode_Decode(
    const char *s,
    Py_ssize_t size,
    const char *encoding,
    const char *errors
    );




PyObject* PyUnicode_AsDecodedObject(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );




PyObject* PyUnicode_AsDecodedUnicode(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );





PyObject* PyUnicode_Encode(
    const Py_UNICODE *s,
    Py_ssize_t size,
    const char *encoding,
    const char *errors
    );





PyObject* PyUnicode_AsEncodedObject(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );




PyObject* PyUnicode_AsEncodedString(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );




PyObject* PyUnicode_AsEncodedUnicode(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );



PyObject* PyUnicode_BuildEncodingMap(
    PyObject* string
   );



PyObject* PyUnicode_DecodeUTF7(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

PyObject* PyUnicode_DecodeUTF7Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    Py_ssize_t *consumed
    );


PyObject* PyUnicode_EncodeUTF7(
    const Py_UNICODE *data,
    Py_ssize_t length,
    int base64SetO,
    int base64WhiteSpace,
    const char *errors
    );
PyObject* _PyUnicode_EncodeUTF7(
    PyObject *unicode,
    int base64SetO,
    int base64WhiteSpace,
    const char *errors
    );




PyObject* PyUnicode_DecodeUTF8(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

PyObject* PyUnicode_DecodeUTF8Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    Py_ssize_t *consumed
    );

PyObject* PyUnicode_AsUTF8String(
    PyObject *unicode
    );


PyObject* _PyUnicode_AsUTF8String(
    PyObject *unicode,
    const char *errors);

PyObject* PyUnicode_EncodeUTF8(
    const Py_UNICODE *data,
    Py_ssize_t length,
    const char *errors
    );
# 1281 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* PyUnicode_DecodeUTF32(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder


    );

PyObject* PyUnicode_DecodeUTF32Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder,


    Py_ssize_t *consumed
    );




PyObject* PyUnicode_AsUTF32String(
    PyObject *unicode
    );
# 1324 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* PyUnicode_EncodeUTF32(
    const Py_UNICODE *data,
    Py_ssize_t length,
    const char *errors,
    int byteorder
    );
PyObject* _PyUnicode_EncodeUTF32(
    PyObject *object,
    const char *errors,
    int byteorder
    );
# 1362 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* PyUnicode_DecodeUTF16(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder


    );

PyObject* PyUnicode_DecodeUTF16Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder,


    Py_ssize_t *consumed
    );




PyObject* PyUnicode_AsUTF16String(
    PyObject *unicode
    );
# 1409 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* PyUnicode_EncodeUTF16(
    const Py_UNICODE *data,
    Py_ssize_t length,
    const char *errors,
    int byteorder
    );
PyObject* _PyUnicode_EncodeUTF16(
    PyObject* unicode,
    const char *errors,
    int byteorder
    );




PyObject* PyUnicode_DecodeUnicodeEscape(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

PyObject* PyUnicode_AsUnicodeEscapeString(
    PyObject *unicode
    );


PyObject* PyUnicode_EncodeUnicodeEscape(
    const Py_UNICODE *data,
    Py_ssize_t length
    );




PyObject* PyUnicode_DecodeRawUnicodeEscape(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

PyObject* PyUnicode_AsRawUnicodeEscapeString(
    PyObject *unicode
    );


PyObject* PyUnicode_EncodeRawUnicodeEscape(
    const Py_UNICODE *data,
    Py_ssize_t length
    );







PyObject *_PyUnicode_DecodeUnicodeInternal(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );
# 1478 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* PyUnicode_DecodeLatin1(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

PyObject* PyUnicode_AsLatin1String(
    PyObject *unicode
    );


PyObject* _PyUnicode_AsLatin1String(
    PyObject* unicode,
    const char* errors);

PyObject* PyUnicode_EncodeLatin1(
    const Py_UNICODE *data,
    Py_ssize_t length,
    const char *errors
    );
# 1506 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* PyUnicode_DecodeASCII(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

PyObject* PyUnicode_AsASCIIString(
    PyObject *unicode
    );


PyObject* _PyUnicode_AsASCIIString(
    PyObject* unicode,
    const char* errors);

PyObject* PyUnicode_EncodeASCII(
    const Py_UNICODE *data,
    Py_ssize_t length,
    const char *errors
    );
# 1550 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* PyUnicode_DecodeCharmap(
    const char *string,
    Py_ssize_t length,
    PyObject *mapping,

    const char *errors
    );

PyObject* PyUnicode_AsCharmapString(
    PyObject *unicode,
    PyObject *mapping

    );


PyObject* PyUnicode_EncodeCharmap(
    const Py_UNICODE *data,
    Py_ssize_t length,
    PyObject *mapping,

    const char *errors
    );
PyObject* _PyUnicode_EncodeCharmap(
    PyObject *unicode,
    PyObject *mapping,

    const char *errors
    );
# 1594 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject * PyUnicode_TranslateCharmap(
    const Py_UNICODE *data,
    Py_ssize_t length,
    PyObject *table,
    const char *errors
    );
# 1672 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
int PyUnicode_EncodeDecimal(
    Py_UNICODE *s,
    Py_ssize_t length,
    char *output,
    const char *errors
    );
# 1687 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* PyUnicode_TransformDecimalToASCII(
    Py_UNICODE *s,
    Py_ssize_t length
    );
# 1699 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* _PyUnicode_TransformDecimalAndSpaceToASCII(
    PyObject *unicode
    );
# 1714 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* PyUnicode_DecodeLocaleAndSize(
    const char *str,
    Py_ssize_t len,
    const char *errors);




PyObject* PyUnicode_DecodeLocale(
    const char *str,
    const char *errors);






PyObject* PyUnicode_EncodeLocale(
    PyObject *unicode,
    const char *errors
    );






int PyUnicode_FSConverter(PyObject*, void*);




int PyUnicode_FSDecoder(PyObject*, void*);
# 1757 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* PyUnicode_DecodeFSDefault(
    const char *s
    );
# 1768 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* PyUnicode_DecodeFSDefaultAndSize(
    const char *s,
    Py_ssize_t size
    );
# 1780 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* PyUnicode_EncodeFSDefault(
    PyObject *unicode
    );
# 1792 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* PyUnicode_Concat(
    PyObject *left,
    PyObject *right
    );




void PyUnicode_Append(
    PyObject **pleft,
    PyObject *right
    );




void PyUnicode_AppendAndDel(
    PyObject **pleft,
    PyObject *right
    );
# 1824 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* PyUnicode_Split(
    PyObject *s,
    PyObject *sep,
    Py_ssize_t maxsplit
    );






PyObject* PyUnicode_Splitlines(
    PyObject *s,
    int keepends
    );



PyObject* PyUnicode_Partition(
    PyObject *s,
    PyObject *sep
    );




PyObject* PyUnicode_RPartition(
    PyObject *s,
    PyObject *sep
    );
# 1868 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* PyUnicode_RSplit(
    PyObject *s,
    PyObject *sep,
    Py_ssize_t maxsplit
    );
# 1886 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject * PyUnicode_Translate(
    PyObject *str,
    PyObject *table,
    const char *errors
    );




PyObject* PyUnicode_Join(
    PyObject *separator,
    PyObject *seq
    );




Py_ssize_t PyUnicode_Tailmatch(
    PyObject *str,
    PyObject *substr,
    Py_ssize_t start,
    Py_ssize_t end,
    int direction
    );





Py_ssize_t PyUnicode_Find(
    PyObject *str,
    PyObject *substr,
    Py_ssize_t start,
    Py_ssize_t end,
    int direction
    );


Py_ssize_t PyUnicode_FindChar(
    PyObject *str,
    Py_UCS4 ch,
    Py_ssize_t start,
    Py_ssize_t end,
    int direction
    );



Py_ssize_t PyUnicode_Count(
    PyObject *str,
    PyObject *substr,
    Py_ssize_t start,
    Py_ssize_t end
    );




PyObject * PyUnicode_Replace(
    PyObject *str,
    PyObject *substr,
    PyObject *replstr,
    Py_ssize_t maxcount

    );




int PyUnicode_Compare(
    PyObject *left,
    PyObject *right
    );

int PyUnicode_CompareWithASCIIString(
    PyObject *left,
    const char *right
    );
# 1981 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject * PyUnicode_RichCompare(
    PyObject *left,
    PyObject *right,
    int op
    );




PyObject * PyUnicode_Format(
    PyObject *format,
    PyObject *args
    );







int PyUnicode_Contains(
    PyObject *container,
    PyObject *element
    );




int _PyUnicode_HasNULChars(PyObject *);




int PyUnicode_IsIdentifier(PyObject *s);



PyObject * _PyUnicode_XStrip(
    PyObject *self,
    int striptype,
    PyObject *sepobj
    );






Py_ssize_t _PyUnicode_InsertThousandsGrouping(
    PyObject *unicode,
    Py_ssize_t index,
    Py_ssize_t n_buffer,
    void *digits,
    Py_ssize_t n_digits,
    Py_ssize_t min_width,
    const char *grouping,
    PyObject *thousands_sep,
    Py_UCS4 *maxchar);






extern const unsigned char _Py_ascii_whitespace[];
# 2054 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
int _PyUnicode_IsLowercase(
    Py_UCS4 ch
    );

int _PyUnicode_IsUppercase(
    Py_UCS4 ch
    );

int _PyUnicode_IsTitlecase(
    Py_UCS4 ch
    );

int _PyUnicode_IsXidStart(
    Py_UCS4 ch
    );

int _PyUnicode_IsXidContinue(
    Py_UCS4 ch
    );

int _PyUnicode_IsWhitespace(
    const Py_UCS4 ch
    );

int _PyUnicode_IsLinebreak(
    const Py_UCS4 ch
    );

Py_UCS4 _PyUnicode_ToLowercase(
    Py_UCS4 ch
    );

Py_UCS4 _PyUnicode_ToUppercase(
    Py_UCS4 ch
    );

Py_UCS4 _PyUnicode_ToTitlecase(
    Py_UCS4 ch
    );

int _PyUnicode_ToLowerFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );

int _PyUnicode_ToTitleFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );

int _PyUnicode_ToUpperFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );

int _PyUnicode_ToFoldedFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );

int _PyUnicode_IsCaseIgnorable(
    Py_UCS4 ch
    );

int _PyUnicode_IsCased(
    Py_UCS4 ch
    );

int _PyUnicode_ToDecimalDigit(
    Py_UCS4 ch
    );

int _PyUnicode_ToDigit(
    Py_UCS4 ch
    );

double _PyUnicode_ToNumeric(
    Py_UCS4 ch
    );

int _PyUnicode_IsDecimalDigit(
    Py_UCS4 ch
    );

int _PyUnicode_IsDigit(
    Py_UCS4 ch
    );

int _PyUnicode_IsNumeric(
    Py_UCS4 ch
    );

int _PyUnicode_IsPrintable(
    Py_UCS4 ch
    );

int _PyUnicode_IsAlpha(
    Py_UCS4 ch
    );

size_t Py_UNICODE_strlen(
    const Py_UNICODE *u
    );

Py_UNICODE* Py_UNICODE_strcpy(
    Py_UNICODE *s1,
    const Py_UNICODE *s2);

Py_UNICODE* Py_UNICODE_strcat(
    Py_UNICODE *s1, const Py_UNICODE *s2);

Py_UNICODE* Py_UNICODE_strncpy(
    Py_UNICODE *s1,
    const Py_UNICODE *s2,
    size_t n);

int Py_UNICODE_strcmp(
    const Py_UNICODE *s1,
    const Py_UNICODE *s2
    );

int Py_UNICODE_strncmp(
    const Py_UNICODE *s1,
    const Py_UNICODE *s2,
    size_t n
    );

Py_UNICODE* Py_UNICODE_strchr(
    const Py_UNICODE *s,
    Py_UNICODE c
    );

Py_UNICODE* Py_UNICODE_strrchr(
    const Py_UNICODE *s,
    Py_UNICODE c
    );





Py_UNICODE* PyUnicode_AsUnicodeCopy(
    PyObject *unicode
    );
# 2207 "/Users/parrt/tmp/Python-3.3.1/Include/unicodeobject.h"
PyObject* _PyUnicode_FromId(_Py_Identifier*);

void _PyUnicode_ClearStaticStrings(void);
# 77 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/longobject.h" 1
# 10 "/Users/parrt/tmp/Python-3.3.1/Include/longobject.h"
typedef struct _longobject PyLongObject;

extern PyTypeObject PyLong_Type;





PyObject * PyLong_FromLong(long);
PyObject * PyLong_FromUnsignedLong(unsigned long);
PyObject * PyLong_FromSize_t(size_t);
PyObject * PyLong_FromSsize_t(Py_ssize_t);
PyObject * PyLong_FromDouble(double);
long PyLong_AsLong(PyObject *);
long PyLong_AsLongAndOverflow(PyObject *, int *);
Py_ssize_t PyLong_AsSsize_t(PyObject *);
size_t PyLong_AsSize_t(PyObject *);
unsigned long PyLong_AsUnsignedLong(PyObject *);
unsigned long PyLong_AsUnsignedLongMask(PyObject *);

int _PyLong_AsInt(PyObject *);

PyObject * PyLong_GetInfo(void);
# 57 "/Users/parrt/tmp/Python-3.3.1/Include/longobject.h"
extern unsigned char _PyLong_DigitValue[256];
# 67 "/Users/parrt/tmp/Python-3.3.1/Include/longobject.h"
double _PyLong_Frexp(PyLongObject *a, Py_ssize_t *e);


double PyLong_AsDouble(PyObject *);
PyObject * PyLong_FromVoidPtr(void *);
void * PyLong_AsVoidPtr(PyObject *);


PyObject * PyLong_FromLongLong(long long);
PyObject * PyLong_FromUnsignedLongLong(unsigned long long);
long long PyLong_AsLongLong(PyObject *);
unsigned long long PyLong_AsUnsignedLongLong(PyObject *);
unsigned long long PyLong_AsUnsignedLongLongMask(PyObject *);
long long PyLong_AsLongLongAndOverflow(PyObject *, int *);


PyObject * PyLong_FromString(char *, char **, int);

PyObject * PyLong_FromUnicode(Py_UNICODE*, Py_ssize_t, int);
PyObject * PyLong_FromUnicodeObject(PyObject *u, int base);







int _PyLong_Sign(PyObject *v);
# 104 "/Users/parrt/tmp/Python-3.3.1/Include/longobject.h"
size_t _PyLong_NumBits(PyObject *v);







PyObject * _PyLong_DivmodNear(PyObject *, PyObject *);
# 127 "/Users/parrt/tmp/Python-3.3.1/Include/longobject.h"
PyObject * _PyLong_FromByteArray(
    const unsigned char* bytes, size_t n,
    int little_endian, int is_signed);
# 150 "/Users/parrt/tmp/Python-3.3.1/Include/longobject.h"
int _PyLong_AsByteArray(PyLongObject* v,
    unsigned char* bytes, size_t n,
    int little_endian, int is_signed);




PyObject * _PyLong_Format(PyObject *obj, int base);

int _PyLong_FormatWriter(
    _PyUnicodeWriter *writer,
    PyObject *obj,
    int base,
    int alternate);



int _PyLong_FormatAdvancedWriter(
    _PyUnicodeWriter *writer,
    PyObject *obj,
    PyObject *format_spec,
    Py_ssize_t start,
    Py_ssize_t end);





unsigned long PyOS_strtoul(char *, char **, int);
long PyOS_strtol(char *, char **, int);
# 78 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/longintrepr.h" 1
# 49 "/Users/parrt/tmp/Python-3.3.1/Include/longintrepr.h"
typedef uint32_t digit;
typedef int32_t sdigit;
typedef uint64_t twodigits;
typedef int64_t stwodigits;
# 89 "/Users/parrt/tmp/Python-3.3.1/Include/longintrepr.h"
struct _longobject {
 PyVarObject ob_base;
 digit ob_digit[1];
};

PyLongObject * _PyLong_New(Py_ssize_t);


PyObject * _PyLong_Copy(PyLongObject *src);
# 79 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/boolobject.h" 1
# 10 "/Users/parrt/tmp/Python-3.3.1/Include/boolobject.h"
extern PyTypeObject PyBool_Type;







extern struct _longobject _Py_FalseStruct, _Py_TrueStruct;
# 29 "/Users/parrt/tmp/Python-3.3.1/Include/boolobject.h"
PyObject * PyBool_FromLong(long);
# 80 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/floatobject.h" 1
# 15 "/Users/parrt/tmp/Python-3.3.1/Include/floatobject.h"
typedef struct {
    PyObject ob_base;
    double ob_fval;
} PyFloatObject;


extern PyTypeObject PyFloat_Type;
# 37 "/Users/parrt/tmp/Python-3.3.1/Include/floatobject.h"
double PyFloat_GetMax(void);
double PyFloat_GetMin(void);
PyObject * PyFloat_GetInfo(void);


PyObject * PyFloat_FromString(PyObject*);


PyObject * PyFloat_FromDouble(double);



double PyFloat_AsDouble(PyObject *);
# 87 "/Users/parrt/tmp/Python-3.3.1/Include/floatobject.h"
int _PyFloat_Pack4(double x, unsigned char *p, int le);
int _PyFloat_Pack8(double x, unsigned char *p, int le);




int _PyFloat_Repr(double x, char *p, size_t len);


int _PyFloat_Digits(char *buf, double v, int *signum);
void _PyFloat_DigitsInit(void);
# 107 "/Users/parrt/tmp/Python-3.3.1/Include/floatobject.h"
double _PyFloat_Unpack4(const unsigned char *p, int le);
double _PyFloat_Unpack8(const unsigned char *p, int le);


int PyFloat_ClearFreeList(void);

void _PyFloat_DebugMallocStats(FILE* out);



int _PyFloat_FormatAdvancedWriter(
    _PyUnicodeWriter *writer,
    PyObject *obj,
    PyObject *format_spec,
    Py_ssize_t start,
    Py_ssize_t end);
# 81 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/complexobject.h" 1
# 10 "/Users/parrt/tmp/Python-3.3.1/Include/complexobject.h"
typedef struct {
    double real;
    double imag;
} Py_complex;
# 25 "/Users/parrt/tmp/Python-3.3.1/Include/complexobject.h"
Py_complex _Py_c_sum(Py_complex, Py_complex);
Py_complex _Py_c_diff(Py_complex, Py_complex);
Py_complex _Py_c_neg(Py_complex);
Py_complex _Py_c_prod(Py_complex, Py_complex);
Py_complex _Py_c_quot(Py_complex, Py_complex);
Py_complex _Py_c_pow(Py_complex, Py_complex);
double _Py_c_abs(Py_complex);
# 41 "/Users/parrt/tmp/Python-3.3.1/Include/complexobject.h"
typedef struct {
    PyObject ob_base;
    Py_complex cval;
} PyComplexObject;


extern PyTypeObject PyComplex_Type;





PyObject * PyComplex_FromCComplex(Py_complex);

PyObject * PyComplex_FromDoubles(double real, double imag);

double PyComplex_RealAsDouble(PyObject *op);
double PyComplex_ImagAsDouble(PyObject *op);

Py_complex PyComplex_AsCComplex(PyObject *op);





int _PyComplex_FormatAdvancedWriter(
    _PyUnicodeWriter *writer,
    PyObject *obj,
    PyObject *format_spec,
    Py_ssize_t start,
    Py_ssize_t end);
# 82 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/rangeobject.h" 1
# 18 "/Users/parrt/tmp/Python-3.3.1/Include/rangeobject.h"
extern PyTypeObject PyRange_Type;
extern PyTypeObject PyRangeIter_Type;
extern PyTypeObject PyLongRangeIter_Type;
# 83 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/memoryobject.h" 1
# 10 "/Users/parrt/tmp/Python-3.3.1/Include/memoryobject.h"
extern PyTypeObject _PyManagedBuffer_Type;

extern PyTypeObject PyMemoryView_Type;
# 23 "/Users/parrt/tmp/Python-3.3.1/Include/memoryobject.h"
PyObject * PyMemoryView_FromObject(PyObject *base);
PyObject * PyMemoryView_FromMemory(char *mem, Py_ssize_t size,
                                               int flags);

PyObject * PyMemoryView_FromBuffer(Py_buffer *info);

PyObject * PyMemoryView_GetContiguous(PyObject *base,
                                                  int buffertype,
                                                  char order);
# 40 "/Users/parrt/tmp/Python-3.3.1/Include/memoryobject.h"
typedef struct {
    PyObject ob_base;
    int flags;
    Py_ssize_t exports;
    Py_buffer master;
} _PyManagedBufferObject;
# 58 "/Users/parrt/tmp/Python-3.3.1/Include/memoryobject.h"
typedef struct {
    PyVarObject ob_base;
    _PyManagedBufferObject *mbuf;
    Py_hash_t hash;
    int flags;
    Py_ssize_t exports;
    Py_buffer view;
    char format[3];
    PyObject *weakreflist;
    Py_ssize_t ob_array[1];
} PyMemoryViewObject;
# 84 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/tupleobject.h" 1
# 25 "/Users/parrt/tmp/Python-3.3.1/Include/tupleobject.h"
typedef struct {
    PyVarObject ob_base;
    PyObject *ob_item[1];





} PyTupleObject;


extern PyTypeObject PyTuple_Type;
extern PyTypeObject PyTupleIter_Type;





PyObject * PyTuple_New(Py_ssize_t size);
Py_ssize_t PyTuple_Size(PyObject *);
PyObject * PyTuple_GetItem(PyObject *, Py_ssize_t);
int PyTuple_SetItem(PyObject *, Py_ssize_t, PyObject *);
PyObject * PyTuple_GetSlice(PyObject *, Py_ssize_t, Py_ssize_t);

int _PyTuple_Resize(PyObject **, Py_ssize_t);

PyObject * PyTuple_Pack(Py_ssize_t, ...);

void _PyTuple_MaybeUntrack(PyObject *);
# 65 "/Users/parrt/tmp/Python-3.3.1/Include/tupleobject.h"
int PyTuple_ClearFreeList(void);

void _PyTuple_DebugMallocStats(FILE *out);
# 85 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/listobject.h" 1
# 23 "/Users/parrt/tmp/Python-3.3.1/Include/listobject.h"
typedef struct {
    PyVarObject ob_base;

    PyObject **ob_item;
# 39 "/Users/parrt/tmp/Python-3.3.1/Include/listobject.h"
    Py_ssize_t allocated;
} PyListObject;


extern PyTypeObject PyList_Type;
extern PyTypeObject PyListIter_Type;
extern PyTypeObject PyListRevIter_Type;
extern PyTypeObject PySortWrapper_Type;





PyObject * PyList_New(Py_ssize_t size);
Py_ssize_t PyList_Size(PyObject *);
PyObject * PyList_GetItem(PyObject *, Py_ssize_t);
int PyList_SetItem(PyObject *, Py_ssize_t, PyObject *);
int PyList_Insert(PyObject *, Py_ssize_t, PyObject *);
int PyList_Append(PyObject *, PyObject *);
PyObject * PyList_GetSlice(PyObject *, Py_ssize_t, Py_ssize_t);
int PyList_SetSlice(PyObject *, Py_ssize_t, Py_ssize_t, PyObject *);
int PyList_Sort(PyObject *);
int PyList_Reverse(PyObject *);
PyObject * PyList_AsTuple(PyObject *);

PyObject * _PyList_Extend(PyListObject *, PyObject *);

int PyList_ClearFreeList(void);
void _PyList_DebugMallocStats(FILE *out);
# 86 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/dictobject.h" 1
# 18 "/Users/parrt/tmp/Python-3.3.1/Include/dictobject.h"
typedef struct _dictkeysobject PyDictKeysObject;




typedef struct {
    PyObject ob_base;
    Py_ssize_t ma_used;
    PyDictKeysObject *ma_keys;
    PyObject **ma_values;
} PyDictObject;



extern PyTypeObject PyDict_Type;
extern PyTypeObject PyDictIterKey_Type;
extern PyTypeObject PyDictIterValue_Type;
extern PyTypeObject PyDictIterItem_Type;
extern PyTypeObject PyDictKeys_Type;
extern PyTypeObject PyDictItems_Type;
extern PyTypeObject PyDictValues_Type;
# 51 "/Users/parrt/tmp/Python-3.3.1/Include/dictobject.h"
PyObject * PyDict_New(void);
PyObject * PyDict_GetItem(PyObject *mp, PyObject *key);
PyObject * PyDict_GetItemWithError(PyObject *mp, PyObject *key);
PyObject * _PyDict_GetItemIdWithError(PyObject *dp,
                                                  struct _Py_Identifier *key);
int PyDict_SetItem(PyObject *mp, PyObject *key, PyObject *item);
int PyDict_DelItem(PyObject *mp, PyObject *key);
void PyDict_Clear(PyObject *mp);
int PyDict_Next(
    PyObject *mp, Py_ssize_t *pos, PyObject **key, PyObject **value);

PyDictKeysObject *_PyDict_NewKeysForClass(void);
PyObject * PyObject_GenericGetDict(PyObject *, void *);
int _PyDict_Next(
    PyObject *mp, Py_ssize_t *pos, PyObject **key, PyObject **value, Py_hash_t *hash);

PyObject * PyDict_Keys(PyObject *mp);
PyObject * PyDict_Values(PyObject *mp);
PyObject * PyDict_Items(PyObject *mp);
Py_ssize_t PyDict_Size(PyObject *mp);
PyObject * PyDict_Copy(PyObject *mp);
int PyDict_Contains(PyObject *mp, PyObject *key);

int _PyDict_Contains(PyObject *mp, PyObject *key, Py_hash_t hash);
PyObject * _PyDict_NewPresized(Py_ssize_t minused);
void _PyDict_MaybeUntrack(PyObject *mp);
int _PyDict_HasOnlyStringKeys(PyObject *mp);
Py_ssize_t _PyDict_KeysSize(PyDictKeysObject *keys);


int PyDict_ClearFreeList(void);



int PyDict_Update(PyObject *mp, PyObject *other);






int PyDict_Merge(PyObject *mp,
                                   PyObject *other,
                                   int override);






int PyDict_MergeFromSeq2(PyObject *d,
                                           PyObject *seq2,
                                           int override);

PyObject * PyDict_GetItemString(PyObject *dp, const char *key);
PyObject * _PyDict_GetItemId(PyObject *dp, struct _Py_Identifier *key);
int PyDict_SetItemString(PyObject *dp, const char *key, PyObject *item);
int _PyDict_SetItemId(PyObject *dp, struct _Py_Identifier *key, PyObject *item);
int PyDict_DelItemString(PyObject *dp, const char *key);


int _PyObjectDict_SetItem(PyTypeObject *tp, PyObject **dictptr, PyObject *name, PyObject *value);
PyObject *_PyDict_LoadGlobal(PyDictObject *, PyDictObject *, PyObject *);
void _PyDict_DebugMallocStats(FILE *out);
# 87 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/enumobject.h" 1
# 10 "/Users/parrt/tmp/Python-3.3.1/Include/enumobject.h"
extern PyTypeObject PyEnum_Type;
extern PyTypeObject PyReversed_Type;
# 88 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/setobject.h" 1
# 24 "/Users/parrt/tmp/Python-3.3.1/Include/setobject.h"
typedef struct {

    Py_hash_t hash;
    PyObject *key;
} setentry;






typedef struct _setobject PySetObject;
struct _setobject {
    PyObject ob_base;

    Py_ssize_t fill;
    Py_ssize_t used;





    Py_ssize_t mask;





    setentry *table;
    setentry *(*lookup)(PySetObject *so, PyObject *key, Py_hash_t hash);
    setentry smalltable[8];

    Py_hash_t hash;
    PyObject *weakreflist;
};


extern PyTypeObject PySet_Type;
extern PyTypeObject PyFrozenSet_Type;
extern PyTypeObject PySetIter_Type;
# 86 "/Users/parrt/tmp/Python-3.3.1/Include/setobject.h"
PyObject * PySet_New(PyObject *);
PyObject * PyFrozenSet_New(PyObject *);
Py_ssize_t PySet_Size(PyObject *anyset);



int PySet_Clear(PyObject *set);
int PySet_Contains(PyObject *anyset, PyObject *key);
int PySet_Discard(PyObject *set, PyObject *key);
int PySet_Add(PyObject *set, PyObject *key);

int _PySet_NextEntry(PyObject *set, Py_ssize_t *pos, PyObject **key, Py_hash_t *hash);

PyObject * PySet_Pop(PyObject *set);

int _PySet_Update(PyObject *set, PyObject *iterable);

int PySet_ClearFreeList(void);
void _PySet_DebugMallocStats(FILE *out);
# 89 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/methodobject.h" 1
# 14 "/Users/parrt/tmp/Python-3.3.1/Include/methodobject.h"
extern PyTypeObject PyCFunction_Type;



typedef PyObject *(*PyCFunction)(PyObject *, PyObject *);
typedef PyObject *(*PyCFunctionWithKeywords)(PyObject *, PyObject *,
                                             PyObject *);
typedef PyObject *(*PyNoArgsFunction)(PyObject *);

PyCFunction PyCFunction_GetFunction(PyObject *);
PyObject * PyCFunction_GetSelf(PyObject *);
int PyCFunction_GetFlags(PyObject *);
# 38 "/Users/parrt/tmp/Python-3.3.1/Include/methodobject.h"
PyObject * PyCFunction_Call(PyObject *, PyObject *, PyObject *);

struct PyMethodDef {
    const char *ml_name;
    PyCFunction ml_meth;
    int ml_flags;

    const char *ml_doc;
};
typedef struct PyMethodDef PyMethodDef;


PyObject * PyCFunction_NewEx(PyMethodDef *, PyObject *,
                                         PyObject *);
# 75 "/Users/parrt/tmp/Python-3.3.1/Include/methodobject.h"
typedef struct {
    PyObject ob_base;
    PyMethodDef *m_ml;
    PyObject *m_self;
    PyObject *m_module;
} PyCFunctionObject;


int PyCFunction_ClearFreeList(void);


void _PyCFunction_DebugMallocStats(FILE *out);
void _PyMethod_DebugMallocStats(FILE *out);
# 90 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/moduleobject.h" 1
# 10 "/Users/parrt/tmp/Python-3.3.1/Include/moduleobject.h"
extern PyTypeObject PyModule_Type;




PyObject * PyModule_NewObject(
    PyObject *name
    );
PyObject * PyModule_New(
    const char *name
    );
PyObject * PyModule_GetDict(PyObject *);
PyObject * PyModule_GetNameObject(PyObject *);
const char * PyModule_GetName(PyObject *);
const char * PyModule_GetFilename(PyObject *);
PyObject * PyModule_GetFilenameObject(PyObject *);

void _PyModule_Clear(PyObject *);

struct PyModuleDef* PyModule_GetDef(PyObject*);
void* PyModule_GetState(PyObject*);

typedef struct PyModuleDef_Base {
  PyObject ob_base;
  PyObject* (*m_init)(void);
  Py_ssize_t m_index;
  PyObject* m_copy;
} PyModuleDef_Base;
# 46 "/Users/parrt/tmp/Python-3.3.1/Include/moduleobject.h"
typedef struct PyModuleDef{
  PyModuleDef_Base m_base;
  const char* m_name;
  const char* m_doc;
  Py_ssize_t m_size;
  PyMethodDef *m_methods;
  inquiry m_reload;
  traverseproc m_traverse;
  inquiry m_clear;
  freefunc m_free;
}PyModuleDef;
# 91 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/funcobject.h" 1
# 21 "/Users/parrt/tmp/Python-3.3.1/Include/funcobject.h"
typedef struct {
    PyObject ob_base;
    PyObject *func_code;
    PyObject *func_globals;
    PyObject *func_defaults;
    PyObject *func_kwdefaults;
    PyObject *func_closure;
    PyObject *func_doc;
    PyObject *func_name;
    PyObject *func_dict;
    PyObject *func_weakreflist;
    PyObject *func_module;
    PyObject *func_annotations;
    PyObject *func_qualname;






} PyFunctionObject;

extern PyTypeObject PyFunction_Type;



PyObject * PyFunction_New(PyObject *, PyObject *);
PyObject * PyFunction_NewWithQualName(PyObject *, PyObject *, PyObject *);
PyObject * PyFunction_GetCode(PyObject *);
PyObject * PyFunction_GetGlobals(PyObject *);
PyObject * PyFunction_GetModule(PyObject *);
PyObject * PyFunction_GetDefaults(PyObject *);
int PyFunction_SetDefaults(PyObject *, PyObject *);
PyObject * PyFunction_GetKwDefaults(PyObject *);
int PyFunction_SetKwDefaults(PyObject *, PyObject *);
PyObject * PyFunction_GetClosure(PyObject *);
int PyFunction_SetClosure(PyObject *, PyObject *);
PyObject * PyFunction_GetAnnotations(PyObject *);
int PyFunction_SetAnnotations(PyObject *, PyObject *);
# 79 "/Users/parrt/tmp/Python-3.3.1/Include/funcobject.h"
extern PyTypeObject PyClassMethod_Type;
extern PyTypeObject PyStaticMethod_Type;

PyObject * PyClassMethod_New(PyObject *);
PyObject * PyStaticMethod_New(PyObject *);
# 92 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/classobject.h" 1
# 12 "/Users/parrt/tmp/Python-3.3.1/Include/classobject.h"
typedef struct {
    PyObject ob_base;
    PyObject *im_func;
    PyObject *im_self;
    PyObject *im_weakreflist;
} PyMethodObject;

extern PyTypeObject PyMethod_Type;



PyObject * PyMethod_New(PyObject *, PyObject *);

PyObject * PyMethod_Function(PyObject *);
PyObject * PyMethod_Self(PyObject *);
# 35 "/Users/parrt/tmp/Python-3.3.1/Include/classobject.h"
int PyMethod_ClearFreeList(void);

typedef struct {
 PyObject ob_base;
 PyObject *func;
} PyInstanceMethodObject;

extern PyTypeObject PyInstanceMethod_Type;



PyObject * PyInstanceMethod_New(PyObject *);
PyObject * PyInstanceMethod_Function(PyObject *);
# 93 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/fileobject.h" 1
# 11 "/Users/parrt/tmp/Python-3.3.1/Include/fileobject.h"
PyObject * PyFile_FromFd(int, char *, char *, int, char *, char *,
         char *, int);
PyObject * PyFile_GetLine(PyObject *, int);
int PyFile_WriteObject(PyObject *, PyObject *, int);
int PyFile_WriteString(const char *, PyObject *);
int PyObject_AsFileDescriptor(PyObject *);

char * Py_UniversalNewlineFgets(char *, int, FILE*, PyObject *);





extern const char * Py_FileSystemDefaultEncoding;
extern int Py_HasFileSystemDefaultEncoding;






PyObject * PyFile_NewStdPrinter(int);
extern PyTypeObject PyStdPrinter_Type;
# 94 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/pycapsule.h" 1
# 21 "/Users/parrt/tmp/Python-3.3.1/Include/pycapsule.h"
extern PyTypeObject PyCapsule_Type;

typedef void (*PyCapsule_Destructor)(PyObject *);




PyObject * PyCapsule_New(
    void *pointer,
    const char *name,
    PyCapsule_Destructor destructor);

void * PyCapsule_GetPointer(PyObject *capsule, const char *name);

PyCapsule_Destructor PyCapsule_GetDestructor(PyObject *capsule);

const char * PyCapsule_GetName(PyObject *capsule);

void * PyCapsule_GetContext(PyObject *capsule);

int PyCapsule_IsValid(PyObject *capsule, const char *name);

int PyCapsule_SetPointer(PyObject *capsule, void *pointer);

int PyCapsule_SetDestructor(PyObject *capsule, PyCapsule_Destructor destructor);

int PyCapsule_SetName(PyObject *capsule, const char *name);

int PyCapsule_SetContext(PyObject *capsule, void *context);

void * PyCapsule_Import(
    const char *name,
    int no_block);
# 95 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/traceback.h" 1







# 1 "/Users/parrt/tmp/Python-3.3.1/Include/pystate.h" 1
# 13 "/Users/parrt/tmp/Python-3.3.1/Include/pystate.h"
struct _ts;
struct _is;




typedef struct _is {

    struct _is *next;
    struct _ts *tstate_head;

    PyObject *modules;
    PyObject *modules_by_index;
    PyObject *sysdict;
    PyObject *builtins;
    PyObject *importlib;

    PyObject *codec_search_path;
    PyObject *codec_search_cache;
    PyObject *codec_error_registry;
    int codecs_initialized;
    int fscodec_initialized;



    int dlopenflags;





} PyInterpreterState;





struct _frame;



typedef int (*Py_tracefunc)(PyObject *, struct _frame *, int, PyObject *);
# 69 "/Users/parrt/tmp/Python-3.3.1/Include/pystate.h"
typedef struct _ts {


    struct _ts *next;
    PyInterpreterState *interp;

    struct _frame *frame;
    int recursion_depth;
    char overflowed;

    char recursion_critical;




    int tracing;
    int use_tracing;

    Py_tracefunc c_profilefunc;
    Py_tracefunc c_tracefunc;
    PyObject *c_profileobj;
    PyObject *c_traceobj;

    PyObject *curexc_type;
    PyObject *curexc_value;
    PyObject *curexc_traceback;

    PyObject *exc_type;
    PyObject *exc_value;
    PyObject *exc_traceback;

    PyObject *dict;
# 110 "/Users/parrt/tmp/Python-3.3.1/Include/pystate.h"
    int tick_counter;

    int gilstate_counter;

    PyObject *async_exc;
    long thread_id;

    int trash_delete_nesting;
    PyObject *trash_delete_later;



} PyThreadState;



PyInterpreterState * PyInterpreterState_New(void);
void PyInterpreterState_Clear(PyInterpreterState *);
void PyInterpreterState_Delete(PyInterpreterState *);
int _PyState_AddModule(PyObject*, struct PyModuleDef*);


int PyState_AddModule(PyObject*, struct PyModuleDef*);
int PyState_RemoveModule(struct PyModuleDef*);

PyObject* PyState_FindModule(struct PyModuleDef*);

PyThreadState * PyThreadState_New(PyInterpreterState *);
PyThreadState * _PyThreadState_Prealloc(PyInterpreterState *);
void _PyThreadState_Init(PyThreadState *);
void PyThreadState_Clear(PyThreadState *);
void PyThreadState_Delete(PyThreadState *);

void PyThreadState_DeleteCurrent(void);
void _PyGILState_Reinit(void);


PyThreadState * PyThreadState_Get(void);
PyThreadState * PyThreadState_Swap(PyThreadState *);
PyObject * PyThreadState_GetDict(void);
int PyThreadState_SetAsyncExc(long, PyObject *);







extern _Py_atomic_address _PyThreadState_Current;
# 168 "/Users/parrt/tmp/Python-3.3.1/Include/pystate.h"
typedef
    enum {PyGILState_LOCKED, PyGILState_UNLOCKED}
        PyGILState_STATE;
# 195 "/Users/parrt/tmp/Python-3.3.1/Include/pystate.h"
PyGILState_STATE PyGILState_Ensure(void);
# 205 "/Users/parrt/tmp/Python-3.3.1/Include/pystate.h"
void PyGILState_Release(PyGILState_STATE);







PyThreadState * PyGILState_GetThisThreadState(void);







PyObject * _PyThread_CurrentFrames(void);





PyInterpreterState * PyInterpreterState_Head(void);
PyInterpreterState * PyInterpreterState_Next(PyInterpreterState *);
PyThreadState * PyInterpreterState_ThreadHead(PyInterpreterState *);
PyThreadState * PyThreadState_Next(PyThreadState *);

typedef struct _frame *(*PyThreadFrameGetter)(PyThreadState *self_);




extern PyThreadFrameGetter _PyThreadState_GetFrame;
# 9 "/Users/parrt/tmp/Python-3.3.1/Include/traceback.h" 2

struct _frame;



typedef struct _traceback {
    PyObject ob_base;
    struct _traceback *tb_next;
    struct _frame *tb_frame;
    int tb_lasti;
    int tb_lineno;
} PyTracebackObject;


int PyTraceBack_Here(struct _frame *);
int PyTraceBack_Print(PyObject *, PyObject *);

int _Py_DisplaySourceLine(PyObject *, PyObject *, int, int);



extern PyTypeObject PyTraceBack_Type;
# 50 "/Users/parrt/tmp/Python-3.3.1/Include/traceback.h"
extern void _Py_DumpTraceback(
    int fd,
    PyThreadState *tstate);
# 64 "/Users/parrt/tmp/Python-3.3.1/Include/traceback.h"
extern const char* _Py_DumpTracebackThreads(
    int fd, PyInterpreterState *interp,
    PyThreadState *current_thread);
# 96 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/sliceobject.h" 1
# 9 "/Users/parrt/tmp/Python-3.3.1/Include/sliceobject.h"
extern PyObject _Py_EllipsisObject;
# 22 "/Users/parrt/tmp/Python-3.3.1/Include/sliceobject.h"
typedef struct {
    PyObject ob_base;
    PyObject *start, *stop, *step;
} PySliceObject;


extern PyTypeObject PySlice_Type;
extern PyTypeObject PyEllipsis_Type;



PyObject * PySlice_New(PyObject* start, PyObject* stop,
                                  PyObject* step);

PyObject * _PySlice_FromIndices(Py_ssize_t start, Py_ssize_t stop);

int PySlice_GetIndices(PyObject *r, Py_ssize_t length,
                                  Py_ssize_t *start, Py_ssize_t *stop, Py_ssize_t *step);
int PySlice_GetIndicesEx(PyObject *r, Py_ssize_t length,
        Py_ssize_t *start, Py_ssize_t *stop,
        Py_ssize_t *step, Py_ssize_t *slicelength);
# 97 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/cellobject.h" 1
# 9 "/Users/parrt/tmp/Python-3.3.1/Include/cellobject.h"
typedef struct {
 PyObject ob_base;
 PyObject *ob_ref;
} PyCellObject;

extern PyTypeObject PyCell_Type;



PyObject * PyCell_New(PyObject *);
PyObject * PyCell_Get(PyObject *);
int PyCell_Set(PyObject *, PyObject *);
# 98 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/iterobject.h" 1







extern PyTypeObject PySeqIter_Type;
extern PyTypeObject PyCallIter_Type;
extern PyTypeObject PyCmpWrapper_Type;



PyObject * PySeqIter_New(PyObject *);




PyObject * PyCallIter_New(PyObject *, PyObject *);
# 99 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/genobject.h" 1
# 11 "/Users/parrt/tmp/Python-3.3.1/Include/genobject.h"
struct _frame;

typedef struct {
    PyObject ob_base;



    struct _frame *gi_frame;


    char gi_running;


    PyObject *gi_code;


    PyObject *gi_weakreflist;
} PyGenObject;

extern PyTypeObject PyGen_Type;




PyObject * PyGen_New(struct _frame *);
int PyGen_NeedsFinalizing(PyGenObject *);
int _PyGen_FetchStopIterationValue(PyObject **);
PyObject *_PyGen_Send(PyGenObject *, PyObject *);
# 100 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/descrobject.h" 1







typedef PyObject *(*getter)(PyObject *, void *);
typedef int (*setter)(PyObject *, PyObject *, void *);

typedef struct PyGetSetDef {
    char *name;
    getter get;
    setter set;
    char *doc;
    void *closure;
} PyGetSetDef;


typedef PyObject *(*wrapperfunc)(PyObject *self, PyObject *args,
                                 void *wrapped);

typedef PyObject *(*wrapperfunc_kwds)(PyObject *self, PyObject *args,
                                      void *wrapped, PyObject *kwds);

struct wrapperbase {
    char *name;
    int offset;
    void *function;
    wrapperfunc wrapper;
    char *doc;
    int flags;
    PyObject *name_strobj;
};






typedef struct {
    PyObject ob_base;
    PyTypeObject *d_type;
    PyObject *d_name;
    PyObject *d_qualname;
} PyDescrObject;






typedef struct {
    PyDescrObject d_common;
    PyMethodDef *d_method;
} PyMethodDescrObject;

typedef struct {
    PyDescrObject d_common;
    struct PyMemberDef *d_member;
} PyMemberDescrObject;

typedef struct {
    PyDescrObject d_common;
    PyGetSetDef *d_getset;
} PyGetSetDescrObject;

typedef struct {
    PyDescrObject d_common;
    struct wrapperbase *d_base;
    void *d_wrapped;
} PyWrapperDescrObject;


extern PyTypeObject PyClassMethodDescr_Type;
extern PyTypeObject PyGetSetDescr_Type;
extern PyTypeObject PyMemberDescr_Type;
extern PyTypeObject PyMethodDescr_Type;
extern PyTypeObject PyWrapperDescr_Type;
extern PyTypeObject PyDictProxy_Type;
extern PyTypeObject _PyMethodWrapper_Type;

PyObject * PyDescr_NewMethod(PyTypeObject *, PyMethodDef *);
PyObject * PyDescr_NewClassMethod(PyTypeObject *, PyMethodDef *);
struct PyMemberDef;
PyObject * PyDescr_NewMember(PyTypeObject *,
                                               struct PyMemberDef *);
PyObject * PyDescr_NewGetSet(PyTypeObject *,
                                               struct PyGetSetDef *);

PyObject * PyDescr_NewWrapper(PyTypeObject *,
                                                struct wrapperbase *, void *);



PyObject * PyDictProxy_New(PyObject *);
PyObject * PyWrapper_New(PyObject *, PyObject *);


extern PyTypeObject PyProperty_Type;
# 101 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/warnings.h" 1







PyObject* _PyWarnings_Init(void);


int PyErr_WarnEx(
    PyObject *category,
    const char *message,
    Py_ssize_t stack_level);
int PyErr_WarnFormat(
    PyObject *category,
    Py_ssize_t stack_level,
    const char *format,
    ...);
int PyErr_WarnExplicit(
    PyObject *category,
    const char *message,
    const char *filename,
    int lineno,
    const char *module,
    PyObject *registry);
# 102 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/weakrefobject.h" 1
# 10 "/Users/parrt/tmp/Python-3.3.1/Include/weakrefobject.h"
typedef struct _PyWeakReference PyWeakReference;





struct _PyWeakReference {
    PyObject ob_base;





    PyObject *wr_object;


    PyObject *wr_callback;




    Py_hash_t hash;






    PyWeakReference *wr_prev;
    PyWeakReference *wr_next;
};


extern PyTypeObject _PyWeakref_RefType;
extern PyTypeObject _PyWeakref_ProxyType;
extern PyTypeObject _PyWeakref_CallableProxyType;
# 61 "/Users/parrt/tmp/Python-3.3.1/Include/weakrefobject.h"
PyObject * PyWeakref_NewRef(PyObject *ob,
                                              PyObject *callback);
PyObject * PyWeakref_NewProxy(PyObject *ob,
                                                PyObject *callback);
PyObject * PyWeakref_GetObject(PyObject *ref);


Py_ssize_t _PyWeakref_GetWeakrefCount(PyWeakReference *head);

void _PyWeakref_ClearRef(PyWeakReference *self);
# 103 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/structseq.h" 1
# 10 "/Users/parrt/tmp/Python-3.3.1/Include/structseq.h"
typedef struct PyStructSequence_Field {
    char *name;
    char *doc;
} PyStructSequence_Field;

typedef struct PyStructSequence_Desc {
    char *name;
    char *doc;
    struct PyStructSequence_Field *fields;
    int n_in_sequence;
} PyStructSequence_Desc;

extern char* PyStructSequence_UnnamedField;


void PyStructSequence_InitType(PyTypeObject *type,
                                           PyStructSequence_Desc *desc);

PyTypeObject* PyStructSequence_NewType(PyStructSequence_Desc *desc);

PyObject * PyStructSequence_New(PyTypeObject* type);


typedef PyTupleObject PyStructSequence;







void PyStructSequence_SetItem(PyObject*, Py_ssize_t, PyObject*);
PyObject* PyStructSequence_GetItem(PyObject*, Py_ssize_t);
# 104 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/namespaceobject.h" 1
# 10 "/Users/parrt/tmp/Python-3.3.1/Include/namespaceobject.h"
extern PyTypeObject _PyNamespace_Type;

PyObject * _PyNamespace_New(PyObject *kwds);
# 105 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2

# 1 "/Users/parrt/tmp/Python-3.3.1/Include/codecs.h" 1
# 26 "/Users/parrt/tmp/Python-3.3.1/Include/codecs.h"
int PyCodec_Register(
       PyObject *search_function
       );
# 49 "/Users/parrt/tmp/Python-3.3.1/Include/codecs.h"
PyObject * _PyCodec_Lookup(
       const char *encoding
       );
# 61 "/Users/parrt/tmp/Python-3.3.1/Include/codecs.h"
int PyCodec_KnownEncoding(
       const char *encoding
       );
# 75 "/Users/parrt/tmp/Python-3.3.1/Include/codecs.h"
PyObject * PyCodec_Encode(
       PyObject *object,
       const char *encoding,
       const char *errors
       );
# 91 "/Users/parrt/tmp/Python-3.3.1/Include/codecs.h"
PyObject * PyCodec_Decode(
       PyObject *object,
       const char *encoding,
       const char *errors
       );
# 107 "/Users/parrt/tmp/Python-3.3.1/Include/codecs.h"
PyObject * PyCodec_Encoder(
       const char *encoding
       );



PyObject * PyCodec_Decoder(
       const char *encoding
       );



PyObject * PyCodec_IncrementalEncoder(
       const char *encoding,
       const char *errors
       );



PyObject * PyCodec_IncrementalDecoder(
       const char *encoding,
       const char *errors
       );



PyObject * PyCodec_StreamReader(
       const char *encoding,
       PyObject *stream,
       const char *errors
       );



PyObject * PyCodec_StreamWriter(
       const char *encoding,
       PyObject *stream,
       const char *errors
       );
# 155 "/Users/parrt/tmp/Python-3.3.1/Include/codecs.h"
int PyCodec_RegisterError(const char *name, PyObject *error);




PyObject * PyCodec_LookupError(const char *name);


PyObject * PyCodec_StrictErrors(PyObject *exc);


PyObject * PyCodec_IgnoreErrors(PyObject *exc);


PyObject * PyCodec_ReplaceErrors(PyObject *exc);


PyObject * PyCodec_XMLCharRefReplaceErrors(PyObject *exc);


PyObject * PyCodec_BackslashReplaceErrors(PyObject *exc);

extern const char * Py_hexdigits;
# 107 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/pyerrors.h" 1
# 16 "/Users/parrt/tmp/Python-3.3.1/Include/pyerrors.h"
typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
} PyBaseExceptionObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *msg;
    PyObject *filename;
    PyObject *lineno;
    PyObject *offset;
    PyObject *text;
    PyObject *print_file_and_line;
} PySyntaxErrorObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *msg;
    PyObject *name;
    PyObject *path;
} PyImportErrorObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *encoding;
    PyObject *object;
    Py_ssize_t start;
    Py_ssize_t end;
    PyObject *reason;
} PyUnicodeErrorObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *code;
} PySystemExitObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *myerrno;
    PyObject *strerror;
    PyObject *filename;



    Py_ssize_t written;
} PyOSErrorObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *value;
} PyStopIterationObject;


typedef PyOSErrorObject PyEnvironmentErrorObject;







void PyErr_SetNone(PyObject *);
void PyErr_SetObject(PyObject *, PyObject *);
void PyErr_SetString(
    PyObject *exception,
    const char *string
    );
PyObject * PyErr_Occurred(void);
void PyErr_Clear(void);
void PyErr_Fetch(PyObject **, PyObject **, PyObject **);
void PyErr_Restore(PyObject *, PyObject *, PyObject *);
void PyErr_GetExcInfo(PyObject **, PyObject **, PyObject **);
void PyErr_SetExcInfo(PyObject *, PyObject *, PyObject *);
# 98 "/Users/parrt/tmp/Python-3.3.1/Include/pyerrors.h"
void Py_FatalError(const char *message) ;
# 107 "/Users/parrt/tmp/Python-3.3.1/Include/pyerrors.h"
int PyErr_GivenExceptionMatches(PyObject *, PyObject *);
int PyErr_ExceptionMatches(PyObject *);
void PyErr_NormalizeException(PyObject**, PyObject**, PyObject**);


int PyException_SetTraceback(PyObject *, PyObject *);
PyObject * PyException_GetTraceback(PyObject *);


PyObject * PyException_GetCause(PyObject *);
void PyException_SetCause(PyObject *, PyObject *);


PyObject * PyException_GetContext(PyObject *);
void PyException_SetContext(PyObject *, PyObject *);
# 141 "/Users/parrt/tmp/Python-3.3.1/Include/pyerrors.h"
extern PyObject * PyExc_BaseException;
extern PyObject * PyExc_Exception;
extern PyObject * PyExc_StopIteration;
extern PyObject * PyExc_GeneratorExit;
extern PyObject * PyExc_ArithmeticError;
extern PyObject * PyExc_LookupError;

extern PyObject * PyExc_AssertionError;
extern PyObject * PyExc_AttributeError;
extern PyObject * PyExc_BufferError;
extern PyObject * PyExc_EOFError;
extern PyObject * PyExc_FloatingPointError;
extern PyObject * PyExc_OSError;
extern PyObject * PyExc_ImportError;
extern PyObject * PyExc_IndexError;
extern PyObject * PyExc_KeyError;
extern PyObject * PyExc_KeyboardInterrupt;
extern PyObject * PyExc_MemoryError;
extern PyObject * PyExc_NameError;
extern PyObject * PyExc_OverflowError;
extern PyObject * PyExc_RuntimeError;
extern PyObject * PyExc_NotImplementedError;
extern PyObject * PyExc_SyntaxError;
extern PyObject * PyExc_IndentationError;
extern PyObject * PyExc_TabError;
extern PyObject * PyExc_ReferenceError;
extern PyObject * PyExc_SystemError;
extern PyObject * PyExc_SystemExit;
extern PyObject * PyExc_TypeError;
extern PyObject * PyExc_UnboundLocalError;
extern PyObject * PyExc_UnicodeError;
extern PyObject * PyExc_UnicodeEncodeError;
extern PyObject * PyExc_UnicodeDecodeError;
extern PyObject * PyExc_UnicodeTranslateError;
extern PyObject * PyExc_ValueError;
extern PyObject * PyExc_ZeroDivisionError;

extern PyObject * PyExc_BlockingIOError;
extern PyObject * PyExc_BrokenPipeError;
extern PyObject * PyExc_ChildProcessError;
extern PyObject * PyExc_ConnectionError;
extern PyObject * PyExc_ConnectionAbortedError;
extern PyObject * PyExc_ConnectionRefusedError;
extern PyObject * PyExc_ConnectionResetError;
extern PyObject * PyExc_FileExistsError;
extern PyObject * PyExc_FileNotFoundError;
extern PyObject * PyExc_InterruptedError;
extern PyObject * PyExc_IsADirectoryError;
extern PyObject * PyExc_NotADirectoryError;
extern PyObject * PyExc_PermissionError;
extern PyObject * PyExc_ProcessLookupError;
extern PyObject * PyExc_TimeoutError;



extern PyObject * PyExc_EnvironmentError;
extern PyObject * PyExc_IOError;







extern PyObject * PyExc_RecursionErrorInst;


extern PyObject * PyExc_Warning;
extern PyObject * PyExc_UserWarning;
extern PyObject * PyExc_DeprecationWarning;
extern PyObject * PyExc_PendingDeprecationWarning;
extern PyObject * PyExc_SyntaxWarning;
extern PyObject * PyExc_RuntimeWarning;
extern PyObject * PyExc_FutureWarning;
extern PyObject * PyExc_ImportWarning;
extern PyObject * PyExc_UnicodeWarning;
extern PyObject * PyExc_BytesWarning;
extern PyObject * PyExc_ResourceWarning;




int PyErr_BadArgument(void);
PyObject * PyErr_NoMemory(void);
PyObject * PyErr_SetFromErrno(PyObject *);
PyObject * PyErr_SetFromErrnoWithFilenameObject(
    PyObject *, PyObject *);
PyObject * PyErr_SetFromErrnoWithFilename(
    PyObject *exc,
    const char *filename
    );





PyObject * PyErr_Format(
    PyObject *exception,
    const char *format,
    ...
    );
# 268 "/Users/parrt/tmp/Python-3.3.1/Include/pyerrors.h"
PyObject * PyErr_SetExcWithArgsKwargs(PyObject *, PyObject *,
    PyObject *);
PyObject * PyErr_SetImportError(PyObject *, PyObject *,
    PyObject *);


void PyErr_BadInternalCall(void);
void _PyErr_BadInternalCall(const char *filename, int lineno);





PyObject * PyErr_NewException(
    const char *name, PyObject *base, PyObject *dict);
PyObject * PyErr_NewExceptionWithDoc(
    const char *name, const char *doc, PyObject *base, PyObject *dict);
void PyErr_WriteUnraisable(PyObject *);


int PyErr_CheckSignals(void);
void PyErr_SetInterrupt(void);



int PySignal_SetWakeupFd(int fd);



void PyErr_SyntaxLocation(
    const char *filename,
    int lineno);
void PyErr_SyntaxLocationEx(
    const char *filename,
    int lineno,
    int col_offset);
PyObject * PyErr_ProgramText(
    const char *filename,
    int lineno);





PyObject * PyUnicodeDecodeError_Create(
    const char *encoding,
    const char *object,
    Py_ssize_t length,
    Py_ssize_t start,
    Py_ssize_t end,
    const char *reason
    );



PyObject * PyUnicodeEncodeError_Create(
    const char *encoding,
    const Py_UNICODE *object,
    Py_ssize_t length,
    Py_ssize_t start,
    Py_ssize_t end,
    const char *reason
    );




PyObject * PyUnicodeTranslateError_Create(
    const Py_UNICODE *object,
    Py_ssize_t length,
    Py_ssize_t start,
    Py_ssize_t end,
    const char *reason
    );
PyObject * _PyUnicodeTranslateError_Create(
    PyObject *object,
    Py_ssize_t start,
    Py_ssize_t end,
    const char *reason
    );



PyObject * PyUnicodeEncodeError_GetEncoding(PyObject *);
PyObject * PyUnicodeDecodeError_GetEncoding(PyObject *);


PyObject * PyUnicodeEncodeError_GetObject(PyObject *);
PyObject * PyUnicodeDecodeError_GetObject(PyObject *);
PyObject * PyUnicodeTranslateError_GetObject(PyObject *);



int PyUnicodeEncodeError_GetStart(PyObject *, Py_ssize_t *);
int PyUnicodeDecodeError_GetStart(PyObject *, Py_ssize_t *);
int PyUnicodeTranslateError_GetStart(PyObject *, Py_ssize_t *);



int PyUnicodeEncodeError_SetStart(PyObject *, Py_ssize_t);
int PyUnicodeDecodeError_SetStart(PyObject *, Py_ssize_t);
int PyUnicodeTranslateError_SetStart(PyObject *, Py_ssize_t);



int PyUnicodeEncodeError_GetEnd(PyObject *, Py_ssize_t *);
int PyUnicodeDecodeError_GetEnd(PyObject *, Py_ssize_t *);
int PyUnicodeTranslateError_GetEnd(PyObject *, Py_ssize_t *);



int PyUnicodeEncodeError_SetEnd(PyObject *, Py_ssize_t);
int PyUnicodeDecodeError_SetEnd(PyObject *, Py_ssize_t);
int PyUnicodeTranslateError_SetEnd(PyObject *, Py_ssize_t);


PyObject * PyUnicodeEncodeError_GetReason(PyObject *);
PyObject * PyUnicodeDecodeError_GetReason(PyObject *);
PyObject * PyUnicodeTranslateError_GetReason(PyObject *);



int PyUnicodeEncodeError_SetReason(
    PyObject *exc,
    const char *reason
    );
int PyUnicodeDecodeError_SetReason(
    PyObject *exc,
    const char *reason
    );
int PyUnicodeTranslateError_SetReason(
    PyObject *exc,
    const char *reason
    );
# 418 "/Users/parrt/tmp/Python-3.3.1/Include/pyerrors.h"
int PyOS_snprintf(char *str, size_t size, const char *format, ...)
                        __attribute__((format(printf, 3, 4)));
int PyOS_vsnprintf(char *str, size_t size, const char *format, va_list va)
                        __attribute__((format(printf, 3, 0)));
# 108 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2



# 1 "/Users/parrt/tmp/Python-3.3.1/Include/pyarena.h" 1
# 12 "/Users/parrt/tmp/Python-3.3.1/Include/pyarena.h"
  typedef struct _arena PyArena;
# 36 "/Users/parrt/tmp/Python-3.3.1/Include/pyarena.h"
  PyArena * PyArena_New(void);
  void PyArena_Free(PyArena *);
# 51 "/Users/parrt/tmp/Python-3.3.1/Include/pyarena.h"
  void * PyArena_Malloc(PyArena *, size_t size);





  int PyArena_AddPyObject(PyArena *, PyObject *);
# 112 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/modsupport.h" 1
# 23 "/Users/parrt/tmp/Python-3.3.1/Include/modsupport.h"
PyObject * _Py_VaBuildValue_SizeT(const char *, va_list);




int PyArg_Parse(PyObject *, const char *, ...);
int PyArg_ParseTuple(PyObject *, const char *, ...) ;
int PyArg_ParseTupleAndKeywords(PyObject *, PyObject *,
                                                  const char *, char **, ...);
int PyArg_ValidateKeywordArguments(PyObject *);
int PyArg_UnpackTuple(PyObject *, const char *, Py_ssize_t, Py_ssize_t, ...);
PyObject * Py_BuildValue(const char *, ...);
PyObject * _Py_BuildValue_SizeT(const char *, ...);


int _PyArg_NoKeywords(const char *funcname, PyObject *kw);

int PyArg_VaParse(PyObject *, const char *, va_list);
int PyArg_VaParseTupleAndKeywords(PyObject *, PyObject *,
                                                  const char *, char **, va_list);

PyObject * Py_VaBuildValue(const char *, va_list);

int PyModule_AddObject(PyObject *, const char *, PyObject *);
int PyModule_AddIntConstant(PyObject *, const char *, long);
int PyModule_AddStringConstant(PyObject *, const char *, const char *);
# 113 "/Users/parrt/tmp/Python-3.3.1/Include/modsupport.h"
PyObject * PyModule_Create2(struct PyModuleDef*,
                                     int apiver);
# 125 "/Users/parrt/tmp/Python-3.3.1/Include/modsupport.h"
extern char * _Py_PackageContext;
# 113 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/pythonrun.h" 1
# 20 "/Users/parrt/tmp/Python-3.3.1/Include/pythonrun.h"
typedef struct {
    int cf_flags;
} PyCompilerFlags;


void Py_SetProgramName(wchar_t *);
wchar_t * Py_GetProgramName(void);

void Py_SetPythonHome(wchar_t *);
wchar_t * Py_GetPythonHome(void);

void Py_Initialize(void);
void Py_InitializeEx(int);

void _Py_InitializeEx_Private(int, int);

void Py_Finalize(void);
int Py_IsInitialized(void);
PyThreadState * Py_NewInterpreter(void);
void Py_EndInterpreter(PyThreadState *);


int PyRun_SimpleStringFlags(const char *, PyCompilerFlags *);
int PyRun_AnyFileFlags(FILE *, const char *, PyCompilerFlags *);
int PyRun_AnyFileExFlags(
    FILE *fp,
    const char *filename,
    int closeit,
    PyCompilerFlags *flags);
int PyRun_SimpleFileExFlags(
    FILE *fp,
    const char *filename,
    int closeit,
    PyCompilerFlags *flags);
int PyRun_InteractiveOneFlags(
    FILE *fp,
    const char *filename,
    PyCompilerFlags *flags);
int PyRun_InteractiveLoopFlags(
    FILE *fp,
    const char *filename,
    PyCompilerFlags *flags);

struct _mod * PyParser_ASTFromString(
    const char *s,
    const char *filename,
    int start,
    PyCompilerFlags *flags,
    PyArena *arena);
struct _mod * PyParser_ASTFromFile(
    FILE *fp,
    const char *filename,
    const char* enc,
    int start,
    char *ps1,
    char *ps2,
    PyCompilerFlags *flags,
    int *errcode,
    PyArena *arena);
# 87 "/Users/parrt/tmp/Python-3.3.1/Include/pythonrun.h"
struct _node * PyParser_SimpleParseStringFlags(const char *, int,
                                                           int);
struct _node * PyParser_SimpleParseStringFlagsFilename(const char *,
                                                                   const char *,
                                                                   int, int);
struct _node * PyParser_SimpleParseFileFlags(FILE *, const char *,
                                                         int, int);


PyObject * PyRun_StringFlags(const char *, int, PyObject *,
                                         PyObject *, PyCompilerFlags *);

PyObject * PyRun_FileExFlags(
    FILE *fp,
    const char *filename,
    int start,
    PyObject *globals,
    PyObject *locals,
    int closeit,
    PyCompilerFlags *flags);







PyObject * Py_CompileStringExFlags(
    const char *str,
    const char *filename,
    int start,
    PyCompilerFlags *flags,
    int optimize);

struct symtable * Py_SymtableString(
    const char *str,
    const char *filename,
    int start);

void PyErr_Print(void);
void PyErr_PrintEx(int);
void PyErr_Display(PyObject *, PyObject *, PyObject *);





void _Py_PyAtExit(void (*func)(void));

int Py_AtExit(void (*func)(void));

void Py_Exit(int);



void _Py_RestoreSignals(void);

int Py_FdIsInteractive(FILE *, const char *);



int Py_Main(int argc, wchar_t **argv);
# 172 "/Users/parrt/tmp/Python-3.3.1/Include/pythonrun.h"
wchar_t * Py_GetProgramFullPath(void);
wchar_t * Py_GetPrefix(void);
wchar_t * Py_GetExecPrefix(void);
wchar_t * Py_GetPath(void);
void Py_SetPath(const wchar_t *);





const char * Py_GetVersion(void);
const char * Py_GetPlatform(void);
const char * Py_GetCopyright(void);
const char * Py_GetCompiler(void);
const char * Py_GetBuildInfo(void);

const char * _Py_hgidentifier(void);
const char * _Py_hgversion(void);




PyObject * _PyBuiltin_Init(void);
PyObject * _PySys_Init(void);
void _PyImport_Init(void);
void _PyExc_Init(PyObject * bltinmod);
void _PyImportHooks_Init(void);
int _PyFrame_Init(void);
void _PyFloat_Init(void);
int PyByteArray_Init(void);
void _PyRandom_Init(void);




void _PyExc_Fini(void);
void _PyImport_Fini(void);
void PyMethod_Fini(void);
void PyFrame_Fini(void);
void PyCFunction_Fini(void);
void PyDict_Fini(void);
void PyTuple_Fini(void);
void PyList_Fini(void);
void PySet_Fini(void);
void PyBytes_Fini(void);
void PyByteArray_Fini(void);
void PyFloat_Fini(void);
void PyOS_FiniInterrupts(void);
void _PyGC_Fini(void);
void PySlice_Fini(void);

extern PyThreadState * _Py_Finalizing;




char * PyOS_Readline(FILE *, FILE *, char *);

extern int (*PyOS_InputHook)(void);
extern char *(*PyOS_ReadlineFunctionPointer)(FILE *, FILE *, char *);

extern PyThreadState* _PyOS_ReadlineTState;
# 252 "/Users/parrt/tmp/Python-3.3.1/Include/pythonrun.h"
typedef void (*PyOS_sighandler_t)(int);
PyOS_sighandler_t PyOS_getsig(int);
PyOS_sighandler_t PyOS_setsig(int, PyOS_sighandler_t);


int _PyOS_URandom (void *buffer, Py_ssize_t size);
# 114 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/ceval.h" 1
# 10 "/Users/parrt/tmp/Python-3.3.1/Include/ceval.h"
PyObject * PyEval_CallObjectWithKeywords(
    PyObject *, PyObject *, PyObject *);





PyObject * PyEval_CallFunction(PyObject *obj,
                                           const char *format, ...);
PyObject * PyEval_CallMethod(PyObject *obj,
                                         const char *methodname,
                                         const char *format, ...);


void PyEval_SetProfile(Py_tracefunc, PyObject *);
void PyEval_SetTrace(Py_tracefunc, PyObject *);


struct _frame;

PyObject * PyEval_GetBuiltins(void);
PyObject * PyEval_GetGlobals(void);
PyObject * PyEval_GetLocals(void);
struct _frame * PyEval_GetFrame(void);





int PyEval_MergeCompilerFlags(PyCompilerFlags *cf);


int Py_AddPendingCall(int (*func)(void *), void *arg);
int Py_MakePendingCalls(void);
# 70 "/Users/parrt/tmp/Python-3.3.1/Include/ceval.h"
void Py_SetRecursionLimit(int);
int Py_GetRecursionLimit(void);
# 80 "/Users/parrt/tmp/Python-3.3.1/Include/ceval.h"
int _Py_CheckRecursiveCall(char *where);
extern int _Py_CheckRecursionLimit;
# 108 "/Users/parrt/tmp/Python-3.3.1/Include/ceval.h"
const char * PyEval_GetFuncName(PyObject *);
const char * PyEval_GetFuncDesc(PyObject *);

PyObject * PyEval_GetCallStats(PyObject *);
PyObject * PyEval_EvalFrame(struct _frame *);
PyObject * PyEval_EvalFrameEx(struct _frame *f, int exc);
# 160 "/Users/parrt/tmp/Python-3.3.1/Include/ceval.h"
PyThreadState * PyEval_SaveThread(void);
void PyEval_RestoreThread(PyThreadState *);



int PyEval_ThreadsInitialized(void);
void PyEval_InitThreads(void);
void _PyEval_FiniThreads(void);
void PyEval_AcquireLock(void);
void PyEval_ReleaseLock(void);
void PyEval_AcquireThread(PyThreadState *tstate);
void PyEval_ReleaseThread(PyThreadState *tstate);
void PyEval_ReInitThreads(void);


void _PyEval_SetSwitchInterval(unsigned long microseconds);
unsigned long _PyEval_GetSwitchInterval(void);
# 197 "/Users/parrt/tmp/Python-3.3.1/Include/ceval.h"
int _PyEval_SliceIndex(PyObject *, Py_ssize_t *);
void _PyEval_SignalAsyncExc(void);
# 115 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/sysmodule.h" 1
# 10 "/Users/parrt/tmp/Python-3.3.1/Include/sysmodule.h"
PyObject * PySys_GetObject(const char *);
int PySys_SetObject(const char *, PyObject *);
void PySys_SetArgv(int, wchar_t **);
void PySys_SetArgvEx(int, wchar_t **, int);
void PySys_SetPath(const wchar_t *);

void PySys_WriteStdout(const char *format, ...)
                 __attribute__((format(printf, 1, 2)));
void PySys_WriteStderr(const char *format, ...)
                 __attribute__((format(printf, 1, 2)));
void PySys_FormatStdout(const char *format, ...);
void PySys_FormatStderr(const char *format, ...);

void PySys_ResetWarnOptions(void);
void PySys_AddWarnOption(const wchar_t *);
void PySys_AddWarnOptionUnicode(PyObject *);
int PySys_HasWarnOptions(void);

void PySys_AddXOption(const wchar_t *);
PyObject * PySys_GetXOptions(void);
# 116 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/intrcheck.h" 1







int PyOS_InterruptOccurred(void);
void PyOS_InitInterrupts(void);
void PyOS_AfterFork(void);
int _PyOS_IsMainThread(void);
# 117 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/import.h" 1
# 10 "/Users/parrt/tmp/Python-3.3.1/Include/import.h"
void _PyImportZip_Init(void);

PyObject* PyInit_imp(void);
long PyImport_GetMagicNumber(void);
const char * PyImport_GetMagicTag(void);
PyObject * PyImport_ExecCodeModule(
    char *name,
    PyObject *co
    );
PyObject * PyImport_ExecCodeModuleEx(
    char *name,
    PyObject *co,
    char *pathname
    );
PyObject * PyImport_ExecCodeModuleWithPathnames(
    char *name,
    PyObject *co,
    char *pathname,
    char *cpathname
    );
PyObject * PyImport_ExecCodeModuleObject(
    PyObject *name,
    PyObject *co,
    PyObject *pathname,
    PyObject *cpathname
    );
PyObject * PyImport_GetModuleDict(void);
PyObject * PyImport_AddModuleObject(
    PyObject *name
    );
PyObject * PyImport_AddModule(
    const char *name
    );
PyObject * PyImport_ImportModule(
    const char *name
    );
PyObject * PyImport_ImportModuleNoBlock(
    const char *name
    );
PyObject * PyImport_ImportModuleLevel(
    const char *name,
    PyObject *globals,
    PyObject *locals,
    PyObject *fromlist,
    int level
    );
PyObject * PyImport_ImportModuleLevelObject(
    PyObject *name,
    PyObject *globals,
    PyObject *locals,
    PyObject *fromlist,
    int level
    );




PyObject * PyImport_GetImporter(PyObject *path);
PyObject * PyImport_Import(PyObject *name);
PyObject * PyImport_ReloadModule(PyObject *m);
void PyImport_Cleanup(void);
int PyImport_ImportFrozenModuleObject(
    PyObject *name
    );
int PyImport_ImportFrozenModule(
    char *name
    );



void _PyImport_AcquireLock(void);
int _PyImport_ReleaseLock(void);





void _PyImport_ReInitLock(void);

PyObject *_PyImport_FindBuiltin(
    const char *name
    );
PyObject *_PyImport_FindExtensionObject(PyObject *, PyObject *);
int _PyImport_FixupBuiltin(
    PyObject *mod,
    char *name
    );
int _PyImport_FixupExtensionObject(PyObject*, PyObject *, PyObject *);

struct _inittab {
    char *name;
    PyObject* (*initfunc)(void);
};
extern struct _inittab * PyImport_Inittab;
int PyImport_ExtendInittab(struct _inittab *newtab);


extern PyTypeObject PyNullImporter_Type;

int PyImport_AppendInittab(
    const char *name,
    PyObject* (*initfunc)(void)
    );


struct _frozen {
    char *name;
    unsigned char *code;
    int size;
};




extern struct _frozen * PyImport_FrozenModules;
# 118 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2

# 1 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h" 1
# 266 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     PyObject * PyObject_Call(PyObject *callable_object,
                                          PyObject *args, PyObject *kw);







     PyObject * PyObject_CallObject(PyObject *callable_object,
                                                PyObject *args);
# 286 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     PyObject * PyObject_CallFunction(PyObject *callable_object,
                                                  char *format, ...);
# 299 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     PyObject * PyObject_CallMethod(PyObject *o, char *method,
                                                char *format, ...);
# 311 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     PyObject * _PyObject_CallMethodId(PyObject *o, _Py_Identifier *method,
                                                  char *format, ...);






     PyObject * _PyObject_CallFunction_SizeT(PyObject *callable,
                                                         char *format, ...);
     PyObject * _PyObject_CallMethod_SizeT(PyObject *o,
                                                       char *name,
                                                       char *format, ...);
     PyObject * _PyObject_CallMethodId_SizeT(PyObject *o,
                                                       _Py_Identifier *name,
                                                       char *format, ...);

     PyObject * PyObject_CallFunctionObjArgs(PyObject *callable,
                                                         ...);
# 340 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     PyObject * PyObject_CallMethodObjArgs(PyObject *o,
                                                       PyObject *method, ...);
     PyObject * _PyObject_CallMethodObjIdArgs(PyObject *o,
                                               struct _Py_Identifier *method,
                                               ...);
# 384 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     PyObject * PyObject_Type(PyObject *o);







     Py_ssize_t PyObject_Size(PyObject *o);
# 403 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     Py_ssize_t PyObject_Length(PyObject *o);



     Py_ssize_t _PyObject_LengthHint(PyObject *o, Py_ssize_t);
# 416 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     PyObject * PyObject_GetItem(PyObject *o, PyObject *key);







     int PyObject_SetItem(PyObject *o, PyObject *key, PyObject *v);







     int PyObject_DelItemString(PyObject *o, char *key);







     int PyObject_DelItem(PyObject *o, PyObject *key);
# 453 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     int PyObject_AsCharBuffer(PyObject *obj,
                                           const char **buffer,
                                           Py_ssize_t *buffer_len);
# 468 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     int PyObject_CheckReadBuffer(PyObject *obj);







     int PyObject_AsReadBuffer(PyObject *obj,
                                           const void **buffer,
                                           Py_ssize_t *buffer_len);
# 491 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     int PyObject_AsWriteBuffer(PyObject *obj,
                                            void **buffer,
                                            Py_ssize_t *buffer_len);
# 515 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     int PyObject_GetBuffer(PyObject *obj, Py_buffer *view,
                                        int flags);
# 525 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     void * PyBuffer_GetPointer(Py_buffer *view, Py_ssize_t *indices);





     int PyBuffer_SizeFromFormat(const char *);







     int PyBuffer_ToContiguous(void *buf, Py_buffer *view,
                                           Py_ssize_t len, char order);

     int PyBuffer_FromContiguous(Py_buffer *view, void *buf,
                                             Py_ssize_t len, char order);
# 562 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     int PyObject_CopyData(PyObject *dest, PyObject *src);




     int PyBuffer_IsContiguous(const Py_buffer *view, char fort);


     void PyBuffer_FillContiguousStrides(int ndims,
                                                    Py_ssize_t *shape,
                                                    Py_ssize_t *strides,
                                                    int itemsize,
                                                    char fort);







     int PyBuffer_FillInfo(Py_buffer *view, PyObject *o, void *buf,
                                       Py_ssize_t len, int readonly,
                                       int flags);







     void PyBuffer_Release(Py_buffer *view);





     PyObject * PyObject_Format(PyObject* obj,
                                            PyObject *format_spec);







     PyObject * PyObject_GetIter(PyObject *);
# 616 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     PyObject * PyIter_Next(PyObject *);







     int PyNumber_Check(PyObject *o);
# 633 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     PyObject * PyNumber_Add(PyObject *o1, PyObject *o2);






     PyObject * PyNumber_Subtract(PyObject *o1, PyObject *o2);







     PyObject * PyNumber_Multiply(PyObject *o1, PyObject *o2);







     PyObject * PyNumber_FloorDivide(PyObject *o1, PyObject *o2);







     PyObject * PyNumber_TrueDivide(PyObject *o1, PyObject *o2);







     PyObject * PyNumber_Remainder(PyObject *o1, PyObject *o2);







     PyObject * PyNumber_Divmod(PyObject *o1, PyObject *o2);







     PyObject * PyNumber_Power(PyObject *o1, PyObject *o2,
                                           PyObject *o3);







     PyObject * PyNumber_Negative(PyObject *o);






     PyObject * PyNumber_Positive(PyObject *o);






     PyObject * PyNumber_Absolute(PyObject *o);






     PyObject * PyNumber_Invert(PyObject *o);







     PyObject * PyNumber_Lshift(PyObject *o1, PyObject *o2);







     PyObject * PyNumber_Rshift(PyObject *o1, PyObject *o2);







     PyObject * PyNumber_And(PyObject *o1, PyObject *o2);
# 751 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     PyObject * PyNumber_Xor(PyObject *o1, PyObject *o2);







     PyObject * PyNumber_Or(PyObject *o1, PyObject *o2);
# 771 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     PyObject * PyNumber_Index(PyObject *o);






     Py_ssize_t PyNumber_AsSsize_t(PyObject *o, PyObject *exc);
# 788 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     PyObject * PyNumber_Long(PyObject *o);







     PyObject * PyNumber_Float(PyObject *o);
# 806 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     PyObject * PyNumber_InPlaceAdd(PyObject *o1, PyObject *o2);







     PyObject * PyNumber_InPlaceSubtract(PyObject *o1, PyObject *o2);







     PyObject * PyNumber_InPlaceMultiply(PyObject *o1, PyObject *o2);







     PyObject * PyNumber_InPlaceFloorDivide(PyObject *o1,
                                                        PyObject *o2);
# 840 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     PyObject * PyNumber_InPlaceTrueDivide(PyObject *o1,
                                                       PyObject *o2);
# 850 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     PyObject * PyNumber_InPlaceRemainder(PyObject *o1, PyObject *o2);







     PyObject * PyNumber_InPlacePower(PyObject *o1, PyObject *o2,
                                                  PyObject *o3);







     PyObject * PyNumber_InPlaceLshift(PyObject *o1, PyObject *o2);







     PyObject * PyNumber_InPlaceRshift(PyObject *o1, PyObject *o2);







     PyObject * PyNumber_InPlaceAnd(PyObject *o1, PyObject *o2);







     PyObject * PyNumber_InPlaceXor(PyObject *o1, PyObject *o2);







     PyObject * PyNumber_InPlaceOr(PyObject *o1, PyObject *o2);







     PyObject * PyNumber_ToBase(PyObject *n, int base);
# 918 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     int PySequence_Check(PyObject *o);
# 927 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     Py_ssize_t PySequence_Size(PyObject *o);







     Py_ssize_t PySequence_Length(PyObject *o);



     PyObject * PySequence_Concat(PyObject *o1, PyObject *o2);







     PyObject * PySequence_Repeat(PyObject *o, Py_ssize_t count);







     PyObject * PySequence_GetItem(PyObject *o, Py_ssize_t i);






     PyObject * PySequence_GetSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2);







     int PySequence_SetItem(PyObject *o, Py_ssize_t i, PyObject *v);







     int PySequence_DelItem(PyObject *o, Py_ssize_t i);







     int PySequence_SetSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2,
                                         PyObject *v);







     int PySequence_DelSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2);







     PyObject * PySequence_Tuple(PyObject *o);







     PyObject * PySequence_List(PyObject *o);





     PyObject * PySequence_Fast(PyObject *o, const char* m);
# 1053 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     Py_ssize_t PySequence_Count(PyObject *o, PyObject *value);
# 1062 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     int PySequence_Contains(PyObject *seq, PyObject *ob);
# 1072 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     Py_ssize_t _PySequence_IterSearch(PyObject *seq,
                                        PyObject *obj, int operation);
# 1088 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     int PySequence_In(PyObject *o, PyObject *value);
# 1099 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     Py_ssize_t PySequence_Index(PyObject *o, PyObject *value);
# 1109 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     PyObject * PySequence_InPlaceConcat(PyObject *o1, PyObject *o2);
# 1118 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     PyObject * PySequence_InPlaceRepeat(PyObject *o, Py_ssize_t count);
# 1129 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     int PyMapping_Check(PyObject *o);
# 1138 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     Py_ssize_t PyMapping_Size(PyObject *o);
# 1148 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     Py_ssize_t PyMapping_Length(PyObject *o);
# 1172 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     int PyMapping_HasKeyString(PyObject *o, char *key);
# 1182 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     int PyMapping_HasKey(PyObject *o, PyObject *key);
# 1193 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     PyObject * PyMapping_Keys(PyObject *o);






     PyObject * PyMapping_Values(PyObject *o);






     PyObject * PyMapping_Items(PyObject *o);
# 1216 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
     PyObject * PyMapping_GetItemString(PyObject *o, char *key);







     int PyMapping_SetItemString(PyObject *o, char *key,
                                            PyObject *value);
# 1234 "/Users/parrt/tmp/Python-3.3.1/Include/abstract.h"
int PyObject_IsInstance(PyObject *object, PyObject *typeorclass);


int PyObject_IsSubclass(PyObject *object, PyObject *typeorclass);




int _PyObject_RealIsInstance(PyObject *inst, PyObject *cls);

int _PyObject_RealIsSubclass(PyObject *derived, PyObject *cls);

char *const * _PySequence_BytesToCharpArray(PyObject* self);

void _Py_FreeCharPArray(char *const array[]);



void _Py_add_one_to_index_F(int nd, Py_ssize_t *index,
                                        const Py_ssize_t *shape);
void _Py_add_one_to_index_C(int nd, Py_ssize_t *index,
                                        const Py_ssize_t *shape);
# 120 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/bltinmodule.h" 1






extern PyTypeObject PyFilter_Type;
extern PyTypeObject PyMap_Type;
extern PyTypeObject PyZip_Type;
# 121 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2

# 1 "/Users/parrt/tmp/Python-3.3.1/Include/compile.h" 1




# 1 "/Users/parrt/tmp/Python-3.3.1/Include/code.h" 1
# 11 "/Users/parrt/tmp/Python-3.3.1/Include/code.h"
typedef struct {
    PyObject ob_base;
    int co_argcount;
    int co_kwonlyargcount;
    int co_nlocals;
    int co_stacksize;
    int co_flags;
    PyObject *co_code;
    PyObject *co_consts;
    PyObject *co_names;
    PyObject *co_varnames;
    PyObject *co_freevars;
    PyObject *co_cellvars;

    unsigned char *co_cell2arg;
    PyObject *co_filename;
    PyObject *co_name;
    int co_firstlineno;
    PyObject *co_lnotab;

    void *co_zombieframe;
    PyObject *co_weakreflist;
} PyCodeObject;
# 73 "/Users/parrt/tmp/Python-3.3.1/Include/code.h"
extern PyTypeObject PyCode_Type;





PyCodeObject * PyCode_New(
 int, int, int, int, int, PyObject *, PyObject *,
 PyObject *, PyObject *, PyObject *, PyObject *,
 PyObject *, PyObject *, int, PyObject *);



PyCodeObject *
PyCode_NewEmpty(const char *filename, const char *funcname, int firstlineno);




int PyCode_Addr2Line(PyCodeObject *, int);


typedef struct _addr_pair {
        int ap_lower;
        int ap_upper;
} PyAddrPair;





int _PyCode_CheckLineNumber(PyCodeObject* co,
                                        int lasti, PyAddrPair *bounds);


PyObject* PyCode_Optimize(PyObject *code, PyObject* consts,
                                      PyObject *names, PyObject *lineno_obj);
# 6 "/Users/parrt/tmp/Python-3.3.1/Include/compile.h" 2






struct _node;
PyCodeObject * PyNode_Compile(struct _node *, const char *);



typedef struct {
    int ff_features;
    int ff_lineno;
} PyFutureFeatures;
# 31 "/Users/parrt/tmp/Python-3.3.1/Include/compile.h"
struct _mod;

PyCodeObject * PyAST_CompileEx(
    struct _mod *mod,
    const char *filename,
    PyCompilerFlags *flags,
    int optimize,
    PyArena *arena);
PyFutureFeatures * PyFuture_FromAST(struct _mod *, const char *);


PyObject* _Py_Mangle(PyObject *p, PyObject *name);
# 123 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/eval.h" 1
# 10 "/Users/parrt/tmp/Python-3.3.1/Include/eval.h"
PyObject * PyEval_EvalCode(PyObject *, PyObject *, PyObject *);

PyObject * PyEval_EvalCodeEx(PyObject *co,
     PyObject *globals,
     PyObject *locals,
     PyObject **args, int argc,
     PyObject **kwds, int kwdc,
     PyObject **defs, int defc,
     PyObject *kwdefs, PyObject *closure);


PyObject * _PyEval_CallTracing(PyObject *func, PyObject *args);
# 124 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2

# 1 "/Users/parrt/tmp/Python-3.3.1/Include/pyctype.h" 1
# 13 "/Users/parrt/tmp/Python-3.3.1/Include/pyctype.h"
extern const unsigned int _Py_ctype_table[256];
# 26 "/Users/parrt/tmp/Python-3.3.1/Include/pyctype.h"
extern const unsigned char _Py_ctype_tolower[256];
extern const unsigned char _Py_ctype_toupper[256];
# 126 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/pystrtod.h" 1
# 9 "/Users/parrt/tmp/Python-3.3.1/Include/pystrtod.h"
double PyOS_string_to_double(const char *str,
                                         char **endptr,
                                         PyObject *overflow_exception);



char * PyOS_double_to_string(double val,
                                         char format_code,
                                         int precision,
                                         int flags,
                                         int *type);


double _Py_parse_inf_or_nan(const char *p, char **endptr);
# 127 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/pystrcmp.h" 1







int PyOS_mystrnicmp(const char *, const char *, Py_ssize_t);
int PyOS_mystricmp(const char *, const char *);
# 128 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/dtoa.h" 1






double _Py_dg_strtod(const char *str, char **ptr);
char * _Py_dg_dtoa(double d, int mode, int ndigits,
                        int *decpt, int *sign, char **rve);
void _Py_dg_freedtoa(char *s);
double _Py_dg_stdnan(int sign);
double _Py_dg_infinity(int sign);
# 129 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/fileutils.h" 1







PyObject * _Py_device_encoding(int);

wchar_t * _Py_char2wchar(
    const char *arg,
    size_t *size);

char* _Py_wchar2char(
    const wchar_t *text,
    size_t *error_pos);


int _Py_wstat(
    const wchar_t* path,
    struct stat *buf);



int _Py_stat(
    PyObject *path,
    struct stat *statbuf);


FILE * _Py_wfopen(
    const wchar_t *path,
    const wchar_t *mode);

FILE* _Py_fopen(
    PyObject *path,
    const char *mode);


int _Py_wreadlink(
    const wchar_t *path,
    wchar_t *buf,
    size_t bufsiz);



wchar_t* _Py_wrealpath(
    const wchar_t *path,
    wchar_t *resolved_path,
    size_t resolved_path_size);


wchar_t* _Py_wgetcwd(
    wchar_t *buf,
    size_t size);
# 130 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/pyfpe.h" 1
# 131 "/Users/parrt/tmp/Python-3.3.1/Include/Python.h" 2
# 6 "longobject.c" 2
# 1 "/Users/parrt/tmp/Python-3.3.1/Include/longintrepr.h" 1
# 7 "longobject.c" 2

# 1 "/Developer/usr/llvm-gcc-4.2/lib/gcc/i686-apple-darwin11/4.2.1/include/float.h" 1 3 4
# 9 "longobject.c" 2

# 1 "/Developer/usr/llvm-gcc-4.2/lib/gcc/i686-apple-darwin11/4.2.1/include/stddef.h" 1 3 4
# 152 "/Developer/usr/llvm-gcc-4.2/lib/gcc/i686-apple-darwin11/4.2.1/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 11 "longobject.c" 2
# 31 "longobject.c"
static PyLongObject small_ints[5 + 257];




static PyObject *
get_small_int(sdigit ival)
{
    PyObject *v = (PyObject*)(small_ints + ival + 5);
    ( ((PyObject*)(v))->ob_refcnt++);






    return v;
}





static PyLongObject *
maybe_small_long(PyLongObject *v)
{
    if (v && (((((PyVarObject*)(v))->ob_size)) < 0 ? -((((PyVarObject*)(v))->ob_size)) : ((((PyVarObject*)(v))->ob_size))) <= 1) {
        sdigit ival = ((((PyVarObject*)(v))->ob_size) < 0 ? -(sdigit)(v)->ob_digit[0] : ((((PyVarObject*)(v))->ob_size) == 0 ? (sdigit)0 : (sdigit)(v)->ob_digit[0]));
        if (-5 <= ival && ival < 257) {
            do { if ( --((PyObject*)(v))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(v)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(v)))); } while (0);
            return (PyLongObject *)get_small_int(ival);
        }
    }
    return v;
}
# 106 "longobject.c"
static PyLongObject *
long_normalize(register PyLongObject *v)
{
    Py_ssize_t j = (((((PyVarObject*)(v))->ob_size)) < 0 ? -((((PyVarObject*)(v))->ob_size)) : ((((PyVarObject*)(v))->ob_size)));
    Py_ssize_t i = j;

    while (i > 0 && v->ob_digit[i-1] == 0)
        --i;
    if (i != j)
        (((PyVarObject*)(v))->ob_size) = ((((PyVarObject*)(v))->ob_size) < 0) ? -(i) : i;
    return v;
}







PyLongObject *
_PyLong_New(Py_ssize_t size)
{
    PyLongObject *result;





    if (size > (Py_ssize_t)((((Py_ssize_t)(((size_t)-1)>>1)) - __builtin_offsetof (PyLongObject, ob_digit))/sizeof(digit))) {
        PyErr_SetString(PyExc_OverflowError,
                        "too many digits in integer");
        return ((void *)0);
    }
    result = PyObject_Malloc(__builtin_offsetof (PyLongObject, ob_digit) +
                             size*sizeof(digit));
    if (!result) {
        PyErr_NoMemory();
        return ((void *)0);
    }
    return (PyLongObject*)( (((PyVarObject*)(result))->ob_size) = (size), ( (((PyObject*)((result)))->ob_type) = ((&PyLong_Type)), ( (((PyObject*)((PyObject *)((result))))->ob_refcnt) = 1), ((result)) ) );
}

PyObject *
_PyLong_Copy(PyLongObject *src)
{
    PyLongObject *result;
    Py_ssize_t i;

    (__builtin_expect(!(src != ((void *)0)), 0) ? __assert_rtn(__func__, "longobject.c", 154, "src != NULL") : (void)0);
    i = (((PyVarObject*)(src))->ob_size);
    if (i < 0)
        i = -(i);
    if (i < 2) {
        sdigit ival = ((((PyVarObject*)(src))->ob_size) < 0 ? -(sdigit)(src)->ob_digit[0] : ((((PyVarObject*)(src))->ob_size) == 0 ? (sdigit)0 : (sdigit)(src)->ob_digit[0]));
        do if (-5 <= ival && ival < 257) { return get_small_int((sdigit)ival); } while(0);
    }
    result = _PyLong_New(i);
    if (result != ((void *)0)) {
        (((PyVarObject*)(result))->ob_size) = (((PyVarObject*)(src))->ob_size);
        while (--i >= 0)
            result->ob_digit[i] = src->ob_digit[i];
    }
    return (PyObject *)result;
}



PyObject *
PyLong_FromLong(long ival)
{
    PyLongObject *v;
    unsigned long abs_ival;
    unsigned long t;
    int ndigits = 0;
    int sign = 1;

    do if (-5 <= ival && ival < 257) { return get_small_int((sdigit)ival); } while(0);

    if (ival < 0) {


        abs_ival = 0U-(unsigned long)ival;
        sign = -1;
    }
    else {
        abs_ival = (unsigned long)ival;
    }


    if (!(abs_ival >> 30)) {
        v = _PyLong_New(1);
        if (v) {
            (((PyVarObject*)(v))->ob_size) = sign;
            v->ob_digit[0] = (digit)(abs_ival);

        }
        return (PyObject*)v;
    }
# 221 "longobject.c"
    t = abs_ival;
    while (t) {
        ++ndigits;
        t >>= 30;
    }
    v = _PyLong_New(ndigits);
    if (v != ((void *)0)) {
        digit *p = v->ob_digit;
        (((PyVarObject*)(v))->ob_size) = ndigits*sign;
        t = abs_ival;
        while (t) {
            *p++ = (digit)(t & ((digit)(((digit)1 << 30) - 1)));

            t >>= 30;
        }
    }
    return (PyObject *)v;
}



PyObject *
PyLong_FromUnsignedLong(unsigned long ival)
{
    PyLongObject *v;
    unsigned long t;
    int ndigits = 0;

    if (ival < ((digit)1 << 30))
        return PyLong_FromLong(ival);

    t = (unsigned long)ival;
    while (t) {
        ++ndigits;
        t >>= 30;
    }
    v = _PyLong_New(ndigits);
    if (v != ((void *)0)) {
        digit *p = v->ob_digit;
        (((PyVarObject*)(v))->ob_size) = ndigits;
        while (ival) {
            *p++ = (digit)(ival & ((digit)(((digit)1 << 30) - 1)));
            ival >>= 30;
        }
    }
    return (PyObject *)v;
}



PyObject *
PyLong_FromDouble(double dval)
{
    PyLongObject *v;
    double frac;
    int i, ndig, expo, neg;
    neg = 0;
    if (( sizeof (dval) == sizeof(float ) ? __inline_isinff((float)(dval)) : sizeof (dval) == sizeof(double) ? __inline_isinfd((double)(dval)) : __inline_isinf ((long double)(dval)))) {
        PyErr_SetString(PyExc_OverflowError,
                        "cannot convert float infinity to integer");
        return ((void *)0);
    }
    if (( sizeof (dval) == sizeof(float ) ? __inline_isnanf((float)(dval)) : sizeof (dval) == sizeof(double) ? __inline_isnand((double)(dval)) : __inline_isnan ((long double)(dval)))) {
        PyErr_SetString(PyExc_ValueError,
                        "cannot convert float NaN to integer");
        return ((void *)0);
    }
    if (dval < 0.0) {
        neg = 1;
        dval = -dval;
    }
    frac = frexp(dval, &expo);
    if (expo <= 0)
        return PyLong_FromLong(0L);
    ndig = (expo-1) / 30 + 1;
    v = _PyLong_New(ndig);
    if (v == ((void *)0))
        return ((void *)0);
    frac = ldexp(frac, (expo-1) % 30 + 1);
    for (i = ndig; --i >= 0; ) {
        digit bits = (digit)frac;
        v->ob_digit[i] = bits;
        frac = frac - (double)bits;
        frac = ldexp(frac, 30);
    }
    if (neg)
        (((PyVarObject*)(v))->ob_size) = -((((PyVarObject*)(v))->ob_size));
    return (PyObject *)v;
}
# 333 "longobject.c"
long
PyLong_AsLongAndOverflow(PyObject *vv, int *overflow)
{

    register PyLongObject *v;
    unsigned long x, prev;
    long res;
    Py_ssize_t i;
    int sign;
    int do_decref = 0;

    *overflow = 0;
    if (vv == ((void *)0)) {
        _PyErr_BadInternalCall("longobject.c", 346);
        return -1;
    }

    if (!((((((PyObject*)(vv))->ob_type))->tp_flags & ((1L<<24))) != 0)) {
        PyNumberMethods *nb;
        nb = vv->ob_type->tp_as_number;
        if (nb == ((void *)0) || nb->nb_int == ((void *)0)) {
            PyErr_SetString(PyExc_TypeError,
                            "an integer is required");
            return -1;
        }
        vv = (*nb->nb_int) (vv);
        if (vv == ((void *)0))
            return -1;
        do_decref = 1;
        if (!((((((PyObject*)(vv))->ob_type))->tp_flags & ((1L<<24))) != 0)) {
            do { if ( --((PyObject*)(vv))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(vv)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(vv)))); } while (0);
            PyErr_SetString(PyExc_TypeError,
                            "nb_int should return int object");
            return -1;
        }
    }

    res = -1;
    v = (PyLongObject *)vv;
    i = (((PyVarObject*)(v))->ob_size);

    switch (i) {
    case -1:
        res = -(sdigit)v->ob_digit[0];
        break;
    case 0:
        res = 0;
        break;
    case 1:
        res = v->ob_digit[0];
        break;
    default:
        sign = 1;
        x = 0;
        if (i < 0) {
            sign = -1;
            i = -(i);
        }
        while (--i >= 0) {
            prev = x;
            x = (x << 30) | v->ob_digit[i];
            if ((x >> 30) != prev) {
                *overflow = sign;
                goto exit;
            }
        }



        if (x <= (unsigned long)9223372036854775807L) {
            res = (long)x * sign;
        }
        else if (sign < 0 && x == (0-(unsigned long)(-9223372036854775807L - 1L))) {
            res = (-9223372036854775807L - 1L);
        }
        else {
            *overflow = sign;

        }
    }
  exit:
    if (do_decref) {
        do { if ( --((PyObject*)(vv))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(vv)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(vv)))); } while (0);
    }
    return res;
}




long
PyLong_AsLong(PyObject *obj)
{
    int overflow;
    long result = PyLong_AsLongAndOverflow(obj, &overflow);
    if (overflow) {


        PyErr_SetString(PyExc_OverflowError,
                        "Python int too large to convert to C long");
    }
    return result;
}




int
_PyLong_AsInt(PyObject *obj)
{
    int overflow;
    long result = PyLong_AsLongAndOverflow(obj, &overflow);
    if (overflow || result > 2147483647 || result < (-2147483647 - 1)) {


        PyErr_SetString(PyExc_OverflowError,
                        "Python int too large to convert to C int");
        return -1;
    }
    return (int)result;
}




Py_ssize_t
PyLong_AsSsize_t(PyObject *vv) {
    register PyLongObject *v;
    size_t x, prev;
    Py_ssize_t i;
    int sign;

    if (vv == ((void *)0)) {
        _PyErr_BadInternalCall("longobject.c", 466);
        return -1;
    }
    if (!((((((PyObject*)(vv))->ob_type))->tp_flags & ((1L<<24))) != 0)) {
        PyErr_SetString(PyExc_TypeError, "an integer is required");
        return -1;
    }

    v = (PyLongObject *)vv;
    i = (((PyVarObject*)(v))->ob_size);
    switch (i) {
    case -1: return -(sdigit)v->ob_digit[0];
    case 0: return 0;
    case 1: return v->ob_digit[0];
    }
    sign = 1;
    x = 0;
    if (i < 0) {
        sign = -1;
        i = -(i);
    }
    while (--i >= 0) {
        prev = x;
        x = (x << 30) | v->ob_digit[i];
        if ((x >> 30) != prev)
            goto overflow;
    }



    if (x <= (size_t)((Py_ssize_t)(((size_t)-1)>>1))) {
        return (Py_ssize_t)x * sign;
    }
    else if (sign < 0 && x == (0-(size_t)(-((Py_ssize_t)(((size_t)-1)>>1))-1))) {
        return (-((Py_ssize_t)(((size_t)-1)>>1))-1);
    }


  overflow:
    PyErr_SetString(PyExc_OverflowError,
                    "Python int too large to convert to C ssize_t");
    return -1;
}




unsigned long
PyLong_AsUnsignedLong(PyObject *vv)
{
    register PyLongObject *v;
    unsigned long x, prev;
    Py_ssize_t i;

    if (vv == ((void *)0)) {
        _PyErr_BadInternalCall("longobject.c", 521);
        return (unsigned long)-1;
    }
    if (!((((((PyObject*)(vv))->ob_type))->tp_flags & ((1L<<24))) != 0)) {
        PyErr_SetString(PyExc_TypeError, "an integer is required");
        return (unsigned long)-1;
    }

    v = (PyLongObject *)vv;
    i = (((PyVarObject*)(v))->ob_size);
    x = 0;
    if (i < 0) {
        PyErr_SetString(PyExc_OverflowError,
                        "can't convert negative value to unsigned int");
        return (unsigned long) -1;
    }
    switch (i) {
    case 0: return 0;
    case 1: return v->ob_digit[0];
    }
    while (--i >= 0) {
        prev = x;
        x = (x << 30) | v->ob_digit[i];
        if ((x >> 30) != prev) {
            PyErr_SetString(PyExc_OverflowError,
                            "python int too large to convert "
                            "to C unsigned long");
            return (unsigned long) -1;
        }
    }
    return x;
}




size_t
PyLong_AsSize_t(PyObject *vv)
{
    register PyLongObject *v;
    size_t x, prev;
    Py_ssize_t i;

    if (vv == ((void *)0)) {
        _PyErr_BadInternalCall("longobject.c", 565);
        return (size_t) -1;
    }
    if (!((((((PyObject*)(vv))->ob_type))->tp_flags & ((1L<<24))) != 0)) {
        PyErr_SetString(PyExc_TypeError, "an integer is required");
        return (size_t)-1;
    }

    v = (PyLongObject *)vv;
    i = (((PyVarObject*)(v))->ob_size);
    x = 0;
    if (i < 0) {
        PyErr_SetString(PyExc_OverflowError,
                   "can't convert negative value to size_t");
        return (size_t) -1;
    }
    switch (i) {
    case 0: return 0;
    case 1: return v->ob_digit[0];
    }
    while (--i >= 0) {
        prev = x;
        x = (x << 30) | v->ob_digit[i];
        if ((x >> 30) != prev) {
            PyErr_SetString(PyExc_OverflowError,
                "Python int too large to convert to C size_t");
            return (size_t) -1;
        }
    }
    return x;
}




static unsigned long
_PyLong_AsUnsignedLongMask(PyObject *vv)
{
    register PyLongObject *v;
    unsigned long x;
    Py_ssize_t i;
    int sign;

    if (vv == ((void *)0) || !((((((PyObject*)(vv))->ob_type))->tp_flags & ((1L<<24))) != 0)) {
        _PyErr_BadInternalCall("longobject.c", 609);
        return (unsigned long) -1;
    }
    v = (PyLongObject *)vv;
    i = (((PyVarObject*)(v))->ob_size);
    switch (i) {
    case 0: return 0;
    case 1: return v->ob_digit[0];
    }
    sign = 1;
    x = 0;
    if (i < 0) {
        sign = -1;
        i = -i;
    }
    while (--i >= 0) {
        x = (x << 30) | v->ob_digit[i];
    }
    return x * sign;
}

unsigned long
PyLong_AsUnsignedLongMask(register PyObject *op)
{
    PyNumberMethods *nb;
    PyLongObject *lo;
    unsigned long val;

    if (op && ((((((PyObject*)(op))->ob_type))->tp_flags & ((1L<<24))) != 0))
        return _PyLong_AsUnsignedLongMask(op);

    if (op == ((void *)0) || (nb = op->ob_type->tp_as_number) == ((void *)0) ||
        nb->nb_int == ((void *)0)) {
        PyErr_SetString(PyExc_TypeError, "an integer is required");
        return (unsigned long)-1;
    }

    lo = (PyLongObject*) (*nb->nb_int) (op);
    if (lo == ((void *)0))
        return (unsigned long)-1;
    if (((((((PyObject*)(lo))->ob_type))->tp_flags & ((1L<<24))) != 0)) {
        val = _PyLong_AsUnsignedLongMask((PyObject *)lo);
        do { if ( --((PyObject*)(lo))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(lo)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(lo)))); } while (0);
        if (PyErr_Occurred())
            return (unsigned long)-1;
        return val;
    }
    else
    {
        do { if ( --((PyObject*)(lo))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(lo)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(lo)))); } while (0);
        PyErr_SetString(PyExc_TypeError,
                        "nb_int should return int object");
        return (unsigned long)-1;
    }
}

int
_PyLong_Sign(PyObject *vv)
{
    PyLongObject *v = (PyLongObject *)vv;

    (__builtin_expect(!(v != ((void *)0)), 0) ? __assert_rtn(__func__, "longobject.c", 670, "v != NULL") : (void)0);
    (__builtin_expect(!(((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<24))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 671, "PyLong_Check(v)") : (void)0);

    return (((PyVarObject*)(v))->ob_size) == 0 ? 0 : ((((PyVarObject*)(v))->ob_size) < 0 ? -1 : 1);
}

size_t
_PyLong_NumBits(PyObject *vv)
{
    PyLongObject *v = (PyLongObject *)vv;
    size_t result = 0;
    Py_ssize_t ndigits;

    (__builtin_expect(!(v != ((void *)0)), 0) ? __assert_rtn(__func__, "longobject.c", 683, "v != NULL") : (void)0);
    (__builtin_expect(!(((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<24))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 684, "PyLong_Check(v)") : (void)0);
    ndigits = (((((PyVarObject*)(v))->ob_size)) < 0 ? -((((PyVarObject*)(v))->ob_size)) : ((((PyVarObject*)(v))->ob_size)));
    (__builtin_expect(!(ndigits == 0 || v->ob_digit[ndigits - 1] != 0), 0) ? __assert_rtn(__func__, "longobject.c", 686, "ndigits == 0 || v->ob_digit[ndigits - 1] != 0") : (void)0);
    if (ndigits > 0) {
        digit msd = v->ob_digit[ndigits - 1];
        if ((size_t)(ndigits - 1) > 18446744073709551615ULL / (size_t)30)
            goto Overflow;
        result = (size_t)(ndigits - 1) * (size_t)30;
        do {
            ++result;
            if (result == 0)
                goto Overflow;
            msd >>= 1;
        } while (msd);
    }
    return result;

  Overflow:
    PyErr_SetString(PyExc_OverflowError, "int has too many bits "
                    "to express in a platform size_t");
    return (size_t)-1;
}

PyObject *
_PyLong_FromByteArray(const unsigned char* bytes, size_t n,
                      int little_endian, int is_signed)
{
    const unsigned char* pstartbyte;
    int incr;
    const unsigned char* pendbyte;
    size_t numsignificantbytes;
    Py_ssize_t ndigits;
    PyLongObject* v;
    Py_ssize_t idigit = 0;

    if (n == 0)
        return PyLong_FromLong(0L);

    if (little_endian) {
        pstartbyte = bytes;
        pendbyte = bytes + n - 1;
        incr = 1;
    }
    else {
        pstartbyte = bytes + n - 1;
        pendbyte = bytes;
        incr = -1;
    }

    if (is_signed)
        is_signed = *pendbyte >= 0x80;




    {
        size_t i;
        const unsigned char* p = pendbyte;
        const int pincr = -incr;
        const unsigned char insignficant = is_signed ? 0xff : 0x00;

        for (i = 0; i < n; ++i, p += pincr) {
            if (*p != insignficant)
                break;
        }
        numsignificantbytes = n - i;





        if (is_signed && numsignificantbytes < n)
            ++numsignificantbytes;
    }





    if (numsignificantbytes > (((Py_ssize_t)(((size_t)-1)>>1)) - 30) / 8) {
        PyErr_SetString(PyExc_OverflowError,
                        "byte array too long to convert to int");
        return ((void *)0);
    }
    ndigits = (numsignificantbytes * 8 + 30 - 1) / 30;
    v = _PyLong_New(ndigits);
    if (v == ((void *)0))
        return ((void *)0);




    {
        size_t i;
        twodigits carry = 1;
        twodigits accum = 0;
        unsigned int accumbits = 0;
        const unsigned char* p = pstartbyte;

        for (i = 0; i < numsignificantbytes; ++i, p += incr) {
            twodigits thisbyte = *p;

            if (is_signed) {
                thisbyte = (0xff ^ thisbyte) + carry;
                carry = thisbyte >> 8;
                thisbyte &= 0xff;
            }



            accum |= (twodigits)thisbyte << accumbits;
            accumbits += 8;
            if (accumbits >= 30) {

                (__builtin_expect(!(idigit < ndigits), 0) ? __assert_rtn(__func__, "longobject.c", 798, "idigit < ndigits") : (void)0);
                v->ob_digit[idigit] = (digit)(accum & ((digit)(((digit)1 << 30) - 1)));
                ++idigit;
                accum >>= 30;
                accumbits -= 30;
                (__builtin_expect(!(accumbits < 30), 0) ? __assert_rtn(__func__, "longobject.c", 803, "accumbits < PyLong_SHIFT") : (void)0);
            }
        }
        (__builtin_expect(!(accumbits < 30), 0) ? __assert_rtn(__func__, "longobject.c", 806, "accumbits < PyLong_SHIFT") : (void)0);
        if (accumbits) {
            (__builtin_expect(!(idigit < ndigits), 0) ? __assert_rtn(__func__, "longobject.c", 808, "idigit < ndigits") : (void)0);
            v->ob_digit[idigit] = (digit)accum;
            ++idigit;
        }
    }

    (((PyVarObject*)(v))->ob_size) = is_signed ? -idigit : idigit;
    return (PyObject *)long_normalize(v);
}

int
_PyLong_AsByteArray(PyLongObject* v,
                    unsigned char* bytes, size_t n,
                    int little_endian, int is_signed)
{
    Py_ssize_t i;
    Py_ssize_t ndigits;
    twodigits accum;
    unsigned int accumbits;
    int do_twos_comp;
    digit carry;
    size_t j;
    unsigned char* p;
    int pincr;

    (__builtin_expect(!(v != ((void *)0) && ((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<24))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 833, "v != NULL && PyLong_Check(v)") : (void)0);

    if ((((PyVarObject*)(v))->ob_size) < 0) {
        ndigits = -((((PyVarObject*)(v))->ob_size));
        if (!is_signed) {
            PyErr_SetString(PyExc_OverflowError,
                            "can't convert negative int to unsigned");
            return -1;
        }
        do_twos_comp = 1;
    }
    else {
        ndigits = (((PyVarObject*)(v))->ob_size);
        do_twos_comp = 0;
    }

    if (little_endian) {
        p = bytes;
        pincr = 1;
    }
    else {
        p = bytes + n - 1;
        pincr = -1;
    }





    (__builtin_expect(!(ndigits == 0 || v->ob_digit[ndigits - 1] != 0), 0) ? __assert_rtn(__func__, "longobject.c", 862, "ndigits == 0 || v->ob_digit[ndigits - 1] != 0") : (void)0);
    j = 0;
    accum = 0;
    accumbits = 0;
    carry = do_twos_comp ? 1 : 0;
    for (i = 0; i < ndigits; ++i) {
        digit thisdigit = v->ob_digit[i];
        if (do_twos_comp) {
            thisdigit = (thisdigit ^ ((digit)(((digit)1 << 30) - 1))) + carry;
            carry = thisdigit >> 30;
            thisdigit &= ((digit)(((digit)1 << 30) - 1));
        }



        accum |= (twodigits)thisdigit << accumbits;



        if (i == ndigits - 1) {



            digit s = do_twos_comp ? thisdigit ^ ((digit)(((digit)1 << 30) - 1)) : thisdigit;
            while (s != 0) {
                s >>= 1;
                accumbits++;
            }
        }
        else
            accumbits += 30;


        while (accumbits >= 8) {
            if (j >= n)
                goto Overflow;
            ++j;
            *p = (unsigned char)(accum & 0xff);
            p += pincr;
            accumbits -= 8;
            accum >>= 8;
        }
    }


    (__builtin_expect(!(accumbits < 8), 0) ? __assert_rtn(__func__, "longobject.c", 907, "accumbits < 8") : (void)0);
    (__builtin_expect(!(carry == 0), 0) ? __assert_rtn(__func__, "longobject.c", 908, "carry == 0") : (void)0);
    if (accumbits > 0) {
        if (j >= n)
            goto Overflow;
        ++j;
        if (do_twos_comp) {



            accum |= (~(twodigits)0) << accumbits;
        }
        *p = (unsigned char)(accum & 0xff);
        p += pincr;
    }
    else if (j == n && n > 0 && is_signed) {




        unsigned char msb = *(p - pincr);
        int sign_bit_set = msb >= 0x80;
        (__builtin_expect(!(accumbits == 0), 0) ? __assert_rtn(__func__, "longobject.c", 929, "accumbits == 0") : (void)0);
        if (sign_bit_set == do_twos_comp)
            return 0;
        else
            goto Overflow;
    }


    {
        unsigned char signbyte = do_twos_comp ? 0xffU : 0U;
        for ( ; j < n; ++j, p += pincr)
            *p = signbyte;
    }

    return 0;

  Overflow:
    PyErr_SetString(PyExc_OverflowError, "int too big to convert");
    return -1;

}



PyObject *
PyLong_FromVoidPtr(void *p)
{


    if (!p)
        return PyLong_FromLong(0);
    return PyLong_FromUnsignedLong((unsigned long)(Py_uintptr_t)p);
# 975 "longobject.c"
}



void *
PyLong_AsVoidPtr(PyObject *vv)
{

    long x;

    if (((((((PyObject*)(vv))->ob_type))->tp_flags & ((1L<<24))) != 0) && _PyLong_Sign(vv) < 0)
        x = PyLong_AsLong(vv);
    else
        x = PyLong_AsUnsignedLong(vv);
# 1006 "longobject.c"
    if (x == -1 && PyErr_Occurred())
        return ((void *)0);
    return (void *)x;
}
# 1022 "longobject.c"
PyObject *
PyLong_FromLongLong(long long ival)
{
    PyLongObject *v;
    unsigned long long abs_ival;
    unsigned long long t;
    int ndigits = 0;
    int negative = 0;

    do if (-5 <= ival && ival < 257) { return get_small_int((sdigit)ival); } while(0);
    if (ival < 0) {


        abs_ival = (unsigned long long)(-1-ival) + 1;
        negative = 1;
    }
    else {
        abs_ival = (unsigned long long)ival;
    }





    t = abs_ival;
    while (t) {
        ++ndigits;
        t >>= 30;
    }
    v = _PyLong_New(ndigits);
    if (v != ((void *)0)) {
        digit *p = v->ob_digit;
        (((PyVarObject*)(v))->ob_size) = negative ? -ndigits : ndigits;
        t = abs_ival;
        while (t) {
            *p++ = (digit)(t & ((digit)(((digit)1 << 30) - 1)));
            t >>= 30;
        }
    }
    return (PyObject *)v;
}



PyObject *
PyLong_FromUnsignedLongLong(unsigned long long ival)
{
    PyLongObject *v;
    unsigned long long t;
    int ndigits = 0;

    if (ival < ((digit)1 << 30))
        return PyLong_FromLong((long)ival);

    t = (unsigned long long)ival;
    while (t) {
        ++ndigits;
        t >>= 30;
    }
    v = _PyLong_New(ndigits);
    if (v != ((void *)0)) {
        digit *p = v->ob_digit;
        (((PyVarObject*)(v))->ob_size) = ndigits;
        while (ival) {
            *p++ = (digit)(ival & ((digit)(((digit)1 << 30) - 1)));
            ival >>= 30;
        }
    }
    return (PyObject *)v;
}



PyObject *
PyLong_FromSsize_t(Py_ssize_t ival)
{
    PyLongObject *v;
    size_t abs_ival;
    size_t t;
    int ndigits = 0;
    int negative = 0;

    do if (-5 <= ival && ival < 257) { return get_small_int((sdigit)ival); } while(0);
    if (ival < 0) {

        abs_ival = (size_t)(-1-ival)+1;
        negative = 1;
    }
    else {
        abs_ival = (size_t)ival;
    }


    t = abs_ival;
    while (t) {
        ++ndigits;
        t >>= 30;
    }
    v = _PyLong_New(ndigits);
    if (v != ((void *)0)) {
        digit *p = v->ob_digit;
        (((PyVarObject*)(v))->ob_size) = negative ? -ndigits : ndigits;
        t = abs_ival;
        while (t) {
            *p++ = (digit)(t & ((digit)(((digit)1 << 30) - 1)));
            t >>= 30;
        }
    }
    return (PyObject *)v;
}



PyObject *
PyLong_FromSize_t(size_t ival)
{
    PyLongObject *v;
    size_t t;
    int ndigits = 0;

    if (ival < ((digit)1 << 30))
        return PyLong_FromLong((long)ival);

    t = ival;
    while (t) {
        ++ndigits;
        t >>= 30;
    }
    v = _PyLong_New(ndigits);
    if (v != ((void *)0)) {
        digit *p = v->ob_digit;
        (((PyVarObject*)(v))->ob_size) = ndigits;
        while (ival) {
            *p++ = (digit)(ival & ((digit)(((digit)1 << 30) - 1)));
            ival >>= 30;
        }
    }
    return (PyObject *)v;
}




long long
PyLong_AsLongLong(PyObject *vv)
{
    PyLongObject *v;
    long long bytes;
    int one = 1;
    int res;

    if (vv == ((void *)0)) {
        _PyErr_BadInternalCall("longobject.c", 1174);
        return -1;
    }
    if (!((((((PyObject*)(vv))->ob_type))->tp_flags & ((1L<<24))) != 0)) {
        PyNumberMethods *nb;
        PyObject *io;
        if ((nb = vv->ob_type->tp_as_number) == ((void *)0) ||
            nb->nb_int == ((void *)0)) {
            PyErr_SetString(PyExc_TypeError, "an integer is required");
            return -1;
        }
        io = (*nb->nb_int) (vv);
        if (io == ((void *)0))
            return -1;
        if (((((((PyObject*)(io))->ob_type))->tp_flags & ((1L<<24))) != 0)) {
            bytes = PyLong_AsLongLong(io);
            do { if ( --((PyObject*)(io))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(io)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(io)))); } while (0);
            return bytes;
        }
        do { if ( --((PyObject*)(io))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(io)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(io)))); } while (0);
        PyErr_SetString(PyExc_TypeError, "integer conversion failed");
        return -1;
    }

    v = (PyLongObject*)vv;
    switch((((PyVarObject*)(v))->ob_size)) {
    case -1: return -(sdigit)v->ob_digit[0];
    case 0: return 0;
    case 1: return v->ob_digit[0];
    }
    res = _PyLong_AsByteArray((PyLongObject *)vv, (unsigned char *)&bytes,
                              8, (int)*(unsigned char*)&one, 1);


    if (res < 0)
        return (long long)-1;
    else
        return bytes;
}




unsigned long long
PyLong_AsUnsignedLongLong(PyObject *vv)
{
    PyLongObject *v;
    unsigned long long bytes;
    int one = 1;
    int res;

    if (vv == ((void *)0)) {
        _PyErr_BadInternalCall("longobject.c", 1226);
        return (unsigned long long)-1;
    }
    if (!((((((PyObject*)(vv))->ob_type))->tp_flags & ((1L<<24))) != 0)) {
        PyErr_SetString(PyExc_TypeError, "an integer is required");
        return (unsigned long long)-1;
    }

    v = (PyLongObject*)vv;
    switch((((PyVarObject*)(v))->ob_size)) {
    case 0: return 0;
    case 1: return v->ob_digit[0];
    }

    res = _PyLong_AsByteArray((PyLongObject *)vv, (unsigned char *)&bytes,
                              8, (int)*(unsigned char*)&one, 0);


    if (res < 0)
        return (unsigned long long)res;
    else
        return bytes;
}




static unsigned long long
_PyLong_AsUnsignedLongLongMask(PyObject *vv)
{
    register PyLongObject *v;
    unsigned long long x;
    Py_ssize_t i;
    int sign;

    if (vv == ((void *)0) || !((((((PyObject*)(vv))->ob_type))->tp_flags & ((1L<<24))) != 0)) {
        _PyErr_BadInternalCall("longobject.c", 1262);
        return (unsigned long) -1;
    }
    v = (PyLongObject *)vv;
    switch((((PyVarObject*)(v))->ob_size)) {
    case 0: return 0;
    case 1: return v->ob_digit[0];
    }
    i = (((PyVarObject*)(v))->ob_size);
    sign = 1;
    x = 0;
    if (i < 0) {
        sign = -1;
        i = -i;
    }
    while (--i >= 0) {
        x = (x << 30) | v->ob_digit[i];
    }
    return x * sign;
}

unsigned long long
PyLong_AsUnsignedLongLongMask(register PyObject *op)
{
    PyNumberMethods *nb;
    PyLongObject *lo;
    unsigned long long val;

    if (op && ((((((PyObject*)(op))->ob_type))->tp_flags & ((1L<<24))) != 0))
        return _PyLong_AsUnsignedLongLongMask(op);

    if (op == ((void *)0) || (nb = op->ob_type->tp_as_number) == ((void *)0) ||
        nb->nb_int == ((void *)0)) {
        PyErr_SetString(PyExc_TypeError, "an integer is required");
        return (unsigned long long)-1;
    }

    lo = (PyLongObject*) (*nb->nb_int) (op);
    if (lo == ((void *)0))
        return (unsigned long long)-1;
    if (((((((PyObject*)(lo))->ob_type))->tp_flags & ((1L<<24))) != 0)) {
        val = _PyLong_AsUnsignedLongLongMask((PyObject *)lo);
        do { if ( --((PyObject*)(lo))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(lo)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(lo)))); } while (0);
        if (PyErr_Occurred())
            return (unsigned long long)-1;
        return val;
    }
    else
    {
        do { if ( --((PyObject*)(lo))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(lo)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(lo)))); } while (0);
        PyErr_SetString(PyExc_TypeError,
                        "nb_int should return int object");
        return (unsigned long long)-1;
    }
}
# 1329 "longobject.c"
long long
PyLong_AsLongLongAndOverflow(PyObject *vv, int *overflow)
{

    register PyLongObject *v;
    unsigned long long x, prev;
    long long res;
    Py_ssize_t i;
    int sign;
    int do_decref = 0;

    *overflow = 0;
    if (vv == ((void *)0)) {
        _PyErr_BadInternalCall("longobject.c", 1342);
        return -1;
    }

    if (!((((((PyObject*)(vv))->ob_type))->tp_flags & ((1L<<24))) != 0)) {
        PyNumberMethods *nb;
        nb = vv->ob_type->tp_as_number;
        if (nb == ((void *)0) || nb->nb_int == ((void *)0)) {
            PyErr_SetString(PyExc_TypeError,
                            "an integer is required");
            return -1;
        }
        vv = (*nb->nb_int) (vv);
        if (vv == ((void *)0))
            return -1;
        do_decref = 1;
        if (!((((((PyObject*)(vv))->ob_type))->tp_flags & ((1L<<24))) != 0)) {
            do { if ( --((PyObject*)(vv))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(vv)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(vv)))); } while (0);
            PyErr_SetString(PyExc_TypeError,
                            "nb_int should return int object");
            return -1;
        }
    }

    res = -1;
    v = (PyLongObject *)vv;
    i = (((PyVarObject*)(v))->ob_size);

    switch (i) {
    case -1:
        res = -(sdigit)v->ob_digit[0];
        break;
    case 0:
        res = 0;
        break;
    case 1:
        res = v->ob_digit[0];
        break;
    default:
        sign = 1;
        x = 0;
        if (i < 0) {
            sign = -1;
            i = -(i);
        }
        while (--i >= 0) {
            prev = x;
            x = (x << 30) + v->ob_digit[i];
            if ((x >> 30) != prev) {
                *overflow = sign;
                goto exit;
            }
        }



        if (x <= (unsigned long long)0x7fffffffffffffffLL) {
            res = (long long)x * sign;
        }
        else if (sign < 0 && x == (0-(unsigned long long)(-0x7fffffffffffffffLL-1))) {
            res = (-0x7fffffffffffffffLL-1);
        }
        else {
            *overflow = sign;

        }
    }
  exit:
    if (do_decref) {
        do { if ( --((PyObject*)(vv))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(vv)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(vv)))); } while (0);
    }
    return res;
}
# 1427 "longobject.c"
static const unsigned char BitLengthTable[32] = {
    0, 1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4,
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5
};

static int
bits_in_digit(digit d)
{
    int d_bits = 0;
    while (d >= 32) {
        d_bits += 6;
        d >>= 6;
    }
    d_bits += (int)BitLengthTable[d];
    return d_bits;
}





static digit
v_iadd(digit *x, Py_ssize_t m, digit *y, Py_ssize_t n)
{
    Py_ssize_t i;
    digit carry = 0;

    (__builtin_expect(!(m >= n), 0) ? __assert_rtn(__func__, "longobject.c", 1454, "m >= n") : (void)0);
    for (i = 0; i < n; ++i) {
        carry += x[i] + y[i];
        x[i] = carry & ((digit)(((digit)1 << 30) - 1));
        carry >>= 30;
        (__builtin_expect(!((carry & 1) == carry), 0) ? __assert_rtn(__func__, "longobject.c", 1459, "(carry & 1) == carry") : (void)0);
    }
    for (; carry && i < m; ++i) {
        carry += x[i];
        x[i] = carry & ((digit)(((digit)1 << 30) - 1));
        carry >>= 30;
        (__builtin_expect(!((carry & 1) == carry), 0) ? __assert_rtn(__func__, "longobject.c", 1465, "(carry & 1) == carry") : (void)0);
    }
    return carry;
}





static digit
v_isub(digit *x, Py_ssize_t m, digit *y, Py_ssize_t n)
{
    Py_ssize_t i;
    digit borrow = 0;

    (__builtin_expect(!(m >= n), 0) ? __assert_rtn(__func__, "longobject.c", 1480, "m >= n") : (void)0);
    for (i = 0; i < n; ++i) {
        borrow = x[i] - y[i] - borrow;
        x[i] = borrow & ((digit)(((digit)1 << 30) - 1));
        borrow >>= 30;
        borrow &= 1;
    }
    for (; borrow && i < m; ++i) {
        borrow = x[i] - borrow;
        x[i] = borrow & ((digit)(((digit)1 << 30) - 1));
        borrow >>= 30;
        borrow &= 1;
    }
    return borrow;
}




static digit
v_lshift(digit *z, digit *a, Py_ssize_t m, int d)
{
    Py_ssize_t i;
    digit carry = 0;

    (__builtin_expect(!(0 <= d && d < 30), 0) ? __assert_rtn(__func__, "longobject.c", 1505, "0 <= d && d < PyLong_SHIFT") : (void)0);
    for (i=0; i < m; i++) {
        twodigits acc = (twodigits)a[i] << d | carry;
        z[i] = (digit)acc & ((digit)(((digit)1 << 30) - 1));
        carry = (digit)(acc >> 30);
    }
    return carry;
}




static digit
v_rshift(digit *z, digit *a, Py_ssize_t m, int d)
{
    Py_ssize_t i;
    digit carry = 0;
    digit mask = ((digit)1 << d) - 1U;

    (__builtin_expect(!(0 <= d && d < 30), 0) ? __assert_rtn(__func__, "longobject.c", 1524, "0 <= d && d < PyLong_SHIFT") : (void)0);
    for (i=m; i-- > 0;) {
        twodigits acc = (twodigits)carry << 30 | a[i];
        carry = (digit)acc & mask;
        z[i] = (digit)(acc >> d);
    }
    return carry;
}







static digit
inplace_divrem1(digit *pout, digit *pin, Py_ssize_t size, digit n)
{
    twodigits rem = 0;

    (__builtin_expect(!(n > 0 && n <= ((digit)(((digit)1 << 30) - 1))), 0) ? __assert_rtn(__func__, "longobject.c", 1544, "n > 0 && n <= PyLong_MASK") : (void)0);
    pin += size;
    pout += size;
    while (--size >= 0) {
        digit hi;
        rem = (rem << 30) | *--pin;
        *--pout = hi = (digit)(rem / n);
        rem -= (twodigits)hi * n;
    }
    return (digit)rem;
}





static PyLongObject *
divrem1(PyLongObject *a, digit n, digit *prem)
{
    const Py_ssize_t size = (((((PyVarObject*)(a))->ob_size)) < 0 ? -((((PyVarObject*)(a))->ob_size)) : ((((PyVarObject*)(a))->ob_size)));
    PyLongObject *z;

    (__builtin_expect(!(n > 0 && n <= ((digit)(((digit)1 << 30) - 1))), 0) ? __assert_rtn(__func__, "longobject.c", 1566, "n > 0 && n <= PyLong_MASK") : (void)0);
    z = _PyLong_New(size);
    if (z == ((void *)0))
        return ((void *)0);
    *prem = inplace_divrem1(z->ob_digit, a->ob_digit, size, n);
    return long_normalize(z);
}





static int
long_to_decimal_string_internal(PyObject *aa,
                                PyObject **p_output,
                                _PyUnicodeWriter *writer)
{
    PyLongObject *scratch, *a;
    PyObject *str;
    Py_ssize_t size, strlen, size_a, i, j;
    digit *pout, *pin, rem, tenpow;
    int negative;
    enum PyUnicode_Kind kind;

    a = (PyLongObject *)aa;
    if (a == ((void *)0) || !((((((PyObject*)(a))->ob_type))->tp_flags & ((1L<<24))) != 0)) {
        _PyErr_BadInternalCall("longobject.c", 1592);
        return -1;
    }
    size_a = (((((PyVarObject*)(a))->ob_size)) < 0 ? -((((PyVarObject*)(a))->ob_size)) : ((((PyVarObject*)(a))->ob_size)));
    negative = (((PyVarObject*)(a))->ob_size) < 0;
# 1607 "longobject.c"
    if (size_a > ((Py_ssize_t)(((size_t)-1)>>1)) / 30) {
        PyErr_SetString(PyExc_OverflowError,
                        "long is too large to format");
        return -1;
    }

    size = 1 + size_a * 30 / (3 * 9);
    scratch = _PyLong_New(size);
    if (scratch == ((void *)0))
        return -1;




    pin = a->ob_digit;
    pout = scratch->ob_digit;
    size = 0;
    for (i = size_a; --i >= 0; ) {
        digit hi = pin[i];
        for (j = 0; j < size; j++) {
            twodigits z = (twodigits)pout[j] << 30 | hi;
            hi = (digit)(z / ((digit)1000000000));
            pout[j] = (digit)(z - (twodigits)hi *
                              ((digit)1000000000));
        }
        while (hi) {
            pout[size++] = hi % ((digit)1000000000);
            hi /= ((digit)1000000000);
        }

        do { if (PyErr_CheckSignals()) { do { if ( --((PyObject*)(scratch))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(scratch)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(scratch)))); } while (0); return -1; } } while(0);



    }


    if (size == 0)
        pout[size++] = 0;


    strlen = negative + 1 + (size - 1) * 9;
    tenpow = 10;
    rem = pout[size-1];
    while (rem >= tenpow) {
        tenpow *= 10;
        strlen++;
    }
    if (writer) {
        if (((('9') <= (writer)->maxchar && (strlen) <= (writer)->size - (writer)->pos) ? 0 : (((strlen) == 0) ? 0 : _PyUnicodeWriter_PrepareInternal((writer), (strlen), ('9')))) == -1) {
            do { if ( --((PyObject*)(scratch))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(scratch)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(scratch)))); } while (0);
            return -1;
        }
        kind = writer->kind;
        str = ((void *)0);
    }
    else {
        str = PyUnicode_New(strlen, '9');
        if (str == ((void *)0)) {
            do { if ( --((PyObject*)(scratch))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(scratch)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(scratch)))); } while (0);
            return -1;
        }
        kind = ((__builtin_expect(!(((((((PyObject*)(str))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1669, "PyUnicode_Check(str)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)str)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1669, "PyUnicode_IS_READY(str)") : (void)0), ((PyASCIIObject *)(str))->state.kind);
    }
# 1708 "longobject.c"
    if (kind == PyUnicode_1BYTE_KIND) {
        Py_UCS1 *p;
        do { if (writer) p = (Py_UCS1*)((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1710, "PyUnicode_Check(writer->buffer)") : (void)0), (((PyASCIIObject*)(writer->buffer))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1710, "PyUnicode_Check(writer->buffer)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)writer->buffer)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1710, "PyUnicode_IS_READY(writer->buffer)") : (void)0), ((PyASCIIObject*)writer->buffer)->state.ascii) ? ((void*)((PyASCIIObject*)(writer->buffer) + 1)) : ((void*)((PyCompactUnicodeObject*)(writer->buffer) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(writer->buffer))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1710, "((PyUnicodeObject*)(writer->buffer))->data.any") : (void)0), ((((PyUnicodeObject *)(writer->buffer))->data.any)))) + writer->pos + strlen; else p = (Py_UCS1*)((__builtin_expect(!(((((((PyObject*)(str))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1710, "PyUnicode_Check(str)") : (void)0), (((PyASCIIObject*)(str))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(str))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1710, "PyUnicode_Check(str)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)str)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1710, "PyUnicode_IS_READY(str)") : (void)0), ((PyASCIIObject*)str)->state.ascii) ? ((void*)((PyASCIIObject*)(str) + 1)) : ((void*)((PyCompactUnicodeObject*)(str) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(str))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1710, "((PyUnicodeObject*)(str))->data.any") : (void)0), ((((PyUnicodeObject *)(str))->data.any)))) + strlen; *p = '\0'; for (i=0; i < size - 1; i++) { rem = pout[i]; for (j = 0; j < 9; j++) { *--p = '0' + rem % 10; rem /= 10; } } rem = pout[i]; do { *--p = '0' + rem % 10; rem /= 10; } while (rem != 0); if (negative) *--p = '-'; if (writer) (__builtin_expect(!(p == ((Py_UCS1*)((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1710, "PyUnicode_Check(writer->buffer)") : (void)0), (((PyASCIIObject*)(writer->buffer))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1710, "PyUnicode_Check(writer->buffer)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)writer->buffer)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1710, "PyUnicode_IS_READY(writer->buffer)") : (void)0), ((PyASCIIObject*)writer->buffer)->state.ascii) ? ((void*)((PyASCIIObject*)(writer->buffer) + 1)) : ((void*)((PyCompactUnicodeObject*)(writer->buffer) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(writer->buffer))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1710, "((PyUnicodeObject*)(writer->buffer))->data.any") : (void)0), ((((PyUnicodeObject *)(writer->buffer))->data.any)))) + writer->pos)), 0) ? __assert_rtn(__func__, "longobject.c", 1710, "p == ((Py_UCS1*)PyUnicode_DATA(writer->buffer) + writer->pos)") : (void)0); else (__builtin_expect(!(p == (Py_UCS1*)((__builtin_expect(!(((((((PyObject*)(str))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1710, "PyUnicode_Check(str)") : (void)0), (((PyASCIIObject*)(str))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(str))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1710, "PyUnicode_Check(str)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)str)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1710, "PyUnicode_IS_READY(str)") : (void)0), ((PyASCIIObject*)str)->state.ascii) ? ((void*)((PyASCIIObject*)(str) + 1)) : ((void*)((PyCompactUnicodeObject*)(str) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(str))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1710, "((PyUnicodeObject*)(str))->data.any") : (void)0), ((((PyUnicodeObject *)(str))->data.any))))), 0) ? __assert_rtn(__func__, "longobject.c", 1710, "p == (Py_UCS1*)PyUnicode_DATA(str)") : (void)0); } while (0);
    }
    else if (kind == PyUnicode_2BYTE_KIND) {
        Py_UCS2 *p;
        do { if (writer) p = (Py_UCS2*)((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1714, "PyUnicode_Check(writer->buffer)") : (void)0), (((PyASCIIObject*)(writer->buffer))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1714, "PyUnicode_Check(writer->buffer)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)writer->buffer)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1714, "PyUnicode_IS_READY(writer->buffer)") : (void)0), ((PyASCIIObject*)writer->buffer)->state.ascii) ? ((void*)((PyASCIIObject*)(writer->buffer) + 1)) : ((void*)((PyCompactUnicodeObject*)(writer->buffer) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(writer->buffer))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1714, "((PyUnicodeObject*)(writer->buffer))->data.any") : (void)0), ((((PyUnicodeObject *)(writer->buffer))->data.any)))) + writer->pos + strlen; else p = (Py_UCS2*)((__builtin_expect(!(((((((PyObject*)(str))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1714, "PyUnicode_Check(str)") : (void)0), (((PyASCIIObject*)(str))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(str))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1714, "PyUnicode_Check(str)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)str)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1714, "PyUnicode_IS_READY(str)") : (void)0), ((PyASCIIObject*)str)->state.ascii) ? ((void*)((PyASCIIObject*)(str) + 1)) : ((void*)((PyCompactUnicodeObject*)(str) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(str))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1714, "((PyUnicodeObject*)(str))->data.any") : (void)0), ((((PyUnicodeObject *)(str))->data.any)))) + strlen; *p = '\0'; for (i=0; i < size - 1; i++) { rem = pout[i]; for (j = 0; j < 9; j++) { *--p = '0' + rem % 10; rem /= 10; } } rem = pout[i]; do { *--p = '0' + rem % 10; rem /= 10; } while (rem != 0); if (negative) *--p = '-'; if (writer) (__builtin_expect(!(p == ((Py_UCS2*)((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1714, "PyUnicode_Check(writer->buffer)") : (void)0), (((PyASCIIObject*)(writer->buffer))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1714, "PyUnicode_Check(writer->buffer)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)writer->buffer)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1714, "PyUnicode_IS_READY(writer->buffer)") : (void)0), ((PyASCIIObject*)writer->buffer)->state.ascii) ? ((void*)((PyASCIIObject*)(writer->buffer) + 1)) : ((void*)((PyCompactUnicodeObject*)(writer->buffer) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(writer->buffer))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1714, "((PyUnicodeObject*)(writer->buffer))->data.any") : (void)0), ((((PyUnicodeObject *)(writer->buffer))->data.any)))) + writer->pos)), 0) ? __assert_rtn(__func__, "longobject.c", 1714, "p == ((Py_UCS2*)PyUnicode_DATA(writer->buffer) + writer->pos)") : (void)0); else (__builtin_expect(!(p == (Py_UCS2*)((__builtin_expect(!(((((((PyObject*)(str))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1714, "PyUnicode_Check(str)") : (void)0), (((PyASCIIObject*)(str))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(str))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1714, "PyUnicode_Check(str)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)str)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1714, "PyUnicode_IS_READY(str)") : (void)0), ((PyASCIIObject*)str)->state.ascii) ? ((void*)((PyASCIIObject*)(str) + 1)) : ((void*)((PyCompactUnicodeObject*)(str) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(str))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1714, "((PyUnicodeObject*)(str))->data.any") : (void)0), ((((PyUnicodeObject *)(str))->data.any))))), 0) ? __assert_rtn(__func__, "longobject.c", 1714, "p == (Py_UCS2*)PyUnicode_DATA(str)") : (void)0); } while (0);
    }
    else {
        Py_UCS4 *p;
        (__builtin_expect(!(kind == PyUnicode_4BYTE_KIND), 0) ? __assert_rtn(__func__, "longobject.c", 1718, "kind == PyUnicode_4BYTE_KIND") : (void)0);
        do { if (writer) p = (Py_UCS4*)((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1719, "PyUnicode_Check(writer->buffer)") : (void)0), (((PyASCIIObject*)(writer->buffer))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1719, "PyUnicode_Check(writer->buffer)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)writer->buffer)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1719, "PyUnicode_IS_READY(writer->buffer)") : (void)0), ((PyASCIIObject*)writer->buffer)->state.ascii) ? ((void*)((PyASCIIObject*)(writer->buffer) + 1)) : ((void*)((PyCompactUnicodeObject*)(writer->buffer) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(writer->buffer))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1719, "((PyUnicodeObject*)(writer->buffer))->data.any") : (void)0), ((((PyUnicodeObject *)(writer->buffer))->data.any)))) + writer->pos + strlen; else p = (Py_UCS4*)((__builtin_expect(!(((((((PyObject*)(str))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1719, "PyUnicode_Check(str)") : (void)0), (((PyASCIIObject*)(str))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(str))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1719, "PyUnicode_Check(str)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)str)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1719, "PyUnicode_IS_READY(str)") : (void)0), ((PyASCIIObject*)str)->state.ascii) ? ((void*)((PyASCIIObject*)(str) + 1)) : ((void*)((PyCompactUnicodeObject*)(str) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(str))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1719, "((PyUnicodeObject*)(str))->data.any") : (void)0), ((((PyUnicodeObject *)(str))->data.any)))) + strlen; *p = '\0'; for (i=0; i < size - 1; i++) { rem = pout[i]; for (j = 0; j < 9; j++) { *--p = '0' + rem % 10; rem /= 10; } } rem = pout[i]; do { *--p = '0' + rem % 10; rem /= 10; } while (rem != 0); if (negative) *--p = '-'; if (writer) (__builtin_expect(!(p == ((Py_UCS4*)((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1719, "PyUnicode_Check(writer->buffer)") : (void)0), (((PyASCIIObject*)(writer->buffer))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1719, "PyUnicode_Check(writer->buffer)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)writer->buffer)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1719, "PyUnicode_IS_READY(writer->buffer)") : (void)0), ((PyASCIIObject*)writer->buffer)->state.ascii) ? ((void*)((PyASCIIObject*)(writer->buffer) + 1)) : ((void*)((PyCompactUnicodeObject*)(writer->buffer) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(writer->buffer))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1719, "((PyUnicodeObject*)(writer->buffer))->data.any") : (void)0), ((((PyUnicodeObject *)(writer->buffer))->data.any)))) + writer->pos)), 0) ? __assert_rtn(__func__, "longobject.c", 1719, "p == ((Py_UCS4*)PyUnicode_DATA(writer->buffer) + writer->pos)") : (void)0); else (__builtin_expect(!(p == (Py_UCS4*)((__builtin_expect(!(((((((PyObject*)(str))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1719, "PyUnicode_Check(str)") : (void)0), (((PyASCIIObject*)(str))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(str))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1719, "PyUnicode_Check(str)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)str)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1719, "PyUnicode_IS_READY(str)") : (void)0), ((PyASCIIObject*)str)->state.ascii) ? ((void*)((PyASCIIObject*)(str) + 1)) : ((void*)((PyCompactUnicodeObject*)(str) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(str))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1719, "((PyUnicodeObject*)(str))->data.any") : (void)0), ((((PyUnicodeObject *)(str))->data.any))))), 0) ? __assert_rtn(__func__, "longobject.c", 1719, "p == (Py_UCS4*)PyUnicode_DATA(str)") : (void)0); } while (0);
    }


    do { if ( --((PyObject*)(scratch))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(scratch)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(scratch)))); } while (0);
    if (writer) {
        writer->pos += strlen;
    }
    else {
        (__builtin_expect(!(_PyUnicode_CheckConsistency(str, 1)), 0) ? __assert_rtn(__func__, "longobject.c", 1728, "_PyUnicode_CheckConsistency(str, 1)") : (void)0);
        *p_output = (PyObject *)str;
    }
    return 0;
}

static PyObject *
long_to_decimal_string(PyObject *aa)
{
    PyObject *v;
    if (long_to_decimal_string_internal(aa, &v, ((void *)0)) == -1)
        return ((void *)0);
    return v;
}






static int
long_format_binary(PyObject *aa, int base, int alternate,
                   PyObject **p_output, _PyUnicodeWriter *writer)
{
    register PyLongObject *a = (PyLongObject *)aa;
    PyObject *v;
    Py_ssize_t sz;
    Py_ssize_t size_a;
    enum PyUnicode_Kind kind;
    int negative;
    int bits;

    (__builtin_expect(!(base == 2 || base == 8 || base == 16), 0) ? __assert_rtn(__func__, "longobject.c", 1760, "base == 2 || base == 8 || base == 16") : (void)0);
    if (a == ((void *)0) || !((((((PyObject*)(a))->ob_type))->tp_flags & ((1L<<24))) != 0)) {
        _PyErr_BadInternalCall("longobject.c", 1762);
        return -1;
    }
    size_a = (((((PyVarObject*)(a))->ob_size)) < 0 ? -((((PyVarObject*)(a))->ob_size)) : ((((PyVarObject*)(a))->ob_size)));
    negative = (((PyVarObject*)(a))->ob_size) < 0;


    switch (base) {
    case 16:
        bits = 4;
        break;
    case 8:
        bits = 3;
        break;
    case 2:
        bits = 1;
        break;
    default:
        (__builtin_expect(!(0), 0) ? __assert_rtn(__func__, "longobject.c", 1780, "0") : (void)0);
        bits = 0;
    }


    if (size_a == 0) {
        sz = 1;
    }
    else {
        Py_ssize_t size_a_in_bits;

        if (size_a > (((Py_ssize_t)(((size_t)-1)>>1)) - 3) / 30) {
            PyErr_SetString(PyExc_OverflowError,
                            "int is too large to format");
            return -1;
        }
        size_a_in_bits = (size_a - 1) * 30 +
                         bits_in_digit(a->ob_digit[size_a - 1]);

        sz = negative + (size_a_in_bits + (bits - 1)) / bits;
    }
    if (alternate) {

        sz += 2;
    }

    if (writer) {
        if (((('x') <= (writer)->maxchar && (sz) <= (writer)->size - (writer)->pos) ? 0 : (((sz) == 0) ? 0 : _PyUnicodeWriter_PrepareInternal((writer), (sz), ('x')))) == -1)
            return -1;
        kind = writer->kind;
        v = ((void *)0);
    }
    else {
        v = PyUnicode_New(sz, 'x');
        if (v == ((void *)0))
            return -1;
        kind = ((__builtin_expect(!(((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1816, "PyUnicode_Check(v)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)v)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1816, "PyUnicode_IS_READY(v)") : (void)0), ((PyASCIIObject *)(v))->state.kind);
    }
# 1866 "longobject.c"
    if (kind == PyUnicode_1BYTE_KIND) {
        Py_UCS1 *p;
        do { if (writer) p = (Py_UCS1*)((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1868, "PyUnicode_Check(writer->buffer)") : (void)0), (((PyASCIIObject*)(writer->buffer))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1868, "PyUnicode_Check(writer->buffer)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)writer->buffer)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1868, "PyUnicode_IS_READY(writer->buffer)") : (void)0), ((PyASCIIObject*)writer->buffer)->state.ascii) ? ((void*)((PyASCIIObject*)(writer->buffer) + 1)) : ((void*)((PyCompactUnicodeObject*)(writer->buffer) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(writer->buffer))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1868, "((PyUnicodeObject*)(writer->buffer))->data.any") : (void)0), ((((PyUnicodeObject *)(writer->buffer))->data.any)))) + writer->pos + sz; else p = (Py_UCS1*)((__builtin_expect(!(((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1868, "PyUnicode_Check(v)") : (void)0), (((PyASCIIObject*)(v))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1868, "PyUnicode_Check(v)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)v)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1868, "PyUnicode_IS_READY(v)") : (void)0), ((PyASCIIObject*)v)->state.ascii) ? ((void*)((PyASCIIObject*)(v) + 1)) : ((void*)((PyCompactUnicodeObject*)(v) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(v))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1868, "((PyUnicodeObject*)(v))->data.any") : (void)0), ((((PyUnicodeObject *)(v))->data.any)))) + sz; if (size_a == 0) { *--p = '0'; } else { twodigits accum = 0; int accumbits = 0; Py_ssize_t i; for (i = 0; i < size_a; ++i) { accum |= (twodigits)a->ob_digit[i] << accumbits; accumbits += 30; (__builtin_expect(!(accumbits >= bits), 0) ? __assert_rtn(__func__, "longobject.c", 1868, "accumbits >= bits") : (void)0); do { char cdigit; cdigit = (char)(accum & (base - 1)); cdigit += (cdigit < 10) ? '0' : 'a'-10; *--p = cdigit; accumbits -= bits; accum >>= bits; } while (i < size_a-1 ? accumbits >= bits : accum > 0); } } if (alternate) { if (base == 16) *--p = 'x'; else if (base == 8) *--p = 'o'; else *--p = 'b'; *--p = '0'; } if (negative) *--p = '-'; if (writer) (__builtin_expect(!(p == ((Py_UCS1*)((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1868, "PyUnicode_Check(writer->buffer)") : (void)0), (((PyASCIIObject*)(writer->buffer))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1868, "PyUnicode_Check(writer->buffer)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)writer->buffer)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1868, "PyUnicode_IS_READY(writer->buffer)") : (void)0), ((PyASCIIObject*)writer->buffer)->state.ascii) ? ((void*)((PyASCIIObject*)(writer->buffer) + 1)) : ((void*)((PyCompactUnicodeObject*)(writer->buffer) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(writer->buffer))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1868, "((PyUnicodeObject*)(writer->buffer))->data.any") : (void)0), ((((PyUnicodeObject *)(writer->buffer))->data.any)))) + writer->pos)), 0) ? __assert_rtn(__func__, "longobject.c", 1868, "p == ((Py_UCS1*)PyUnicode_DATA(writer->buffer) + writer->pos)") : (void)0); else (__builtin_expect(!(p == (Py_UCS1*)((__builtin_expect(!(((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1868, "PyUnicode_Check(v)") : (void)0), (((PyASCIIObject*)(v))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1868, "PyUnicode_Check(v)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)v)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1868, "PyUnicode_IS_READY(v)") : (void)0), ((PyASCIIObject*)v)->state.ascii) ? ((void*)((PyASCIIObject*)(v) + 1)) : ((void*)((PyCompactUnicodeObject*)(v) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(v))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1868, "((PyUnicodeObject*)(v))->data.any") : (void)0), ((((PyUnicodeObject *)(v))->data.any))))), 0) ? __assert_rtn(__func__, "longobject.c", 1868, "p == (Py_UCS1*)PyUnicode_DATA(v)") : (void)0); } while (0);
    }
    else if (kind == PyUnicode_2BYTE_KIND) {
        Py_UCS2 *p;
        do { if (writer) p = (Py_UCS2*)((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1872, "PyUnicode_Check(writer->buffer)") : (void)0), (((PyASCIIObject*)(writer->buffer))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1872, "PyUnicode_Check(writer->buffer)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)writer->buffer)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1872, "PyUnicode_IS_READY(writer->buffer)") : (void)0), ((PyASCIIObject*)writer->buffer)->state.ascii) ? ((void*)((PyASCIIObject*)(writer->buffer) + 1)) : ((void*)((PyCompactUnicodeObject*)(writer->buffer) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(writer->buffer))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1872, "((PyUnicodeObject*)(writer->buffer))->data.any") : (void)0), ((((PyUnicodeObject *)(writer->buffer))->data.any)))) + writer->pos + sz; else p = (Py_UCS2*)((__builtin_expect(!(((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1872, "PyUnicode_Check(v)") : (void)0), (((PyASCIIObject*)(v))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1872, "PyUnicode_Check(v)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)v)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1872, "PyUnicode_IS_READY(v)") : (void)0), ((PyASCIIObject*)v)->state.ascii) ? ((void*)((PyASCIIObject*)(v) + 1)) : ((void*)((PyCompactUnicodeObject*)(v) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(v))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1872, "((PyUnicodeObject*)(v))->data.any") : (void)0), ((((PyUnicodeObject *)(v))->data.any)))) + sz; if (size_a == 0) { *--p = '0'; } else { twodigits accum = 0; int accumbits = 0; Py_ssize_t i; for (i = 0; i < size_a; ++i) { accum |= (twodigits)a->ob_digit[i] << accumbits; accumbits += 30; (__builtin_expect(!(accumbits >= bits), 0) ? __assert_rtn(__func__, "longobject.c", 1872, "accumbits >= bits") : (void)0); do { char cdigit; cdigit = (char)(accum & (base - 1)); cdigit += (cdigit < 10) ? '0' : 'a'-10; *--p = cdigit; accumbits -= bits; accum >>= bits; } while (i < size_a-1 ? accumbits >= bits : accum > 0); } } if (alternate) { if (base == 16) *--p = 'x'; else if (base == 8) *--p = 'o'; else *--p = 'b'; *--p = '0'; } if (negative) *--p = '-'; if (writer) (__builtin_expect(!(p == ((Py_UCS2*)((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1872, "PyUnicode_Check(writer->buffer)") : (void)0), (((PyASCIIObject*)(writer->buffer))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1872, "PyUnicode_Check(writer->buffer)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)writer->buffer)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1872, "PyUnicode_IS_READY(writer->buffer)") : (void)0), ((PyASCIIObject*)writer->buffer)->state.ascii) ? ((void*)((PyASCIIObject*)(writer->buffer) + 1)) : ((void*)((PyCompactUnicodeObject*)(writer->buffer) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(writer->buffer))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1872, "((PyUnicodeObject*)(writer->buffer))->data.any") : (void)0), ((((PyUnicodeObject *)(writer->buffer))->data.any)))) + writer->pos)), 0) ? __assert_rtn(__func__, "longobject.c", 1872, "p == ((Py_UCS2*)PyUnicode_DATA(writer->buffer) + writer->pos)") : (void)0); else (__builtin_expect(!(p == (Py_UCS2*)((__builtin_expect(!(((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1872, "PyUnicode_Check(v)") : (void)0), (((PyASCIIObject*)(v))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1872, "PyUnicode_Check(v)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)v)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1872, "PyUnicode_IS_READY(v)") : (void)0), ((PyASCIIObject*)v)->state.ascii) ? ((void*)((PyASCIIObject*)(v) + 1)) : ((void*)((PyCompactUnicodeObject*)(v) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(v))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1872, "((PyUnicodeObject*)(v))->data.any") : (void)0), ((((PyUnicodeObject *)(v))->data.any))))), 0) ? __assert_rtn(__func__, "longobject.c", 1872, "p == (Py_UCS2*)PyUnicode_DATA(v)") : (void)0); } while (0);
    }
    else {
        Py_UCS4 *p;
        (__builtin_expect(!(kind == PyUnicode_4BYTE_KIND), 0) ? __assert_rtn(__func__, "longobject.c", 1876, "kind == PyUnicode_4BYTE_KIND") : (void)0);
        do { if (writer) p = (Py_UCS4*)((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1877, "PyUnicode_Check(writer->buffer)") : (void)0), (((PyASCIIObject*)(writer->buffer))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1877, "PyUnicode_Check(writer->buffer)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)writer->buffer)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1877, "PyUnicode_IS_READY(writer->buffer)") : (void)0), ((PyASCIIObject*)writer->buffer)->state.ascii) ? ((void*)((PyASCIIObject*)(writer->buffer) + 1)) : ((void*)((PyCompactUnicodeObject*)(writer->buffer) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(writer->buffer))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1877, "((PyUnicodeObject*)(writer->buffer))->data.any") : (void)0), ((((PyUnicodeObject *)(writer->buffer))->data.any)))) + writer->pos + sz; else p = (Py_UCS4*)((__builtin_expect(!(((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1877, "PyUnicode_Check(v)") : (void)0), (((PyASCIIObject*)(v))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1877, "PyUnicode_Check(v)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)v)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1877, "PyUnicode_IS_READY(v)") : (void)0), ((PyASCIIObject*)v)->state.ascii) ? ((void*)((PyASCIIObject*)(v) + 1)) : ((void*)((PyCompactUnicodeObject*)(v) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(v))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1877, "((PyUnicodeObject*)(v))->data.any") : (void)0), ((((PyUnicodeObject *)(v))->data.any)))) + sz; if (size_a == 0) { *--p = '0'; } else { twodigits accum = 0; int accumbits = 0; Py_ssize_t i; for (i = 0; i < size_a; ++i) { accum |= (twodigits)a->ob_digit[i] << accumbits; accumbits += 30; (__builtin_expect(!(accumbits >= bits), 0) ? __assert_rtn(__func__, "longobject.c", 1877, "accumbits >= bits") : (void)0); do { char cdigit; cdigit = (char)(accum & (base - 1)); cdigit += (cdigit < 10) ? '0' : 'a'-10; *--p = cdigit; accumbits -= bits; accum >>= bits; } while (i < size_a-1 ? accumbits >= bits : accum > 0); } } if (alternate) { if (base == 16) *--p = 'x'; else if (base == 8) *--p = 'o'; else *--p = 'b'; *--p = '0'; } if (negative) *--p = '-'; if (writer) (__builtin_expect(!(p == ((Py_UCS4*)((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1877, "PyUnicode_Check(writer->buffer)") : (void)0), (((PyASCIIObject*)(writer->buffer))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(writer->buffer))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1877, "PyUnicode_Check(writer->buffer)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)writer->buffer)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1877, "PyUnicode_IS_READY(writer->buffer)") : (void)0), ((PyASCIIObject*)writer->buffer)->state.ascii) ? ((void*)((PyASCIIObject*)(writer->buffer) + 1)) : ((void*)((PyCompactUnicodeObject*)(writer->buffer) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(writer->buffer))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1877, "((PyUnicodeObject*)(writer->buffer))->data.any") : (void)0), ((((PyUnicodeObject *)(writer->buffer))->data.any)))) + writer->pos)), 0) ? __assert_rtn(__func__, "longobject.c", 1877, "p == ((Py_UCS4*)PyUnicode_DATA(writer->buffer) + writer->pos)") : (void)0); else (__builtin_expect(!(p == (Py_UCS4*)((__builtin_expect(!(((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1877, "PyUnicode_Check(v)") : (void)0), (((PyASCIIObject*)(v))->state.compact) ? (((__builtin_expect(!(((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 1877, "PyUnicode_Check(v)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)v)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 1877, "PyUnicode_IS_READY(v)") : (void)0), ((PyASCIIObject*)v)->state.ascii) ? ((void*)((PyASCIIObject*)(v) + 1)) : ((void*)((PyCompactUnicodeObject*)(v) + 1))) : ((__builtin_expect(!(((PyUnicodeObject*)(v))->data.any), 0) ? __assert_rtn(__func__, "longobject.c", 1877, "((PyUnicodeObject*)(v))->data.any") : (void)0), ((((PyUnicodeObject *)(v))->data.any))))), 0) ? __assert_rtn(__func__, "longobject.c", 1877, "p == (Py_UCS4*)PyUnicode_DATA(v)") : (void)0); } while (0);
    }


    if (writer) {
        writer->pos += sz;
    }
    else {
        (__builtin_expect(!(_PyUnicode_CheckConsistency(v, 1)), 0) ? __assert_rtn(__func__, "longobject.c", 1885, "_PyUnicode_CheckConsistency(v, 1)") : (void)0);
        *p_output = v;
    }
    return 0;
}

PyObject *
_PyLong_Format(PyObject *obj, int base)
{
    PyObject *str;
    int err;
    if (base == 10)
        err = long_to_decimal_string_internal(obj, &str, ((void *)0));
    else
        err = long_format_binary(obj, base, 1, &str, ((void *)0));
    if (err == -1)
        return ((void *)0);
    return str;
}

int
_PyLong_FormatWriter(_PyUnicodeWriter *writer,
                     PyObject *obj,
                     int base, int alternate)
{
    if (base == 10)
        return long_to_decimal_string_internal(obj, ((void *)0), writer);
    else
        return long_format_binary(obj, base, alternate, ((void *)0), writer);
}
# 1923 "longobject.c"
unsigned char _PyLong_DigitValue[256] = {
    37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
    37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
    37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 37, 37, 37, 37, 37, 37,
    37, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
    25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 37, 37, 37, 37, 37,
    37, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
    25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 37, 37, 37, 37, 37,
    37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
    37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
    37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
    37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
    37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
    37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
    37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
    37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37,
};







static PyLongObject *
long_from_binary_base(char **str, int base)
{
    char *p = *str;
    char *start = p;
    int bits_per_char;
    Py_ssize_t n;
    PyLongObject *z;
    twodigits accum;
    int bits_in_accum;
    digit *pdigit;

    (__builtin_expect(!(base >= 2 && base <= 32 && (base & (base - 1)) == 0), 0) ? __assert_rtn(__func__, "longobject.c", 1960, "base >= 2 && base <= 32 && (base & (base - 1)) == 0") : (void)0);
    n = base;
    for (bits_per_char = -1; n; ++bits_per_char)
        n >>= 1;

    while (_PyLong_DigitValue[((unsigned char)((*p) & 0xff))] < base)
        ++p;
    *str = p;

    n = (p - start) * bits_per_char + 30 - 1;
    if (n / bits_per_char < p - start) {
        PyErr_SetString(PyExc_ValueError,
                        "int string too large to convert");
        return ((void *)0);
    }
    n = n / 30;
    z = _PyLong_New(n);
    if (z == ((void *)0))
        return ((void *)0);



    accum = 0;
    bits_in_accum = 0;
    pdigit = z->ob_digit;
    while (--p >= start) {
        int k = (int)_PyLong_DigitValue[((unsigned char)((*p) & 0xff))];
        (__builtin_expect(!(k >= 0 && k < base), 0) ? __assert_rtn(__func__, "longobject.c", 1987, "k >= 0 && k < base") : (void)0);
        accum |= (twodigits)k << bits_in_accum;
        bits_in_accum += bits_per_char;
        if (bits_in_accum >= 30) {
            *pdigit++ = (digit)(accum & ((digit)(((digit)1 << 30) - 1)));
            (__builtin_expect(!(pdigit - z->ob_digit <= n), 0) ? __assert_rtn(__func__, "longobject.c", 1992, "pdigit - z->ob_digit <= n") : (void)0);
            accum >>= 30;
            bits_in_accum -= 30;
            (__builtin_expect(!(bits_in_accum < 30), 0) ? __assert_rtn(__func__, "longobject.c", 1995, "bits_in_accum < PyLong_SHIFT") : (void)0);
        }
    }
    if (bits_in_accum) {
        (__builtin_expect(!(bits_in_accum <= 30), 0) ? __assert_rtn(__func__, "longobject.c", 1999, "bits_in_accum <= PyLong_SHIFT") : (void)0);
        *pdigit++ = (digit)accum;
        (__builtin_expect(!(pdigit - z->ob_digit <= n), 0) ? __assert_rtn(__func__, "longobject.c", 2001, "pdigit - z->ob_digit <= n") : (void)0);
    }
    while (pdigit - z->ob_digit < n)
        *pdigit++ = 0;
    return long_normalize(z);
}

PyObject *
PyLong_FromString(char *str, char **pend, int base)
{
    int sign = 1, error_if_nonzero = 0;
    char *start, *orig_str = str;
    PyLongObject *z = ((void *)0);
    PyObject *strobj;
    Py_ssize_t slen;

    if ((base != 0 && base < 2) || base > 36) {
        PyErr_SetString(PyExc_ValueError,
                        "int() arg 2 must be >= 2 and <= 36");
        return ((void *)0);
    }
    while (*str != '\0' && (_Py_ctype_table[((unsigned char)((((unsigned char)((*str) & 0xff))) & 0xff))] & 0x08))
        str++;
    if (*str == '+')
        ++str;
    else if (*str == '-') {
        ++str;
        sign = -1;
    }
    if (base == 0) {
        if (str[0] != '0')
            base = 10;
        else if (str[1] == 'x' || str[1] == 'X')
            base = 16;
        else if (str[1] == 'o' || str[1] == 'O')
            base = 8;
        else if (str[1] == 'b' || str[1] == 'B')
            base = 2;
        else {


            error_if_nonzero = 1;
            base = 10;
        }
    }
    if (str[0] == '0' &&
        ((base == 16 && (str[1] == 'x' || str[1] == 'X')) ||
         (base == 8 && (str[1] == 'o' || str[1] == 'O')) ||
         (base == 2 && (str[1] == 'b' || str[1] == 'B'))))
        str += 2;

    start = str;
    if ((base & (base - 1)) == 0)
        z = long_from_binary_base(&str, base);
    else {
# 2141 "longobject.c"
        register twodigits c;
        Py_ssize_t size_z;
        int i;
        int convwidth;
        twodigits convmultmax, convmult;
        digit *pz, *pzstop;
        char* scan;

        static double log_base_BASE[37] = {0.0e0,};
        static int convwidth_base[37] = {0,};
        static twodigits convmultmax_base[37] = {0,};

        if (log_base_BASE[base] == 0.0) {
            twodigits convmax = base;
            int i = 1;

            log_base_BASE[base] = (log((double)base) /
                                   log((double)((digit)1 << 30)));
            for (;;) {
                twodigits next = convmax * base;
                if (next > ((digit)1 << 30))
                    break;
                convmax = next;
                ++i;
            }
            convmultmax_base[base] = convmax;
            (__builtin_expect(!(i > 0), 0) ? __assert_rtn(__func__, "longobject.c", 2167, "i > 0") : (void)0);
            convwidth_base[base] = i;
        }


        scan = str;
        while (_PyLong_DigitValue[((unsigned char)((*scan) & 0xff))] < base)
            ++scan;






        size_z = (Py_ssize_t)((scan - str) * log_base_BASE[base]) + 1;


        (__builtin_expect(!(size_z > 0), 0) ? __assert_rtn(__func__, "longobject.c", 2184, "size_z > 0") : (void)0);
        z = _PyLong_New(size_z);
        if (z == ((void *)0))
            return ((void *)0);
        (((PyVarObject*)(z))->ob_size) = 0;




        convwidth = convwidth_base[base];
        convmultmax = convmultmax_base[base];


        while (str < scan) {

            c = (digit)_PyLong_DigitValue[((unsigned char)((*str++) & 0xff))];
            for (i = 1; i < convwidth && str != scan; ++i, ++str) {
                c = (twodigits)(c * base +
                                (int)_PyLong_DigitValue[((unsigned char)((*str) & 0xff))]);
                (__builtin_expect(!(c < ((digit)1 << 30)), 0) ? __assert_rtn(__func__, "longobject.c", 2203, "c < PyLong_BASE") : (void)0);
            }

            convmult = convmultmax;



            if (i != convwidth) {
                convmult = base;
                for ( ; i > 1; --i)
                    convmult *= base;
            }


            pz = z->ob_digit;
            pzstop = pz + (((PyVarObject*)(z))->ob_size);
            for (; pz < pzstop; ++pz) {
                c += (twodigits)*pz * convmult;
                *pz = (digit)(c & ((digit)(((digit)1 << 30) - 1)));
                c >>= 30;
            }

            if (c) {
                (__builtin_expect(!(c < ((digit)1 << 30)), 0) ? __assert_rtn(__func__, "longobject.c", 2226, "c < PyLong_BASE") : (void)0);
                if ((((PyVarObject*)(z))->ob_size) < size_z) {
                    *pz = (digit)c;
                    ++(((PyVarObject*)(z))->ob_size);
                }
                else {
                    PyLongObject *tmp;

                    (__builtin_expect(!((((PyVarObject*)(z))->ob_size) == size_z), 0) ? __assert_rtn(__func__, "longobject.c", 2234, "Py_SIZE(z) == size_z") : (void)0);
                    tmp = _PyLong_New(size_z + 1);
                    if (tmp == ((void *)0)) {
                        do { if ( --((PyObject*)(z))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(z)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(z)))); } while (0);
                        return ((void *)0);
                    }
                    ((__builtin_object_size (tmp->ob_digit, 0) != (size_t) -1) ? __builtin___memcpy_chk (tmp->ob_digit, z->ob_digit, sizeof(digit) * size_z, __builtin_object_size (tmp->ob_digit, 0)) : __inline_memcpy_chk (tmp->ob_digit, z->ob_digit, sizeof(digit) * size_z));


                    do { if ( --((PyObject*)(z))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(z)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(z)))); } while (0);
                    z = tmp;
                    z->ob_digit[size_z] = (digit)c;
                    ++size_z;
                }
            }
        }
    }
    if (z == ((void *)0))
        return ((void *)0);
    if (error_if_nonzero) {


        base = 0;
        if ((((PyVarObject*)(z))->ob_size) != 0)
            goto onError;


    }
    if (str == start)
        goto onError;
    if (sign < 0)
        (((PyVarObject*)(z))->ob_size) = -((((PyVarObject*)(z))->ob_size));
    while (*str && (_Py_ctype_table[((unsigned char)((((unsigned char)((*str) & 0xff))) & 0xff))] & 0x08))
        str++;
    if (*str != '\0')
        goto onError;
    if (pend)
        *pend = str;
    long_normalize(z);
    return (PyObject *) maybe_small_long(z);

  onError:
    do { if ((z) == ((void *)0)) ; else do { if ( --((PyObject*)(z))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(z)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(z)))); } while (0); } while (0);
    slen = strlen(orig_str) < 200 ? strlen(orig_str) : 200;
    strobj = PyUnicode_FromStringAndSize(orig_str, slen);
    if (strobj == ((void *)0))
        return ((void *)0);
    PyErr_Format(PyExc_ValueError,
                 "invalid literal for int() with base %d: %R",
                 base, strobj);
    do { if ( --((PyObject*)(strobj))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(strobj)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(strobj)))); } while (0);
    return ((void *)0);
}

PyObject *
PyLong_FromUnicode(Py_UNICODE *u, Py_ssize_t length, int base)
{
    PyObject *v, *unicode = PyUnicode_FromUnicode(u, length);
    if (unicode == ((void *)0))
        return ((void *)0);
    v = PyLong_FromUnicodeObject(unicode, base);
    do { if ( --((PyObject*)(unicode))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(unicode)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(unicode)))); } while (0);
    return v;
}

PyObject *
PyLong_FromUnicodeObject(PyObject *u, int base)
{
    PyObject *result;
    PyObject *asciidig;
    char *buffer, *end;
    Py_ssize_t buflen;

    asciidig = _PyUnicode_TransformDecimalAndSpaceToASCII(u);
    if (asciidig == ((void *)0))
        return ((void *)0);
    buffer = PyUnicode_AsUTF8AndSize(asciidig, &buflen);
    if (buffer == ((void *)0)) {
        do { if ( --((PyObject*)(asciidig))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(asciidig)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(asciidig)))); } while (0);
        return ((void *)0);
    }
    result = PyLong_FromString(buffer, &end, base);
    if (result != ((void *)0) && end != buffer + buflen) {
        PyErr_SetString(PyExc_ValueError,
                        "null byte in argument for int()");
        do { if ( --((PyObject*)(result))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(result)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(result)))); } while (0);
        result = ((void *)0);
    }
    do { if ( --((PyObject*)(asciidig))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(asciidig)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(asciidig)))); } while (0);
    return result;
}


static PyLongObject *x_divrem
    (PyLongObject *, PyLongObject *, PyLongObject **);
static PyObject *long_long(PyObject *v);



static int
long_divrem(PyLongObject *a, PyLongObject *b,
            PyLongObject **pdiv, PyLongObject **prem)
{
    Py_ssize_t size_a = (((((PyVarObject*)(a))->ob_size)) < 0 ? -((((PyVarObject*)(a))->ob_size)) : ((((PyVarObject*)(a))->ob_size))), size_b = (((((PyVarObject*)(b))->ob_size)) < 0 ? -((((PyVarObject*)(b))->ob_size)) : ((((PyVarObject*)(b))->ob_size)));
    PyLongObject *z;

    if (size_b == 0) {
        PyErr_SetString(PyExc_ZeroDivisionError,
                        "integer division or modulo by zero");
        return -1;
    }
    if (size_a < size_b ||
        (size_a == size_b &&
         a->ob_digit[size_a-1] < b->ob_digit[size_b-1])) {

        *pdiv = (PyLongObject*)PyLong_FromLong(0);
        if (*pdiv == ((void *)0))
            return -1;
        ( ((PyObject*)(a))->ob_refcnt++);
        *prem = (PyLongObject *) a;
        return 0;
    }
    if (size_b == 1) {
        digit rem = 0;
        z = divrem1(a, b->ob_digit[0], &rem);
        if (z == ((void *)0))
            return -1;
        *prem = (PyLongObject *) PyLong_FromLong((long)rem);
        if (*prem == ((void *)0)) {
            do { if ( --((PyObject*)(z))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(z)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(z)))); } while (0);
            return -1;
        }
    }
    else {
        z = x_divrem(a, b, prem);
        if (z == ((void *)0))
            return -1;
    }




    if (((((PyVarObject*)(a))->ob_size) < 0) != ((((PyVarObject*)(b))->ob_size) < 0))
        do if ((((PyObject*)(z))->ob_refcnt) == 1) (((PyVarObject*)(z))->ob_size) = -(((PyVarObject*)(z))->ob_size); else { PyObject* tmp=PyLong_FromLong(-((((PyVarObject*)(z))->ob_size) < 0 ? -(sdigit)(z)->ob_digit[0] : ((((PyVarObject*)(z))->ob_size) == 0 ? (sdigit)0 : (sdigit)(z)->ob_digit[0]))); do { if ( --((PyObject*)(z))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(z)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(z)))); } while (0); (z) = (PyLongObject*)tmp; } while(0);
    if ((((PyVarObject*)(a))->ob_size) < 0 && (((PyVarObject*)(*prem))->ob_size) != 0)
        do if ((((PyObject*)(*prem))->ob_refcnt) == 1) (((PyVarObject*)(*prem))->ob_size) = -(((PyVarObject*)(*prem))->ob_size); else { PyObject* tmp=PyLong_FromLong(-((((PyVarObject*)(*prem))->ob_size) < 0 ? -(sdigit)(*prem)->ob_digit[0] : ((((PyVarObject*)(*prem))->ob_size) == 0 ? (sdigit)0 : (sdigit)(*prem)->ob_digit[0]))); do { if ( --((PyObject*)(*prem))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(*prem)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(*prem)))); } while (0); (*prem) = (PyLongObject*)tmp; } while(0);
    *pdiv = maybe_small_long(z);
    return 0;
}




static PyLongObject *
x_divrem(PyLongObject *v1, PyLongObject *w1, PyLongObject **prem)
{
    PyLongObject *v, *w, *a;
    Py_ssize_t i, k, size_v, size_w;
    int d;
    digit wm1, wm2, carry, q, r, vtop, *v0, *vk, *w0, *ak;
    twodigits vv;
    sdigit zhi;
    stwodigits z;
# 2405 "longobject.c"
    size_v = (((((PyVarObject*)(v1))->ob_size)) < 0 ? -((((PyVarObject*)(v1))->ob_size)) : ((((PyVarObject*)(v1))->ob_size)));
    size_w = (((((PyVarObject*)(w1))->ob_size)) < 0 ? -((((PyVarObject*)(w1))->ob_size)) : ((((PyVarObject*)(w1))->ob_size)));
    (__builtin_expect(!(size_v >= size_w && size_w >= 2), 0) ? __assert_rtn(__func__, "longobject.c", 2407, "size_v >= size_w && size_w >= 2") : (void)0);
    v = _PyLong_New(size_v+1);
    if (v == ((void *)0)) {
        *prem = ((void *)0);
        return ((void *)0);
    }
    w = _PyLong_New(size_w);
    if (w == ((void *)0)) {
        do { if ( --((PyObject*)(v))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(v)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(v)))); } while (0);
        *prem = ((void *)0);
        return ((void *)0);
    }



    d = 30 - bits_in_digit(w1->ob_digit[size_w-1]);
    carry = v_lshift(w->ob_digit, w1->ob_digit, size_w, d);
    (__builtin_expect(!(carry == 0), 0) ? __assert_rtn(__func__, "longobject.c", 2424, "carry == 0") : (void)0);
    carry = v_lshift(v->ob_digit, v1->ob_digit, size_v, d);
    if (carry != 0 || v->ob_digit[size_v-1] >= w->ob_digit[size_w-1]) {
        v->ob_digit[size_v] = carry;
        size_v++;
    }



    k = size_v - size_w;
    (__builtin_expect(!(k >= 0), 0) ? __assert_rtn(__func__, "longobject.c", 2434, "k >= 0") : (void)0);
    a = _PyLong_New(k);
    if (a == ((void *)0)) {
        do { if ( --((PyObject*)(w))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(w)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(w)))); } while (0);
        do { if ( --((PyObject*)(v))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(v)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(v)))); } while (0);
        *prem = ((void *)0);
        return ((void *)0);
    }
    v0 = v->ob_digit;
    w0 = w->ob_digit;
    wm1 = w0[size_w-1];
    wm2 = w0[size_w-2];
    for (vk = v0+k, ak = a->ob_digit + k; vk-- > v0;) {



        do { if (PyErr_CheckSignals()) { do { if ( --((PyObject*)(a))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(a)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(a)))); } while (0); do { if ( --((PyObject*)(w))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(w)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(w)))); } while (0); do { if ( --((PyObject*)(v))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(v)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(v)))); } while (0); *prem = ((void *)0); return ((void *)0); } } while(0);
# 2459 "longobject.c"
        vtop = vk[size_w];
        (__builtin_expect(!(vtop <= wm1), 0) ? __assert_rtn(__func__, "longobject.c", 2460, "vtop <= wm1") : (void)0);
        vv = ((twodigits)vtop << 30) | vk[size_w-1];
        q = (digit)(vv / wm1);
        r = (digit)(vv - (twodigits)wm1 * q);
        while ((twodigits)wm2 * q > (((twodigits)r << 30)
                                     | vk[size_w-2])) {
            --q;
            r += wm1;
            if (r >= ((digit)1 << 30))
                break;
        }
        (__builtin_expect(!(q <= ((digit)1 << 30)), 0) ? __assert_rtn(__func__, "longobject.c", 2471, "q <= PyLong_BASE") : (void)0);


        zhi = 0;
        for (i = 0; i < size_w; ++i) {


            z = (sdigit)vk[i] + zhi -
                (stwodigits)q * (stwodigits)w0[i];
            vk[i] = (digit)z & ((digit)(((digit)1 << 30) - 1));
            zhi = (sdigit)((z) >> (30));

        }


        (__builtin_expect(!((sdigit)vtop + zhi == -1 || (sdigit)vtop + zhi == 0), 0) ? __assert_rtn(__func__, "longobject.c", 2486, "(sdigit)vtop + zhi == -1 || (sdigit)vtop + zhi == 0") : (void)0);
        if ((sdigit)vtop + zhi < 0) {
            carry = 0;
            for (i = 0; i < size_w; ++i) {
                carry += vk[i] + w0[i];
                vk[i] = carry & ((digit)(((digit)1 << 30) - 1));
                carry >>= 30;
            }
            --q;
        }


        (__builtin_expect(!(q < ((digit)1 << 30)), 0) ? __assert_rtn(__func__, "longobject.c", 2498, "q < PyLong_BASE") : (void)0);
        *--ak = q;
    }


    carry = v_rshift(w0, v0, size_w, d);
    (__builtin_expect(!(carry==0), 0) ? __assert_rtn(__func__, "longobject.c", 2504, "carry==0") : (void)0);
    do { if ( --((PyObject*)(v))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(v)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(v)))); } while (0);

    *prem = long_normalize(w);
    return long_normalize(a);
}
# 2525 "longobject.c"
double
_PyLong_Frexp(PyLongObject *a, Py_ssize_t *e)
{
    Py_ssize_t a_size, a_bits, shift_digits, shift_bits, x_size;

    digit rem, x_digits[2 + (53 + 1) / 30];
    double dx;



    static const int half_even_correction[8] = {0, -1, -2, 1, 0, -1, 2, 1};

    a_size = (((((PyVarObject*)(a))->ob_size)) < 0 ? -((((PyVarObject*)(a))->ob_size)) : ((((PyVarObject*)(a))->ob_size)));
    if (a_size == 0) {

        *e = 0;
        return 0.0;
    }
    a_bits = bits_in_digit(a->ob_digit[a_size-1]);


    if (a_size >= (((Py_ssize_t)(((size_t)-1)>>1)) - 1) / 30 + 1 &&
        (a_size > (((Py_ssize_t)(((size_t)-1)>>1)) - 1) / 30 + 1 ||
         a_bits > (((Py_ssize_t)(((size_t)-1)>>1)) - 1) % 30 + 1))
        goto overflow;
    a_bits = (a_size - 1) * 30 + a_bits;
# 2577 "longobject.c"
    if (a_bits <= 53 + 2) {
        shift_digits = (53 + 2 - a_bits) / 30;
        shift_bits = (53 + 2 - a_bits) % 30;
        x_size = 0;
        while (x_size < shift_digits)
            x_digits[x_size++] = 0;
        rem = v_lshift(x_digits + x_size, a->ob_digit, a_size,
                       (int)shift_bits);
        x_size += a_size;
        x_digits[x_size++] = rem;
    }
    else {
        shift_digits = (a_bits - 53 - 2) / 30;
        shift_bits = (a_bits - 53 - 2) % 30;
        rem = v_rshift(x_digits, a->ob_digit + shift_digits,
                       a_size - shift_digits, (int)shift_bits);
        x_size = a_size - shift_digits;




        if (rem)
            x_digits[0] |= 1;
        else
            while (shift_digits > 0)
                if (a->ob_digit[--shift_digits]) {
                    x_digits[0] |= 1;
                    break;
                }
    }
    (__builtin_expect(!(1 <= x_size && x_size <= (Py_ssize_t)(sizeof(x_digits) / sizeof((x_digits)[0]) + (sizeof(char [1 - 2*!(!__builtin_types_compatible_p(typeof(x_digits), typeof(&(x_digits)[0])))]) - 1))), 0) ? __assert_rtn(__func__, "longobject.c", 2607, "1 <= x_size && x_size <= (Py_ssize_t)Py_ARRAY_LENGTH(x_digits)") : (void)0);


    x_digits[0] += half_even_correction[x_digits[0] & 7];
    dx = x_digits[--x_size];
    while (x_size > 0)
        dx = dx * ((digit)1 << 30) + x_digits[--x_size];


    dx /= 4.0 * 9007199254740992.0;
    if (dx == 1.0) {
        if (a_bits == ((Py_ssize_t)(((size_t)-1)>>1)))
            goto overflow;
        dx = 0.5;
        a_bits += 1;
    }

    *e = a_bits;
    return (((PyVarObject*)(a))->ob_size) < 0 ? -dx : dx;

  overflow:

    PyErr_SetString(PyExc_OverflowError,
                    "huge integer: number of bits overflows a Py_ssize_t");
    *e = 0;
    return -1.0;
}




double
PyLong_AsDouble(PyObject *v)
{
    Py_ssize_t exponent;
    double x;

    if (v == ((void *)0)) {
        _PyErr_BadInternalCall("longobject.c", 2645);
        return -1.0;
    }
    if (!((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<24))) != 0)) {
        PyErr_SetString(PyExc_TypeError, "an integer is required");
        return -1.0;
    }
    x = _PyLong_Frexp((PyLongObject *)v, &exponent);
    if ((x == -1.0 && PyErr_Occurred()) || exponent > 1024) {
        PyErr_SetString(PyExc_OverflowError,
                        "long int too large to convert to float");
        return -1.0;
    }
    return ldexp(x, (int)exponent);
}



static void
long_dealloc(PyObject *v)
{
    (((PyObject*)(v))->ob_type)->tp_free(v);
}

static int
long_compare(PyLongObject *a, PyLongObject *b)
{
    Py_ssize_t sign;

    if ((((PyVarObject*)(a))->ob_size) != (((PyVarObject*)(b))->ob_size)) {
        sign = (((PyVarObject*)(a))->ob_size) - (((PyVarObject*)(b))->ob_size);
    }
    else {
        Py_ssize_t i = (((((PyVarObject*)(a))->ob_size)) < 0 ? -((((PyVarObject*)(a))->ob_size)) : ((((PyVarObject*)(a))->ob_size)));
        while (--i >= 0 && a->ob_digit[i] == b->ob_digit[i])
            ;
        if (i < 0)
            sign = 0;
        else {
            sign = (sdigit)a->ob_digit[i] - (sdigit)b->ob_digit[i];
            if ((((PyVarObject*)(a))->ob_size) < 0)
                sign = -sign;
        }
    }
    return sign < 0 ? -1 : sign > 0 ? 1 : 0;
}




static PyObject *
long_richcompare(PyObject *self, PyObject *other, int op)
{
    int result;
    PyObject *v;
    do { if (!((((((PyObject*)(self))->ob_type))->tp_flags & ((1L<<24))) != 0) || !((((((PyObject*)(other))->ob_type))->tp_flags & ((1L<<24))) != 0)) return ( ((PyObject*)((&_Py_NotImplementedStruct)))->ob_refcnt++), (&_Py_NotImplementedStruct); } while(0);
    if (self == other)
        result = 0;
    else
        result = long_compare((PyLongObject*)self, (PyLongObject*)other);

    switch (op) {
    case 2:
        v = ((result == 0) ? ((PyObject *) &_Py_TrueStruct) : ((PyObject *) &_Py_FalseStruct));
        break;
    case 3:
        v = ((result != 0) ? ((PyObject *) &_Py_TrueStruct) : ((PyObject *) &_Py_FalseStruct));
        break;
    case 1:
        v = ((result <= 0) ? ((PyObject *) &_Py_TrueStruct) : ((PyObject *) &_Py_FalseStruct));
        break;
    case 5:
        v = ((result >= 0) ? ((PyObject *) &_Py_TrueStruct) : ((PyObject *) &_Py_FalseStruct));
        break;
    case 0:
        v = ((result == -1) ? ((PyObject *) &_Py_TrueStruct) : ((PyObject *) &_Py_FalseStruct));
        break;
    case 4:
        v = ((result == 1) ? ((PyObject *) &_Py_TrueStruct) : ((PyObject *) &_Py_FalseStruct));
        break;
    default:
        PyErr_BadArgument();
        return ((void *)0);
    }
    ( ((PyObject*)(v))->ob_refcnt++);
    return v;
}

static Py_hash_t
long_hash(PyLongObject *v)
{
    Py_uhash_t x;
    Py_ssize_t i;
    int sign;

    i = (((PyVarObject*)(v))->ob_size);
    switch(i) {
    case -1: return v->ob_digit[0]==1 ? -2 : -(sdigit)v->ob_digit[0];
    case 0: return 0;
    case 1: return v->ob_digit[0];
    }
    sign = 1;
    x = 0;
    if (i < 0) {
        sign = -1;
        i = -(i);
    }
    while (--i >= 0) {
# 2778 "longobject.c"
        x = ((x << 30) & (((size_t)1 << 61) - 1)) |
            (x >> (61 - 30));
        x += v->ob_digit[i];
        if (x >= (((size_t)1 << 61) - 1))
            x -= (((size_t)1 << 61) - 1);
    }
    x = x * sign;
    if (x == (Py_uhash_t)-1)
        x = (Py_uhash_t)-2;
    return (Py_hash_t)x;
}




static PyLongObject *
x_add(PyLongObject *a, PyLongObject *b)
{
    Py_ssize_t size_a = (((((PyVarObject*)(a))->ob_size)) < 0 ? -((((PyVarObject*)(a))->ob_size)) : ((((PyVarObject*)(a))->ob_size))), size_b = (((((PyVarObject*)(b))->ob_size)) < 0 ? -((((PyVarObject*)(b))->ob_size)) : ((((PyVarObject*)(b))->ob_size)));
    PyLongObject *z;
    Py_ssize_t i;
    digit carry = 0;


    if (size_a < size_b) {
        { PyLongObject *temp = a; a = b; b = temp; }
        { Py_ssize_t size_temp = size_a;
            size_a = size_b;
            size_b = size_temp; }
    }
    z = _PyLong_New(size_a+1);
    if (z == ((void *)0))
        return ((void *)0);
    for (i = 0; i < size_b; ++i) {
        carry += a->ob_digit[i] + b->ob_digit[i];
        z->ob_digit[i] = carry & ((digit)(((digit)1 << 30) - 1));
        carry >>= 30;
    }
    for (; i < size_a; ++i) {
        carry += a->ob_digit[i];
        z->ob_digit[i] = carry & ((digit)(((digit)1 << 30) - 1));
        carry >>= 30;
    }
    z->ob_digit[i] = carry;
    return long_normalize(z);
}



static PyLongObject *
x_sub(PyLongObject *a, PyLongObject *b)
{
    Py_ssize_t size_a = (((((PyVarObject*)(a))->ob_size)) < 0 ? -((((PyVarObject*)(a))->ob_size)) : ((((PyVarObject*)(a))->ob_size))), size_b = (((((PyVarObject*)(b))->ob_size)) < 0 ? -((((PyVarObject*)(b))->ob_size)) : ((((PyVarObject*)(b))->ob_size)));
    PyLongObject *z;
    Py_ssize_t i;
    int sign = 1;
    digit borrow = 0;


    if (size_a < size_b) {
        sign = -1;
        { PyLongObject *temp = a; a = b; b = temp; }
        { Py_ssize_t size_temp = size_a;
            size_a = size_b;
            size_b = size_temp; }
    }
    else if (size_a == size_b) {

        i = size_a;
        while (--i >= 0 && a->ob_digit[i] == b->ob_digit[i])
            ;
        if (i < 0)
            return (PyLongObject *)PyLong_FromLong(0);
        if (a->ob_digit[i] < b->ob_digit[i]) {
            sign = -1;
            { PyLongObject *temp = a; a = b; b = temp; }
        }
        size_a = size_b = i+1;
    }
    z = _PyLong_New(size_a);
    if (z == ((void *)0))
        return ((void *)0);
    for (i = 0; i < size_b; ++i) {


        borrow = a->ob_digit[i] - b->ob_digit[i] - borrow;
        z->ob_digit[i] = borrow & ((digit)(((digit)1 << 30) - 1));
        borrow >>= 30;
        borrow &= 1;
    }
    for (; i < size_a; ++i) {
        borrow = a->ob_digit[i] - borrow;
        z->ob_digit[i] = borrow & ((digit)(((digit)1 << 30) - 1));
        borrow >>= 30;
        borrow &= 1;
    }
    (__builtin_expect(!(borrow == 0), 0) ? __assert_rtn(__func__, "longobject.c", 2874, "borrow == 0") : (void)0);
    if (sign < 0)
        do if ((((PyObject*)(z))->ob_refcnt) == 1) (((PyVarObject*)(z))->ob_size) = -(((PyVarObject*)(z))->ob_size); else { PyObject* tmp=PyLong_FromLong(-((((PyVarObject*)(z))->ob_size) < 0 ? -(sdigit)(z)->ob_digit[0] : ((((PyVarObject*)(z))->ob_size) == 0 ? (sdigit)0 : (sdigit)(z)->ob_digit[0]))); do { if ( --((PyObject*)(z))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(z)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(z)))); } while (0); (z) = (PyLongObject*)tmp; } while(0);
    return long_normalize(z);
}

static PyObject *
long_add(PyLongObject *a, PyLongObject *b)
{
    PyLongObject *z;

    do { if (!((((((PyObject*)(a))->ob_type))->tp_flags & ((1L<<24))) != 0) || !((((((PyObject*)(b))->ob_type))->tp_flags & ((1L<<24))) != 0)) return ( ((PyObject*)((&_Py_NotImplementedStruct)))->ob_refcnt++), (&_Py_NotImplementedStruct); } while(0);

    if ((((((PyVarObject*)(a))->ob_size)) < 0 ? -((((PyVarObject*)(a))->ob_size)) : ((((PyVarObject*)(a))->ob_size))) <= 1 && (((((PyVarObject*)(b))->ob_size)) < 0 ? -((((PyVarObject*)(b))->ob_size)) : ((((PyVarObject*)(b))->ob_size))) <= 1) {
        PyObject *result = PyLong_FromLong(((((PyVarObject*)(a))->ob_size) < 0 ? -(sdigit)(a)->ob_digit[0] : ((((PyVarObject*)(a))->ob_size) == 0 ? (sdigit)0 : (sdigit)(a)->ob_digit[0])) +
                                          ((((PyVarObject*)(b))->ob_size) < 0 ? -(sdigit)(b)->ob_digit[0] : ((((PyVarObject*)(b))->ob_size) == 0 ? (sdigit)0 : (sdigit)(b)->ob_digit[0])));
        return result;
    }
    if ((((PyVarObject*)(a))->ob_size) < 0) {
        if ((((PyVarObject*)(b))->ob_size) < 0) {
            z = x_add(a, b);
            if (z != ((void *)0) && (((PyVarObject*)(z))->ob_size) != 0)
                (((PyVarObject*)(z))->ob_size) = -((((PyVarObject*)(z))->ob_size));
        }
        else
            z = x_sub(b, a);
    }
    else {
        if ((((PyVarObject*)(b))->ob_size) < 0)
            z = x_sub(a, b);
        else
            z = x_add(a, b);
    }
    return (PyObject *)z;
}

static PyObject *
long_sub(PyLongObject *a, PyLongObject *b)
{
    PyLongObject *z;

    do { if (!((((((PyObject*)(a))->ob_type))->tp_flags & ((1L<<24))) != 0) || !((((((PyObject*)(b))->ob_type))->tp_flags & ((1L<<24))) != 0)) return ( ((PyObject*)((&_Py_NotImplementedStruct)))->ob_refcnt++), (&_Py_NotImplementedStruct); } while(0);

    if ((((((PyVarObject*)(a))->ob_size)) < 0 ? -((((PyVarObject*)(a))->ob_size)) : ((((PyVarObject*)(a))->ob_size))) <= 1 && (((((PyVarObject*)(b))->ob_size)) < 0 ? -((((PyVarObject*)(b))->ob_size)) : ((((PyVarObject*)(b))->ob_size))) <= 1) {
        PyObject* r;
        r = PyLong_FromLong(((((PyVarObject*)(a))->ob_size) < 0 ? -(sdigit)(a)->ob_digit[0] : ((((PyVarObject*)(a))->ob_size) == 0 ? (sdigit)0 : (sdigit)(a)->ob_digit[0]))-((((PyVarObject*)(b))->ob_size) < 0 ? -(sdigit)(b)->ob_digit[0] : ((((PyVarObject*)(b))->ob_size) == 0 ? (sdigit)0 : (sdigit)(b)->ob_digit[0])));
        return r;
    }
    if ((((PyVarObject*)(a))->ob_size) < 0) {
        if ((((PyVarObject*)(b))->ob_size) < 0)
            z = x_sub(a, b);
        else
            z = x_add(a, b);
        if (z != ((void *)0) && (((PyVarObject*)(z))->ob_size) != 0)
            (((PyVarObject*)(z))->ob_size) = -((((PyVarObject*)(z))->ob_size));
    }
    else {
        if ((((PyVarObject*)(b))->ob_size) < 0)
            z = x_add(a, b);
        else
            z = x_sub(a, b);
    }
    return (PyObject *)z;
}




static PyLongObject *
x_mul(PyLongObject *a, PyLongObject *b)
{
    PyLongObject *z;
    Py_ssize_t size_a = (((((PyVarObject*)(a))->ob_size)) < 0 ? -((((PyVarObject*)(a))->ob_size)) : ((((PyVarObject*)(a))->ob_size)));
    Py_ssize_t size_b = (((((PyVarObject*)(b))->ob_size)) < 0 ? -((((PyVarObject*)(b))->ob_size)) : ((((PyVarObject*)(b))->ob_size)));
    Py_ssize_t i;

    z = _PyLong_New(size_a + size_b);
    if (z == ((void *)0))
        return ((void *)0);

    ((__builtin_object_size (z->ob_digit, 0) != (size_t) -1) ? __builtin___memset_chk (z->ob_digit, 0, (((PyVarObject*)(z))->ob_size) * sizeof(digit), __builtin_object_size (z->ob_digit, 0)) : __inline_memset_chk (z->ob_digit, 0, (((PyVarObject*)(z))->ob_size) * sizeof(digit)));
    if (a == b) {






        for (i = 0; i < size_a; ++i) {
            twodigits carry;
            twodigits f = a->ob_digit[i];
            digit *pz = z->ob_digit + (i << 1);
            digit *pa = a->ob_digit + i + 1;
            digit *paend = a->ob_digit + size_a;

            do { if (PyErr_CheckSignals()) { do { if ( --((PyObject*)(z))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(z)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(z)))); } while (0); return ((void *)0); } } while(0);




            carry = *pz + f * f;
            *pz++ = (digit)(carry & ((digit)(((digit)1 << 30) - 1)));
            carry >>= 30;
            (__builtin_expect(!(carry <= ((digit)(((digit)1 << 30) - 1))), 0) ? __assert_rtn(__func__, "longobject.c", 2977, "carry <= PyLong_MASK") : (void)0);




            f <<= 1;
            while (pa < paend) {
                carry += *pz + *pa++ * f;
                *pz++ = (digit)(carry & ((digit)(((digit)1 << 30) - 1)));
                carry >>= 30;
                (__builtin_expect(!(carry <= (((digit)(((digit)1 << 30) - 1)) << 1)), 0) ? __assert_rtn(__func__, "longobject.c", 2987, "carry <= (PyLong_MASK << 1)") : (void)0);
            }
            if (carry) {
                carry += *pz;
                *pz++ = (digit)(carry & ((digit)(((digit)1 << 30) - 1)));
                carry >>= 30;
            }
            if (carry)
                *pz += (digit)(carry & ((digit)(((digit)1 << 30) - 1)));
            (__builtin_expect(!((carry >> 30) == 0), 0) ? __assert_rtn(__func__, "longobject.c", 2996, "(carry >> PyLong_SHIFT) == 0") : (void)0);
        }
    }
    else {
        for (i = 0; i < size_a; ++i) {
            twodigits carry = 0;
            twodigits f = a->ob_digit[i];
            digit *pz = z->ob_digit + i;
            digit *pb = b->ob_digit;
            digit *pbend = b->ob_digit + size_b;

            do { if (PyErr_CheckSignals()) { do { if ( --((PyObject*)(z))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(z)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(z)))); } while (0); return ((void *)0); } } while(0);




            while (pb < pbend) {
                carry += *pz + *pb++ * f;
                *pz++ = (digit)(carry & ((digit)(((digit)1 << 30) - 1)));
                carry >>= 30;
                (__builtin_expect(!(carry <= ((digit)(((digit)1 << 30) - 1))), 0) ? __assert_rtn(__func__, "longobject.c", 3016, "carry <= PyLong_MASK") : (void)0);
            }
            if (carry)
                *pz += (digit)(carry & ((digit)(((digit)1 << 30) - 1)));
            (__builtin_expect(!((carry >> 30) == 0), 0) ? __assert_rtn(__func__, "longobject.c", 3020, "(carry >> PyLong_SHIFT) == 0") : (void)0);
        }
    }
    return long_normalize(z);
}
# 3033 "longobject.c"
static int
kmul_split(PyLongObject *n,
           Py_ssize_t size,
           PyLongObject **high,
           PyLongObject **low)
{
    PyLongObject *hi, *lo;
    Py_ssize_t size_lo, size_hi;
    const Py_ssize_t size_n = (((((PyVarObject*)(n))->ob_size)) < 0 ? -((((PyVarObject*)(n))->ob_size)) : ((((PyVarObject*)(n))->ob_size)));

    size_lo = ((size_n) > (size) ? (size) : (size_n));
    size_hi = size_n - size_lo;

    if ((hi = _PyLong_New(size_hi)) == ((void *)0))
        return -1;
    if ((lo = _PyLong_New(size_lo)) == ((void *)0)) {
        do { if ( --((PyObject*)(hi))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(hi)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(hi)))); } while (0);
        return -1;
    }

    ((__builtin_object_size (lo->ob_digit, 0) != (size_t) -1) ? __builtin___memcpy_chk (lo->ob_digit, n->ob_digit, size_lo * sizeof(digit), __builtin_object_size (lo->ob_digit, 0)) : __inline_memcpy_chk (lo->ob_digit, n->ob_digit, size_lo * sizeof(digit)));
    ((__builtin_object_size (hi->ob_digit, 0) != (size_t) -1) ? __builtin___memcpy_chk (hi->ob_digit, n->ob_digit + size_lo, size_hi * sizeof(digit), __builtin_object_size (hi->ob_digit, 0)) : __inline_memcpy_chk (hi->ob_digit, n->ob_digit + size_lo, size_hi * sizeof(digit)));

    *high = long_normalize(hi);
    *low = long_normalize(lo);
    return 0;
}

static PyLongObject *k_lopsided_mul(PyLongObject *a, PyLongObject *b);





static PyLongObject *
k_mul(PyLongObject *a, PyLongObject *b)
{
    Py_ssize_t asize = (((((PyVarObject*)(a))->ob_size)) < 0 ? -((((PyVarObject*)(a))->ob_size)) : ((((PyVarObject*)(a))->ob_size)));
    Py_ssize_t bsize = (((((PyVarObject*)(b))->ob_size)) < 0 ? -((((PyVarObject*)(b))->ob_size)) : ((((PyVarObject*)(b))->ob_size)));
    PyLongObject *ah = ((void *)0);
    PyLongObject *al = ((void *)0);
    PyLongObject *bh = ((void *)0);
    PyLongObject *bl = ((void *)0);
    PyLongObject *ret = ((void *)0);
    PyLongObject *t1, *t2, *t3;
    Py_ssize_t shift;
    Py_ssize_t i;
# 3092 "longobject.c"
    if (asize > bsize) {
        t1 = a;
        a = b;
        b = t1;

        i = asize;
        asize = bsize;
        bsize = i;
    }


    i = a == b ? (2 * 70) : 70;
    if (asize <= i) {
        if (asize == 0)
            return (PyLongObject *)PyLong_FromLong(0);
        else
            return x_mul(a, b);
    }







    if (2 * asize <= bsize)
        return k_lopsided_mul(a, b);


    shift = bsize >> 1;
    if (kmul_split(a, shift, &ah, &al) < 0) goto fail;
    (__builtin_expect(!((((PyVarObject*)(ah))->ob_size) > 0), 0) ? __assert_rtn(__func__, "longobject.c", 3123, "Py_SIZE(ah) > 0") : (void)0);

    if (a == b) {
        bh = ah;
        bl = al;
        ( ((PyObject*)(bh))->ob_refcnt++);
        ( ((PyObject*)(bl))->ob_refcnt++);
    }
    else if (kmul_split(b, shift, &bh, &bl) < 0) goto fail;
# 3150 "longobject.c"
    ret = _PyLong_New(asize + bsize);
    if (ret == ((void *)0)) goto fail;






    if ((t1 = k_mul(ah, bh)) == ((void *)0)) goto fail;
    (__builtin_expect(!((((PyVarObject*)(t1))->ob_size) >= 0), 0) ? __assert_rtn(__func__, "longobject.c", 3159, "Py_SIZE(t1) >= 0") : (void)0);
    (__builtin_expect(!(2*shift + (((PyVarObject*)(t1))->ob_size) <= (((PyVarObject*)(ret))->ob_size)), 0) ? __assert_rtn(__func__, "longobject.c", 3160, "2*shift + Py_SIZE(t1) <= Py_SIZE(ret)") : (void)0);
    ((__builtin_object_size (ret->ob_digit + 2*shift, 0) != (size_t) -1) ? __builtin___memcpy_chk (ret->ob_digit + 2*shift, t1->ob_digit, (((PyVarObject*)(t1))->ob_size) * sizeof(digit), __builtin_object_size (ret->ob_digit + 2*shift, 0)) : __inline_memcpy_chk (ret->ob_digit + 2*shift, t1->ob_digit, (((PyVarObject*)(t1))->ob_size) * sizeof(digit)));



    i = (((PyVarObject*)(ret))->ob_size) - 2*shift - (((PyVarObject*)(t1))->ob_size);
    if (i)
        ((__builtin_object_size (ret->ob_digit + 2*shift + (((PyVarObject*)(t1))->ob_size), 0) != (size_t) -1) ? __builtin___memset_chk (ret->ob_digit + 2*shift + (((PyVarObject*)(t1))->ob_size), 0, i * sizeof(digit), __builtin_object_size (ret->ob_digit + 2*shift + (((PyVarObject*)(t1))->ob_size), 0)) : __inline_memset_chk (ret->ob_digit + 2*shift + (((PyVarObject*)(t1))->ob_size), 0, i * sizeof(digit)));



    if ((t2 = k_mul(al, bl)) == ((void *)0)) {
        do { if ( --((PyObject*)(t1))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(t1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(t1)))); } while (0);
        goto fail;
    }
    (__builtin_expect(!((((PyVarObject*)(t2))->ob_size) >= 0), 0) ? __assert_rtn(__func__, "longobject.c", 3175, "Py_SIZE(t2) >= 0") : (void)0);
    (__builtin_expect(!((((PyVarObject*)(t2))->ob_size) <= 2*shift), 0) ? __assert_rtn(__func__, "longobject.c", 3176, "Py_SIZE(t2) <= 2*shift") : (void)0);
    ((__builtin_object_size (ret->ob_digit, 0) != (size_t) -1) ? __builtin___memcpy_chk (ret->ob_digit, t2->ob_digit, (((PyVarObject*)(t2))->ob_size) * sizeof(digit), __builtin_object_size (ret->ob_digit, 0)) : __inline_memcpy_chk (ret->ob_digit, t2->ob_digit, (((PyVarObject*)(t2))->ob_size) * sizeof(digit)));


    i = 2*shift - (((PyVarObject*)(t2))->ob_size);
    if (i)
        ((__builtin_object_size (ret->ob_digit + (((PyVarObject*)(t2))->ob_size), 0) != (size_t) -1) ? __builtin___memset_chk (ret->ob_digit + (((PyVarObject*)(t2))->ob_size), 0, i * sizeof(digit), __builtin_object_size (ret->ob_digit + (((PyVarObject*)(t2))->ob_size), 0)) : __inline_memset_chk (ret->ob_digit + (((PyVarObject*)(t2))->ob_size), 0, i * sizeof(digit)));




    i = (((PyVarObject*)(ret))->ob_size) - shift;
    (void)v_isub(ret->ob_digit + shift, i, t2->ob_digit, (((PyVarObject*)(t2))->ob_size));
    do { if ( --((PyObject*)(t2))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(t2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(t2)))); } while (0);

    (void)v_isub(ret->ob_digit + shift, i, t1->ob_digit, (((PyVarObject*)(t1))->ob_size));
    do { if ( --((PyObject*)(t1))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(t1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(t1)))); } while (0);


    if ((t1 = x_add(ah, al)) == ((void *)0)) goto fail;
    do { if ( --((PyObject*)(ah))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(ah)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(ah)))); } while (0);
    do { if ( --((PyObject*)(al))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(al)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(al)))); } while (0);
    ah = al = ((void *)0);

    if (a == b) {
        t2 = t1;
        ( ((PyObject*)(t2))->ob_refcnt++);
    }
    else if ((t2 = x_add(bh, bl)) == ((void *)0)) {
        do { if ( --((PyObject*)(t1))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(t1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(t1)))); } while (0);
        goto fail;
    }
    do { if ( --((PyObject*)(bh))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(bh)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(bh)))); } while (0);
    do { if ( --((PyObject*)(bl))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(bl)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(bl)))); } while (0);
    bh = bl = ((void *)0);

    t3 = k_mul(t1, t2);
    do { if ( --((PyObject*)(t1))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(t1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(t1)))); } while (0);
    do { if ( --((PyObject*)(t2))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(t2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(t2)))); } while (0);
    if (t3 == ((void *)0)) goto fail;
    (__builtin_expect(!((((PyVarObject*)(t3))->ob_size) >= 0), 0) ? __assert_rtn(__func__, "longobject.c", 3216, "Py_SIZE(t3) >= 0") : (void)0);




    (void)v_iadd(ret->ob_digit + shift, i, t3->ob_digit, (((PyVarObject*)(t3))->ob_size));
    do { if ( --((PyObject*)(t3))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(t3)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(t3)))); } while (0);

    return long_normalize(ret);

  fail:
    do { if ((ret) == ((void *)0)) ; else do { if ( --((PyObject*)(ret))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(ret)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(ret)))); } while (0); } while (0);
    do { if ((ah) == ((void *)0)) ; else do { if ( --((PyObject*)(ah))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(ah)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(ah)))); } while (0); } while (0);
    do { if ((al) == ((void *)0)) ; else do { if ( --((PyObject*)(al))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(al)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(al)))); } while (0); } while (0);
    do { if ((bh) == ((void *)0)) ; else do { if ( --((PyObject*)(bh))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(bh)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(bh)))); } while (0); } while (0);
    do { if ((bl) == ((void *)0)) ; else do { if ( --((PyObject*)(bl))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(bl)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(bl)))); } while (0); } while (0);
    return ((void *)0);
}
# 3288 "longobject.c"
static PyLongObject *
k_lopsided_mul(PyLongObject *a, PyLongObject *b)
{
    const Py_ssize_t asize = (((((PyVarObject*)(a))->ob_size)) < 0 ? -((((PyVarObject*)(a))->ob_size)) : ((((PyVarObject*)(a))->ob_size)));
    Py_ssize_t bsize = (((((PyVarObject*)(b))->ob_size)) < 0 ? -((((PyVarObject*)(b))->ob_size)) : ((((PyVarObject*)(b))->ob_size)));
    Py_ssize_t nbdone;
    PyLongObject *ret;
    PyLongObject *bslice = ((void *)0);

    (__builtin_expect(!(asize > 70), 0) ? __assert_rtn(__func__, "longobject.c", 3297, "asize > KARATSUBA_CUTOFF") : (void)0);
    (__builtin_expect(!(2 * asize <= bsize), 0) ? __assert_rtn(__func__, "longobject.c", 3298, "2 * asize <= bsize") : (void)0);


    ret = _PyLong_New(asize + bsize);
    if (ret == ((void *)0))
        return ((void *)0);
    ((__builtin_object_size (ret->ob_digit, 0) != (size_t) -1) ? __builtin___memset_chk (ret->ob_digit, 0, (((PyVarObject*)(ret))->ob_size) * sizeof(digit), __builtin_object_size (ret->ob_digit, 0)) : __inline_memset_chk (ret->ob_digit, 0, (((PyVarObject*)(ret))->ob_size) * sizeof(digit)));


    bslice = _PyLong_New(asize);
    if (bslice == ((void *)0))
        goto fail;

    nbdone = 0;
    while (bsize > 0) {
        PyLongObject *product;
        const Py_ssize_t nbtouse = ((bsize) > (asize) ? (asize) : (bsize));


        ((__builtin_object_size (bslice->ob_digit, 0) != (size_t) -1) ? __builtin___memcpy_chk (bslice->ob_digit, b->ob_digit + nbdone, nbtouse * sizeof(digit), __builtin_object_size (bslice->ob_digit, 0)) : __inline_memcpy_chk (bslice->ob_digit, b->ob_digit + nbdone, nbtouse * sizeof(digit)));

        (((PyVarObject*)(bslice))->ob_size) = nbtouse;
        product = k_mul(a, bslice);
        if (product == ((void *)0))
            goto fail;


        (void)v_iadd(ret->ob_digit + nbdone, (((PyVarObject*)(ret))->ob_size) - nbdone,
                     product->ob_digit, (((PyVarObject*)(product))->ob_size));
        do { if ( --((PyObject*)(product))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(product)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(product)))); } while (0);

        bsize -= nbtouse;
        nbdone += nbtouse;
    }

    do { if ( --((PyObject*)(bslice))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(bslice)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(bslice)))); } while (0);
    return long_normalize(ret);

  fail:
    do { if ( --((PyObject*)(ret))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(ret)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(ret)))); } while (0);
    do { if ((bslice) == ((void *)0)) ; else do { if ( --((PyObject*)(bslice))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(bslice)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(bslice)))); } while (0); } while (0);
    return ((void *)0);
}

static PyObject *
long_mul(PyLongObject *a, PyLongObject *b)
{
    PyLongObject *z;

    do { if (!((((((PyObject*)(a))->ob_type))->tp_flags & ((1L<<24))) != 0) || !((((((PyObject*)(b))->ob_type))->tp_flags & ((1L<<24))) != 0)) return ( ((PyObject*)((&_Py_NotImplementedStruct)))->ob_refcnt++), (&_Py_NotImplementedStruct); } while(0);


    if ((((((PyVarObject*)(a))->ob_size)) < 0 ? -((((PyVarObject*)(a))->ob_size)) : ((((PyVarObject*)(a))->ob_size))) <= 1 && (((((PyVarObject*)(b))->ob_size)) < 0 ? -((((PyVarObject*)(b))->ob_size)) : ((((PyVarObject*)(b))->ob_size))) <= 1) {
        stwodigits v = (stwodigits)(((((PyVarObject*)(a))->ob_size) < 0 ? -(sdigit)(a)->ob_digit[0] : ((((PyVarObject*)(a))->ob_size) == 0 ? (sdigit)0 : (sdigit)(a)->ob_digit[0]))) * ((((PyVarObject*)(b))->ob_size) < 0 ? -(sdigit)(b)->ob_digit[0] : ((((PyVarObject*)(b))->ob_size) == 0 ? (sdigit)0 : (sdigit)(b)->ob_digit[0]));

        return PyLong_FromLongLong((long long)v);
# 3363 "longobject.c"
    }

    z = k_mul(a, b);

    if ((((((PyVarObject*)(a))->ob_size) ^ (((PyVarObject*)(b))->ob_size)) < 0) && z)
        do if ((((PyObject*)(z))->ob_refcnt) == 1) (((PyVarObject*)(z))->ob_size) = -(((PyVarObject*)(z))->ob_size); else { PyObject* tmp=PyLong_FromLong(-((((PyVarObject*)(z))->ob_size) < 0 ? -(sdigit)(z)->ob_digit[0] : ((((PyVarObject*)(z))->ob_size) == 0 ? (sdigit)0 : (sdigit)(z)->ob_digit[0]))); do { if ( --((PyObject*)(z))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(z)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(z)))); } while (0); (z) = (PyLongObject*)tmp; } while(0);
    return (PyObject *)z;
}
# 3393 "longobject.c"
static int
l_divmod(PyLongObject *v, PyLongObject *w,
         PyLongObject **pdiv, PyLongObject **pmod)
{
    PyLongObject *div, *mod;

    if (long_divrem(v, w, &div, &mod) < 0)
        return -1;
    if (((((PyVarObject*)(mod))->ob_size) < 0 && (((PyVarObject*)(w))->ob_size) > 0) ||
        ((((PyVarObject*)(mod))->ob_size) > 0 && (((PyVarObject*)(w))->ob_size) < 0)) {
        PyLongObject *temp;
        PyLongObject *one;
        temp = (PyLongObject *) long_add(mod, w);
        do { if ( --((PyObject*)(mod))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(mod)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(mod)))); } while (0);
        mod = temp;
        if (mod == ((void *)0)) {
            do { if ( --((PyObject*)(div))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(div)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(div)))); } while (0);
            return -1;
        }
        one = (PyLongObject *) PyLong_FromLong(1L);
        if (one == ((void *)0) ||
            (temp = (PyLongObject *) long_sub(div, one)) == ((void *)0)) {
            do { if ( --((PyObject*)(mod))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(mod)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(mod)))); } while (0);
            do { if ( --((PyObject*)(div))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(div)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(div)))); } while (0);
            do { if ((one) == ((void *)0)) ; else do { if ( --((PyObject*)(one))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(one)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(one)))); } while (0); } while (0);
            return -1;
        }
        do { if ( --((PyObject*)(one))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(one)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(one)))); } while (0);
        do { if ( --((PyObject*)(div))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(div)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(div)))); } while (0);
        div = temp;
    }
    if (pdiv != ((void *)0))
        *pdiv = div;
    else
        do { if ( --((PyObject*)(div))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(div)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(div)))); } while (0);

    if (pmod != ((void *)0))
        *pmod = mod;
    else
        do { if ( --((PyObject*)(mod))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(mod)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(mod)))); } while (0);

    return 0;
}

static PyObject *
long_div(PyObject *a, PyObject *b)
{
    PyLongObject *div;

    do { if (!((((((PyObject*)(a))->ob_type))->tp_flags & ((1L<<24))) != 0) || !((((((PyObject*)(b))->ob_type))->tp_flags & ((1L<<24))) != 0)) return ( ((PyObject*)((&_Py_NotImplementedStruct)))->ob_refcnt++), (&_Py_NotImplementedStruct); } while(0);
    if (l_divmod((PyLongObject*)a, (PyLongObject*)b, &div, ((void *)0)) < 0)
        div = ((void *)0);
    return (PyObject *)div;
}






static PyObject *
long_true_divide(PyObject *v, PyObject *w)
{
    PyLongObject *a, *b, *x;
    Py_ssize_t a_size, b_size, shift, extra_bits, diff, x_size, x_bits;
    digit mask, low;
    int inexact, negate, a_is_small, b_is_small;
    double dx, result;

    do { if (!((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<24))) != 0) || !((((((PyObject*)(w))->ob_type))->tp_flags & ((1L<<24))) != 0)) return ( ((PyObject*)((&_Py_NotImplementedStruct)))->ob_refcnt++), (&_Py_NotImplementedStruct); } while(0);
    a = (PyLongObject *)v;
    b = (PyLongObject *)w;
# 3554 "longobject.c"
    a_size = (((((PyVarObject*)(a))->ob_size)) < 0 ? -((((PyVarObject*)(a))->ob_size)) : ((((PyVarObject*)(a))->ob_size)));
    b_size = (((((PyVarObject*)(b))->ob_size)) < 0 ? -((((PyVarObject*)(b))->ob_size)) : ((((PyVarObject*)(b))->ob_size)));
    negate = ((((PyVarObject*)(a))->ob_size) < 0) ^ ((((PyVarObject*)(b))->ob_size) < 0);
    if (b_size == 0) {
        PyErr_SetString(PyExc_ZeroDivisionError,
                        "division by zero");
        goto error;
    }
    if (a_size == 0)
        goto underflow_or_zero;





    a_is_small = a_size <= (53 / 30) ||
        (a_size == (53 / 30)+1 &&
         a->ob_digit[(53 / 30)] >> (53 % 30) == 0);
    b_is_small = b_size <= (53 / 30) ||
        (b_size == (53 / 30)+1 &&
         b->ob_digit[(53 / 30)] >> (53 % 30) == 0);
    if (a_is_small && b_is_small) {
        double da, db;
        da = a->ob_digit[--a_size];
        while (a_size > 0)
            da = da * ((digit)1 << 30) + a->ob_digit[--a_size];
        db = b->ob_digit[--b_size];
        while (b_size > 0)
            db = db * ((digit)1 << 30) + b->ob_digit[--b_size];
        result = da / db;
        goto success;
    }


    diff = a_size - b_size;
    if (diff > ((Py_ssize_t)(((size_t)-1)>>1))/30 - 1)

        goto overflow;
    else if (diff < 1 - ((Py_ssize_t)(((size_t)-1)>>1))/30)

        goto underflow_or_zero;

    diff = diff * 30 + bits_in_digit(a->ob_digit[a_size - 1]) -
        bits_in_digit(b->ob_digit[b_size - 1]);

    if (diff > 1024)
        goto overflow;
    else if (diff < (-1021) - 53 - 1)
        goto underflow_or_zero;


    shift = ((diff) < ((-1021)) ? ((-1021)) : (diff)) - 53 - 2;

    inexact = 0;


    if (shift <= 0) {
        Py_ssize_t i, shift_digits = -shift / 30;
        digit rem;

        if (a_size >= ((Py_ssize_t)(((size_t)-1)>>1)) - 1 - shift_digits) {



            PyErr_SetString(PyExc_OverflowError,
                            "intermediate overflow during division");
            goto error;
        }
        x = _PyLong_New(a_size + shift_digits + 1);
        if (x == ((void *)0))
            goto error;
        for (i = 0; i < shift_digits; i++)
            x->ob_digit[i] = 0;
        rem = v_lshift(x->ob_digit + shift_digits, a->ob_digit,
                       a_size, -shift % 30);
        x->ob_digit[a_size + shift_digits] = rem;
    }
    else {
        Py_ssize_t shift_digits = shift / 30;
        digit rem;

        (__builtin_expect(!(a_size >= shift_digits), 0) ? __assert_rtn(__func__, "longobject.c", 3635, "a_size >= shift_digits") : (void)0);
        x = _PyLong_New(a_size - shift_digits);
        if (x == ((void *)0))
            goto error;
        rem = v_rshift(x->ob_digit, a->ob_digit + shift_digits,
                       a_size - shift_digits, shift % 30);

        if (rem)
            inexact = 1;
        while (!inexact && shift_digits > 0)
            if (a->ob_digit[--shift_digits])
                inexact = 1;
    }
    long_normalize(x);
    x_size = (((PyVarObject*)(x))->ob_size);



    if (b_size == 1) {
        digit rem = inplace_divrem1(x->ob_digit, x->ob_digit, x_size,
                              b->ob_digit[0]);
        long_normalize(x);
        if (rem)
            inexact = 1;
    }
    else {
        PyLongObject *div, *rem;
        div = x_divrem(x, b, &rem);
        do { if ( --((PyObject*)(x))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(x)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(x)))); } while (0);
        x = div;
        if (x == ((void *)0))
            goto error;
        if ((((PyVarObject*)(rem))->ob_size))
            inexact = 1;
        do { if ( --((PyObject*)(rem))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(rem)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(rem)))); } while (0);
    }
    x_size = (((((PyVarObject*)(x))->ob_size)) < 0 ? -((((PyVarObject*)(x))->ob_size)) : ((((PyVarObject*)(x))->ob_size)));
    (__builtin_expect(!(x_size > 0), 0) ? __assert_rtn(__func__, "longobject.c", 3672, "x_size > 0") : (void)0);
    x_bits = (x_size-1)*30 +bits_in_digit(x->ob_digit[x_size-1]);


    extra_bits = ((x_bits) < ((-1021) - shift) ? ((-1021) - shift) : (x_bits)) - 53;
    (__builtin_expect(!(extra_bits == 2 || extra_bits == 3), 0) ? __assert_rtn(__func__, "longobject.c", 3677, "extra_bits == 2 || extra_bits == 3") : (void)0);


    mask = (digit)1 << (extra_bits - 1);
    low = x->ob_digit[0] | inexact;
    if (low & mask && low & (3*mask-1))
        low += mask;
    x->ob_digit[0] = low & ~(mask-1U);


    dx = x->ob_digit[--x_size];
    while (x_size > 0)
        dx = dx * ((digit)1 << 30) + x->ob_digit[--x_size];
    do { if ( --((PyObject*)(x))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(x)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(x)))); } while (0);


    if (shift + x_bits >= 1024 &&
        (shift + x_bits > 1024 || dx == ldexp(1.0, (int)x_bits)))
        goto overflow;
    result = ldexp(dx, (int)shift);

  success:
    return PyFloat_FromDouble(negate ? -result : result);

  underflow_or_zero:
    return PyFloat_FromDouble(negate ? -0.0 : 0.0);

  overflow:
    PyErr_SetString(PyExc_OverflowError,
                    "integer division result too large for a float");
  error:
    return ((void *)0);
}

static PyObject *
long_mod(PyObject *a, PyObject *b)
{
    PyLongObject *mod;

    do { if (!((((((PyObject*)(a))->ob_type))->tp_flags & ((1L<<24))) != 0) || !((((((PyObject*)(b))->ob_type))->tp_flags & ((1L<<24))) != 0)) return ( ((PyObject*)((&_Py_NotImplementedStruct)))->ob_refcnt++), (&_Py_NotImplementedStruct); } while(0);

    if (l_divmod((PyLongObject*)a, (PyLongObject*)b, ((void *)0), &mod) < 0)
        mod = ((void *)0);
    return (PyObject *)mod;
}

static PyObject *
long_divmod(PyObject *a, PyObject *b)
{
    PyLongObject *div, *mod;
    PyObject *z;

    do { if (!((((((PyObject*)(a))->ob_type))->tp_flags & ((1L<<24))) != 0) || !((((((PyObject*)(b))->ob_type))->tp_flags & ((1L<<24))) != 0)) return ( ((PyObject*)((&_Py_NotImplementedStruct)))->ob_refcnt++), (&_Py_NotImplementedStruct); } while(0);

    if (l_divmod((PyLongObject*)a, (PyLongObject*)b, &div, &mod) < 0) {
        return ((void *)0);
    }
    z = PyTuple_New(2);
    if (z != ((void *)0)) {
        PyTuple_SetItem(z, 0, (PyObject *) div);
        PyTuple_SetItem(z, 1, (PyObject *) mod);
    }
    else {
        do { if ( --((PyObject*)(div))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(div)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(div)))); } while (0);
        do { if ( --((PyObject*)(mod))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(mod)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(mod)))); } while (0);
    }
    return z;
}


static PyObject *
long_pow(PyObject *v, PyObject *w, PyObject *x)
{
    PyLongObject *a, *b, *c;
    int negativeOutput = 0;

    PyLongObject *z = ((void *)0);
    Py_ssize_t i, j, k;
    PyLongObject *temp = ((void *)0);




    PyLongObject *table[32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


    do { if (!((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<24))) != 0) || !((((((PyObject*)(w))->ob_type))->tp_flags & ((1L<<24))) != 0)) return ( ((PyObject*)((&_Py_NotImplementedStruct)))->ob_refcnt++), (&_Py_NotImplementedStruct); } while(0);
    a = (PyLongObject*)v; ( ((PyObject*)(a))->ob_refcnt++);
    b = (PyLongObject*)w; ( ((PyObject*)(b))->ob_refcnt++);
    if (((((((PyObject*)(x))->ob_type))->tp_flags & ((1L<<24))) != 0)) {
        c = (PyLongObject *)x;
        ( ((PyObject*)(x))->ob_refcnt++);
    }
    else if (x == (&_Py_NoneStruct))
        c = ((void *)0);
    else {
        do { if ( --((PyObject*)(a))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(a)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(a)))); } while (0);
        do { if ( --((PyObject*)(b))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(b)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(b)))); } while (0);
        return ( ((PyObject*)((&_Py_NotImplementedStruct)))->ob_refcnt++), (&_Py_NotImplementedStruct);
    }

    if ((((PyVarObject*)(b))->ob_size) < 0) {
        if (c) {
            PyErr_SetString(PyExc_TypeError, "pow() 2nd argument "
                            "cannot be negative when 3rd argument specified");
            goto Error;
        }
        else {



            do { if ( --((PyObject*)(a))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(a)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(a)))); } while (0);
            do { if ( --((PyObject*)(b))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(b)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(b)))); } while (0);
            return PyFloat_Type.tp_as_number->nb_power(v, w, x);
        }
    }

    if (c) {


        if ((((PyVarObject*)(c))->ob_size) == 0) {
            PyErr_SetString(PyExc_ValueError,
                            "pow() 3rd argument cannot be 0");
            goto Error;
        }




        if ((((PyVarObject*)(c))->ob_size) < 0) {
            negativeOutput = 1;
            temp = (PyLongObject *)_PyLong_Copy(c);
            if (temp == ((void *)0))
                goto Error;
            do { if ( --((PyObject*)(c))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(c)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(c)))); } while (0);
            c = temp;
            temp = ((void *)0);
            do if ((((PyObject*)(c))->ob_refcnt) == 1) (((PyVarObject*)(c))->ob_size) = -(((PyVarObject*)(c))->ob_size); else { PyObject* tmp=PyLong_FromLong(-((((PyVarObject*)(c))->ob_size) < 0 ? -(sdigit)(c)->ob_digit[0] : ((((PyVarObject*)(c))->ob_size) == 0 ? (sdigit)0 : (sdigit)(c)->ob_digit[0]))); do { if ( --((PyObject*)(c))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(c)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(c)))); } while (0); (c) = (PyLongObject*)tmp; } while(0);
        }



        if (((((PyVarObject*)(c))->ob_size) == 1) && (c->ob_digit[0] == 1)) {
            z = (PyLongObject *)PyLong_FromLong(0L);
            goto Done;
        }




        if ((((PyVarObject*)(a))->ob_size) < 0) {
            if (l_divmod(a, c, ((void *)0), &temp) < 0)
                goto Error;
            do { if ( --((PyObject*)(a))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(a)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(a)))); } while (0);
            a = temp;
            temp = ((void *)0);
        }
    }




    z = (PyLongObject *)PyLong_FromLong(1L);
    if (z == ((void *)0))
        goto Error;
# 3871 "longobject.c"
    if ((((PyVarObject*)(b))->ob_size) <= 8) {


        for (i = (((PyVarObject*)(b))->ob_size) - 1; i >= 0; --i) {
            digit bi = b->ob_digit[i];

            for (j = (digit)1 << (30 -1); j != 0; j >>= 1) {
                do { temp = (PyLongObject *)long_mul(z, z); if (temp == ((void *)0)) goto Error; do { if ((z) == ((void *)0)) ; else do { if ( --((PyObject*)(z))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(z)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(z)))); } while (0); } while (0); z = temp; temp = ((void *)0); do { if (c != ((void *)0)) { if (l_divmod(z, c, ((void *)0), &temp) < 0) goto Error; do { if ((z) == ((void *)0)) ; else do { if ( --((PyObject*)(z))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(z)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(z)))); } while (0); } while (0); z = temp; temp = ((void *)0); } } while(0); } while(0);
                if (bi & j)
                    do { temp = (PyLongObject *)long_mul(z, a); if (temp == ((void *)0)) goto Error; do { if ((z) == ((void *)0)) ; else do { if ( --((PyObject*)(z))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(z)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(z)))); } while (0); } while (0); z = temp; temp = ((void *)0); do { if (c != ((void *)0)) { if (l_divmod(z, c, ((void *)0), &temp) < 0) goto Error; do { if ((z) == ((void *)0)) ; else do { if ( --((PyObject*)(z))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(z)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(z)))); } while (0); } while (0); z = temp; temp = ((void *)0); } } while(0); } while(0);
            }
        }
    }
    else {

        ( ((PyObject*)(z))->ob_refcnt++);
        table[0] = z;
        for (i = 1; i < 32; ++i)
            do { temp = (PyLongObject *)long_mul(table[i-1], a); if (temp == ((void *)0)) goto Error; do { if ((table[i]) == ((void *)0)) ; else do { if ( --((PyObject*)(table[i]))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(table[i])))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(table[i])))); } while (0); } while (0); table[i] = temp; temp = ((void *)0); do { if (c != ((void *)0)) { if (l_divmod(table[i], c, ((void *)0), &temp) < 0) goto Error; do { if ((table[i]) == ((void *)0)) ; else do { if ( --((PyObject*)(table[i]))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(table[i])))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(table[i])))); } while (0); } while (0); table[i] = temp; temp = ((void *)0); } } while(0); } while(0);

        for (i = (((PyVarObject*)(b))->ob_size) - 1; i >= 0; --i) {
            const digit bi = b->ob_digit[i];

            for (j = 30 - 5; j >= 0; j -= 5) {
                const int index = (bi >> j) & 0x1f;
                for (k = 0; k < 5; ++k)
                    do { temp = (PyLongObject *)long_mul(z, z); if (temp == ((void *)0)) goto Error; do { if ((z) == ((void *)0)) ; else do { if ( --((PyObject*)(z))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(z)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(z)))); } while (0); } while (0); z = temp; temp = ((void *)0); do { if (c != ((void *)0)) { if (l_divmod(z, c, ((void *)0), &temp) < 0) goto Error; do { if ((z) == ((void *)0)) ; else do { if ( --((PyObject*)(z))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(z)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(z)))); } while (0); } while (0); z = temp; temp = ((void *)0); } } while(0); } while(0);
                if (index)
                    do { temp = (PyLongObject *)long_mul(z, table[index]); if (temp == ((void *)0)) goto Error; do { if ((z) == ((void *)0)) ; else do { if ( --((PyObject*)(z))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(z)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(z)))); } while (0); } while (0); z = temp; temp = ((void *)0); do { if (c != ((void *)0)) { if (l_divmod(z, c, ((void *)0), &temp) < 0) goto Error; do { if ((z) == ((void *)0)) ; else do { if ( --((PyObject*)(z))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(z)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(z)))); } while (0); } while (0); z = temp; temp = ((void *)0); } } while(0); } while(0);
            }
        }
    }

    if (negativeOutput && ((((PyVarObject*)(z))->ob_size) != 0)) {
        temp = (PyLongObject *)long_sub(z, c);
        if (temp == ((void *)0))
            goto Error;
        do { if ( --((PyObject*)(z))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(z)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(z)))); } while (0);
        z = temp;
        temp = ((void *)0);
    }
    goto Done;

  Error:
    if (z != ((void *)0)) {
        do { if ( --((PyObject*)(z))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(z)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(z)))); } while (0);
        z = ((void *)0);
    }

  Done:
    if ((((PyVarObject*)(b))->ob_size) > 8) {
        for (i = 0; i < 32; ++i)
            do { if ((table[i]) == ((void *)0)) ; else do { if ( --((PyObject*)(table[i]))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(table[i])))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(table[i])))); } while (0); } while (0);
    }
    do { if ( --((PyObject*)(a))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(a)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(a)))); } while (0);
    do { if ( --((PyObject*)(b))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(b)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(b)))); } while (0);
    do { if ((c) == ((void *)0)) ; else do { if ( --((PyObject*)(c))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(c)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(c)))); } while (0); } while (0);
    do { if ((temp) == ((void *)0)) ; else do { if ( --((PyObject*)(temp))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(temp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(temp)))); } while (0); } while (0);
    return (PyObject *)z;
}

static PyObject *
long_invert(PyLongObject *v)
{

    PyLongObject *x;
    PyLongObject *w;
    if ((((((PyVarObject*)(v))->ob_size)) < 0 ? -((((PyVarObject*)(v))->ob_size)) : ((((PyVarObject*)(v))->ob_size))) <=1)
        return PyLong_FromLong(-(((((PyVarObject*)(v))->ob_size) < 0 ? -(sdigit)(v)->ob_digit[0] : ((((PyVarObject*)(v))->ob_size) == 0 ? (sdigit)0 : (sdigit)(v)->ob_digit[0]))+1));
    w = (PyLongObject *)PyLong_FromLong(1L);
    if (w == ((void *)0))
        return ((void *)0);
    x = (PyLongObject *) long_add(v, w);
    do { if ( --((PyObject*)(w))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(w)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(w)))); } while (0);
    if (x == ((void *)0))
        return ((void *)0);
    (((PyVarObject*)(x))->ob_size) = -((((PyVarObject*)(x))->ob_size));
    return (PyObject *)maybe_small_long(x);
}

static PyObject *
long_neg(PyLongObject *v)
{
    PyLongObject *z;
    if ((((((PyVarObject*)(v))->ob_size)) < 0 ? -((((PyVarObject*)(v))->ob_size)) : ((((PyVarObject*)(v))->ob_size))) <= 1)
        return PyLong_FromLong(-((((PyVarObject*)(v))->ob_size) < 0 ? -(sdigit)(v)->ob_digit[0] : ((((PyVarObject*)(v))->ob_size) == 0 ? (sdigit)0 : (sdigit)(v)->ob_digit[0])));
    z = (PyLongObject *)_PyLong_Copy(v);
    if (z != ((void *)0))
        (((PyVarObject*)(z))->ob_size) = -((((PyVarObject*)(v))->ob_size));
    return (PyObject *)z;
}

static PyObject *
long_abs(PyLongObject *v)
{
    if ((((PyVarObject*)(v))->ob_size) < 0)
        return long_neg(v);
    else
        return long_long((PyObject *)v);
}

static int
long_bool(PyLongObject *v)
{
    return (((PyVarObject*)(v))->ob_size) != 0;
}

static PyObject *
long_rshift(PyLongObject *a, PyLongObject *b)
{
    PyLongObject *z = ((void *)0);
    Py_ssize_t shiftby, newsize, wordshift, loshift, hishift, i, j;
    digit lomask, himask;

    do { if (!((((((PyObject*)(a))->ob_type))->tp_flags & ((1L<<24))) != 0) || !((((((PyObject*)(b))->ob_type))->tp_flags & ((1L<<24))) != 0)) return ( ((PyObject*)((&_Py_NotImplementedStruct)))->ob_refcnt++), (&_Py_NotImplementedStruct); } while(0);

    if ((((PyVarObject*)(a))->ob_size) < 0) {

        PyLongObject *a1, *a2;
        a1 = (PyLongObject *) long_invert(a);
        if (a1 == ((void *)0))
            goto rshift_error;
        a2 = (PyLongObject *) long_rshift(a1, b);
        do { if ( --((PyObject*)(a1))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(a1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(a1)))); } while (0);
        if (a2 == ((void *)0))
            goto rshift_error;
        z = (PyLongObject *) long_invert(a2);
        do { if ( --((PyObject*)(a2))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(a2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(a2)))); } while (0);
    }
    else {
        shiftby = PyLong_AsSsize_t((PyObject *)b);
        if (shiftby == -1L && PyErr_Occurred())
            goto rshift_error;
        if (shiftby < 0) {
            PyErr_SetString(PyExc_ValueError,
                            "negative shift count");
            goto rshift_error;
        }
        wordshift = shiftby / 30;
        newsize = (((((PyVarObject*)(a))->ob_size)) < 0 ? -((((PyVarObject*)(a))->ob_size)) : ((((PyVarObject*)(a))->ob_size))) - wordshift;
        if (newsize <= 0)
            return PyLong_FromLong(0);
        loshift = shiftby % 30;
        hishift = 30 - loshift;
        lomask = ((digit)1 << hishift) - 1;
        himask = ((digit)(((digit)1 << 30) - 1)) ^ lomask;
        z = _PyLong_New(newsize);
        if (z == ((void *)0))
            goto rshift_error;
        if ((((PyVarObject*)(a))->ob_size) < 0)
            (((PyVarObject*)(z))->ob_size) = -((((PyVarObject*)(z))->ob_size));
        for (i = 0, j = wordshift; i < newsize; i++, j++) {
            z->ob_digit[i] = (a->ob_digit[j] >> loshift) & lomask;
            if (i+1 < newsize)
                z->ob_digit[i] |= (a->ob_digit[j+1] << hishift) & himask;
        }
        z = long_normalize(z);
    }
  rshift_error:
    return (PyObject *) maybe_small_long(z);

}

static PyObject *
long_lshift(PyObject *v, PyObject *w)
{

    PyLongObject *a = (PyLongObject*)v;
    PyLongObject *b = (PyLongObject*)w;
    PyLongObject *z = ((void *)0);
    Py_ssize_t shiftby, oldsize, newsize, wordshift, remshift, i, j;
    twodigits accum;

    do { if (!((((((PyObject*)(a))->ob_type))->tp_flags & ((1L<<24))) != 0) || !((((((PyObject*)(b))->ob_type))->tp_flags & ((1L<<24))) != 0)) return ( ((PyObject*)((&_Py_NotImplementedStruct)))->ob_refcnt++), (&_Py_NotImplementedStruct); } while(0);

    shiftby = PyLong_AsSsize_t((PyObject *)b);
    if (shiftby == -1L && PyErr_Occurred())
        goto lshift_error;
    if (shiftby < 0) {
        PyErr_SetString(PyExc_ValueError, "negative shift count");
        goto lshift_error;
    }

    wordshift = shiftby / 30;
    remshift = shiftby - wordshift * 30;

    oldsize = (((((PyVarObject*)(a))->ob_size)) < 0 ? -((((PyVarObject*)(a))->ob_size)) : ((((PyVarObject*)(a))->ob_size)));
    newsize = oldsize + wordshift;
    if (remshift)
        ++newsize;
    z = _PyLong_New(newsize);
    if (z == ((void *)0))
        goto lshift_error;
    if ((((PyVarObject*)(a))->ob_size) < 0)
        do if ((((PyObject*)(z))->ob_refcnt) == 1) (((PyVarObject*)(z))->ob_size) = -(((PyVarObject*)(z))->ob_size); else { PyObject* tmp=PyLong_FromLong(-((((PyVarObject*)(z))->ob_size) < 0 ? -(sdigit)(z)->ob_digit[0] : ((((PyVarObject*)(z))->ob_size) == 0 ? (sdigit)0 : (sdigit)(z)->ob_digit[0]))); do { if ( --((PyObject*)(z))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(z)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(z)))); } while (0); (z) = (PyLongObject*)tmp; } while(0);
    for (i = 0; i < wordshift; i++)
        z->ob_digit[i] = 0;
    accum = 0;
    for (i = wordshift, j = 0; j < oldsize; i++, j++) {
        accum |= (twodigits)a->ob_digit[j] << remshift;
        z->ob_digit[i] = (digit)(accum & ((digit)(((digit)1 << 30) - 1)));
        accum >>= 30;
    }
    if (remshift)
        z->ob_digit[newsize-1] = (digit)accum;
    else
        (__builtin_expect(!(!accum), 0) ? __assert_rtn(__func__, "longobject.c", 4077, "!accum") : (void)0);
    z = long_normalize(z);
  lshift_error:
    return (PyObject *) maybe_small_long(z);
}





static void
v_complement(digit *z, digit *a, Py_ssize_t m)
{
    Py_ssize_t i;
    digit carry = 1;
    for (i = 0; i < m; ++i) {
        carry += a[i] ^ ((digit)(((digit)1 << 30) - 1));
        z[i] = carry & ((digit)(((digit)1 << 30) - 1));
        carry >>= 30;
    }
    (__builtin_expect(!(carry == 0), 0) ? __assert_rtn(__func__, "longobject.c", 4097, "carry == 0") : (void)0);
}



static PyObject *
long_bitwise(PyLongObject *a,
             int op,
             PyLongObject *b)
{
    int nega, negb, negz;
    Py_ssize_t size_a, size_b, size_z, i;
    PyLongObject *z;







    size_a = (((((PyVarObject*)(a))->ob_size)) < 0 ? -((((PyVarObject*)(a))->ob_size)) : ((((PyVarObject*)(a))->ob_size)));
    nega = (((PyVarObject*)(a))->ob_size) < 0;
    if (nega) {
        z = _PyLong_New(size_a);
        if (z == ((void *)0))
            return ((void *)0);
        v_complement(z->ob_digit, a->ob_digit, size_a);
        a = z;
    }
    else

        ( ((PyObject*)(a))->ob_refcnt++);


    size_b = (((((PyVarObject*)(b))->ob_size)) < 0 ? -((((PyVarObject*)(b))->ob_size)) : ((((PyVarObject*)(b))->ob_size)));
    negb = (((PyVarObject*)(b))->ob_size) < 0;
    if (negb) {
        z = _PyLong_New(size_b);
        if (z == ((void *)0)) {
            do { if ( --((PyObject*)(a))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(a)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(a)))); } while (0);
            return ((void *)0);
        }
        v_complement(z->ob_digit, b->ob_digit, size_b);
        b = z;
    }
    else
        ( ((PyObject*)(b))->ob_refcnt++);


    if (size_a < size_b) {
        z = a; a = b; b = z;
        size_z = size_a; size_a = size_b; size_b = size_z;
        negz = nega; nega = negb; negb = negz;
    }
# 4159 "longobject.c"
    switch (op) {
    case '^':
        negz = nega ^ negb;
        size_z = size_a;
        break;
    case '&':
        negz = nega & negb;
        size_z = negb ? size_a : size_b;
        break;
    case '|':
        negz = nega | negb;
        size_z = negb ? size_b : size_a;
        break;
    default:
        PyErr_BadArgument();
        return ((void *)0);
    }



    z = _PyLong_New(size_z + negz);
    if (z == ((void *)0)) {
        do { if ( --((PyObject*)(a))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(a)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(a)))); } while (0);
        do { if ( --((PyObject*)(b))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(b)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(b)))); } while (0);
        return ((void *)0);
    }


    switch(op) {
    case '&':
        for (i = 0; i < size_b; ++i)
            z->ob_digit[i] = a->ob_digit[i] & b->ob_digit[i];
        break;
    case '|':
        for (i = 0; i < size_b; ++i)
            z->ob_digit[i] = a->ob_digit[i] | b->ob_digit[i];
        break;
    case '^':
        for (i = 0; i < size_b; ++i)
            z->ob_digit[i] = a->ob_digit[i] ^ b->ob_digit[i];
        break;
    default:
        PyErr_BadArgument();
        return ((void *)0);
    }


    if (op == '^' && negb)
        for (; i < size_z; ++i)
            z->ob_digit[i] = a->ob_digit[i] ^ ((digit)(((digit)1 << 30) - 1));
    else if (i < size_z)
        ((__builtin_object_size (&z->ob_digit[i], 0) != (size_t) -1) ? __builtin___memcpy_chk (&z->ob_digit[i], &a->ob_digit[i], (size_z-i)*sizeof(digit), __builtin_object_size (&z->ob_digit[i], 0)) : __inline_memcpy_chk (&z->ob_digit[i], &a->ob_digit[i], (size_z-i)*sizeof(digit)));



    if (negz) {
        (((PyVarObject*)(z))->ob_size) = -((((PyVarObject*)(z))->ob_size));
        z->ob_digit[size_z] = ((digit)(((digit)1 << 30) - 1));
        v_complement(z->ob_digit, z->ob_digit, size_z+1);
    }

    do { if ( --((PyObject*)(a))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(a)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(a)))); } while (0);
    do { if ( --((PyObject*)(b))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(b)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(b)))); } while (0);
    return (PyObject *)maybe_small_long(long_normalize(z));
}

static PyObject *
long_and(PyObject *a, PyObject *b)
{
    PyObject *c;
    do { if (!((((((PyObject*)(a))->ob_type))->tp_flags & ((1L<<24))) != 0) || !((((((PyObject*)(b))->ob_type))->tp_flags & ((1L<<24))) != 0)) return ( ((PyObject*)((&_Py_NotImplementedStruct)))->ob_refcnt++), (&_Py_NotImplementedStruct); } while(0);
    c = long_bitwise((PyLongObject*)a, '&', (PyLongObject*)b);
    return c;
}

static PyObject *
long_xor(PyObject *a, PyObject *b)
{
    PyObject *c;
    do { if (!((((((PyObject*)(a))->ob_type))->tp_flags & ((1L<<24))) != 0) || !((((((PyObject*)(b))->ob_type))->tp_flags & ((1L<<24))) != 0)) return ( ((PyObject*)((&_Py_NotImplementedStruct)))->ob_refcnt++), (&_Py_NotImplementedStruct); } while(0);
    c = long_bitwise((PyLongObject*)a, '^', (PyLongObject*)b);
    return c;
}

static PyObject *
long_or(PyObject *a, PyObject *b)
{
    PyObject *c;
    do { if (!((((((PyObject*)(a))->ob_type))->tp_flags & ((1L<<24))) != 0) || !((((((PyObject*)(b))->ob_type))->tp_flags & ((1L<<24))) != 0)) return ( ((PyObject*)((&_Py_NotImplementedStruct)))->ob_refcnt++), (&_Py_NotImplementedStruct); } while(0);
    c = long_bitwise((PyLongObject*)a, '|', (PyLongObject*)b);
    return c;
}

static PyObject *
long_long(PyObject *v)
{
    if (((((PyObject*)(v))->ob_type) == &PyLong_Type))
        ( ((PyObject*)(v))->ob_refcnt++);
    else
        v = _PyLong_Copy((PyLongObject *)v);
    return v;
}

static PyObject *
long_float(PyObject *v)
{
    double result;
    result = PyLong_AsDouble(v);
    if (result == -1.0 && PyErr_Occurred())
        return ((void *)0);
    return PyFloat_FromDouble(result);
}

static PyObject *
long_subtype_new(PyTypeObject *type, PyObject *args, PyObject *kwds);

static PyObject *
long_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    PyObject *obase = ((void *)0), *x = ((void *)0);
    long base;
    int overflow;
    static char *kwlist[] = {"x", "base", 0};

    if (type != &PyLong_Type)
        return long_subtype_new(type, args, kwds);
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|OO:int", kwlist,
                                     &x, &obase))
        return ((void *)0);
    if (x == ((void *)0)) {
        if (obase != ((void *)0)) {
            PyErr_SetString(PyExc_TypeError,
                            "int() missing string argument");
            return ((void *)0);
        }
        return PyLong_FromLong(0L);
    }
    if (obase == ((void *)0))
        return PyNumber_Long(x);

    base = PyLong_AsLongAndOverflow(obase, &overflow);
    if (base == -1 && PyErr_Occurred())
        return ((void *)0);
    if (overflow || (base != 0 && base < 2) || base > 36) {
        PyErr_SetString(PyExc_ValueError,
                        "int() base must be >= 2 and <= 36");
        return ((void *)0);
    }

    if (((((((PyObject*)(x))->ob_type))->tp_flags & ((1L<<28))) != 0))
        return PyLong_FromUnicodeObject(x, (int)base);
    else if (((((PyObject*)(x))->ob_type) == (&PyByteArray_Type) || PyType_IsSubtype((((PyObject*)(x))->ob_type), (&PyByteArray_Type))) || ((((((PyObject*)(x))->ob_type))->tp_flags & ((1L<<27))) != 0)) {


        char *string;
        Py_ssize_t size = (((PyVarObject*)(x))->ob_size);
        if (((((PyObject*)(x))->ob_type) == (&PyByteArray_Type) || PyType_IsSubtype((((PyObject*)(x))->ob_type), (&PyByteArray_Type))))
            string = ((__builtin_expect(!(((((PyObject*)(x))->ob_type) == (&PyByteArray_Type) || PyType_IsSubtype((((PyObject*)(x))->ob_type), (&PyByteArray_Type)))), 0) ? __assert_rtn(__func__, "longobject.c", 4316, "PyByteArray_Check(x)") : (void)0), (((PyVarObject*)(x))->ob_size) ? ((PyByteArrayObject *)(x))->ob_bytes : _PyByteArray_empty_string);
        else
            string = ((__builtin_expect(!(((((((PyObject*)(x))->ob_type))->tp_flags & ((1L<<27))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 4318, "PyBytes_Check(x)") : (void)0), (((PyBytesObject *)(x))->ob_sval));
        if (strlen(string) != (size_t)size || !size) {


            PyErr_Format(PyExc_ValueError,
                         "invalid literal for int() with base %d: %R",
                         (int)base, x);
            return ((void *)0);
        }
        return PyLong_FromString(string, ((void *)0), (int)base);
    }
    else {
        PyErr_SetString(PyExc_TypeError,
                        "int() can't convert non-string with explicit base");
        return ((void *)0);
    }
}






static PyObject *
long_subtype_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    PyLongObject *tmp, *newobj;
    Py_ssize_t i, n;

    (__builtin_expect(!(PyType_IsSubtype(type, &PyLong_Type)), 0) ? __assert_rtn(__func__, "longobject.c", 4347, "PyType_IsSubtype(type, &PyLong_Type)") : (void)0);
    tmp = (PyLongObject *)long_new(&PyLong_Type, args, kwds);
    if (tmp == ((void *)0))
        return ((void *)0);
    (__builtin_expect(!(((((PyObject*)(tmp))->ob_type) == &PyLong_Type)), 0) ? __assert_rtn(__func__, "longobject.c", 4351, "PyLong_CheckExact(tmp)") : (void)0);
    n = (((PyVarObject*)(tmp))->ob_size);
    if (n < 0)
        n = -n;
    newobj = (PyLongObject *)type->tp_alloc(type, n);
    if (newobj == ((void *)0)) {
        do { if ( --((PyObject*)(tmp))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(tmp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(tmp)))); } while (0);
        return ((void *)0);
    }
    (__builtin_expect(!(((((((PyObject*)(newobj))->ob_type))->tp_flags & ((1L<<24))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 4360, "PyLong_Check(newobj)") : (void)0);
    (((PyVarObject*)(newobj))->ob_size) = (((PyVarObject*)(tmp))->ob_size);
    for (i = 0; i < n; i++)
        newobj->ob_digit[i] = tmp->ob_digit[i];
    do { if ( --((PyObject*)(tmp))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(tmp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(tmp)))); } while (0);
    return (PyObject *)newobj;
}

static PyObject *
long_getnewargs(PyLongObject *v)
{
    return Py_BuildValue("(N)", _PyLong_Copy(v));
}

static PyObject *
long_get0(PyLongObject *v, void *context) {
    return PyLong_FromLong(0L);
}

static PyObject *
long_get1(PyLongObject *v, void *context) {
    return PyLong_FromLong(1L);
}

static PyObject *
long__format__(PyObject *self, PyObject *args)
{
    PyObject *format_spec;
    _PyUnicodeWriter writer;
    int ret;

    if (!PyArg_ParseTuple(args, "U:__format__", &format_spec))
        return ((void *)0);

    _PyUnicodeWriter_Init(&writer, 0);
    ret = _PyLong_FormatAdvancedWriter(
        &writer,
        self,
        format_spec, 0, ((__builtin_expect(!(((((((PyObject*)(format_spec))->ob_type))->tp_flags & ((1L<<28))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 4398, "PyUnicode_Check(format_spec)") : (void)0), (__builtin_expect(!((((PyASCIIObject*)format_spec)->state.ready)), 0) ? __assert_rtn(__func__, "longobject.c", 4398, "PyUnicode_IS_READY(format_spec)") : (void)0), ((PyASCIIObject *)(format_spec))->length));
    if (ret == -1) {
        _PyUnicodeWriter_Dealloc(&writer);
        return ((void *)0);
    }
    return _PyUnicodeWriter_Finish(&writer);
}






PyObject *
_PyLong_DivmodNear(PyObject *a, PyObject *b)
{
    PyLongObject *quo = ((void *)0), *rem = ((void *)0);
    PyObject *one = ((void *)0), *twice_rem, *result, *temp;
    int cmp, quo_is_odd, quo_is_neg;
# 4433 "longobject.c"
    if (!((((((PyObject*)(a))->ob_type))->tp_flags & ((1L<<24))) != 0) || !((((((PyObject*)(b))->ob_type))->tp_flags & ((1L<<24))) != 0)) {
        PyErr_SetString(PyExc_TypeError,
                        "non-integer arguments in division");
        return ((void *)0);
    }


    quo_is_neg = ((((PyVarObject*)(a))->ob_size) < 0) != ((((PyVarObject*)(b))->ob_size) < 0);

    one = PyLong_FromLong(1L);
    if (one == ((void *)0))
        return ((void *)0);

    if (long_divrem((PyLongObject*)a, (PyLongObject*)b, &quo, &rem) < 0)
        goto error;



    twice_rem = long_lshift((PyObject *)rem, one);
    if (twice_rem == ((void *)0))
        goto error;
    if (quo_is_neg) {
        temp = long_neg((PyLongObject*)twice_rem);
        do { if ( --((PyObject*)(twice_rem))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(twice_rem)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(twice_rem)))); } while (0);
        twice_rem = temp;
        if (twice_rem == ((void *)0))
            goto error;
    }
    cmp = long_compare((PyLongObject *)twice_rem, (PyLongObject *)b);
    do { if ( --((PyObject*)(twice_rem))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(twice_rem)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(twice_rem)))); } while (0);

    quo_is_odd = (((PyVarObject*)(quo))->ob_size) != 0 && ((quo->ob_digit[0] & 1) != 0);
    if (((((PyVarObject*)(b))->ob_size) < 0 ? cmp < 0 : cmp > 0) || (cmp == 0 && quo_is_odd)) {

        if (quo_is_neg)
            temp = long_sub(quo, (PyLongObject *)one);
        else
            temp = long_add(quo, (PyLongObject *)one);
        do { if ( --((PyObject*)(quo))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(quo)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(quo)))); } while (0);
        quo = (PyLongObject *)temp;
        if (quo == ((void *)0))
            goto error;

        if (quo_is_neg)
            temp = long_add(rem, (PyLongObject *)b);
        else
            temp = long_sub(rem, (PyLongObject *)b);
        do { if ( --((PyObject*)(rem))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(rem)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(rem)))); } while (0);
        rem = (PyLongObject *)temp;
        if (rem == ((void *)0))
            goto error;
    }

    result = PyTuple_New(2);
    if (result == ((void *)0))
        goto error;


    (((PyTupleObject *)(result))->ob_item[0] = (PyObject *)quo);
    (((PyTupleObject *)(result))->ob_item[1] = (PyObject *)rem);
    do { if ( --((PyObject*)(one))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(one)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(one)))); } while (0);
    return result;

  error:
    do { if ((quo) == ((void *)0)) ; else do { if ( --((PyObject*)(quo))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(quo)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(quo)))); } while (0); } while (0);
    do { if ((rem) == ((void *)0)) ; else do { if ( --((PyObject*)(rem))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(rem)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(rem)))); } while (0); } while (0);
    do { if ((one) == ((void *)0)) ; else do { if ( --((PyObject*)(one))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(one)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(one)))); } while (0); } while (0);
    return ((void *)0);
}

static PyObject *
long_round(PyObject *self, PyObject *args)
{
    PyObject *o_ndigits=((void *)0), *temp, *result, *ndigits;
# 4522 "longobject.c"
    if (!PyArg_ParseTuple(args, "|O", &o_ndigits))
        return ((void *)0);
    if (o_ndigits == ((void *)0))
        return long_long(self);

    ndigits = PyNumber_Index(o_ndigits);
    if (ndigits == ((void *)0))
        return ((void *)0);


    if ((((PyVarObject*)(ndigits))->ob_size) >= 0) {
        do { if ( --((PyObject*)(ndigits))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(ndigits)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(ndigits)))); } while (0);
        return long_long(self);
    }


    temp = long_neg((PyLongObject*)ndigits);
    do { if ( --((PyObject*)(ndigits))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(ndigits)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(ndigits)))); } while (0);
    ndigits = temp;
    if (ndigits == ((void *)0))
        return ((void *)0);

    result = PyLong_FromLong(10L);
    if (result == ((void *)0)) {
        do { if ( --((PyObject*)(ndigits))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(ndigits)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(ndigits)))); } while (0);
        return ((void *)0);
    }

    temp = long_pow(result, ndigits, (&_Py_NoneStruct));
    do { if ( --((PyObject*)(ndigits))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(ndigits)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(ndigits)))); } while (0);
    do { if ( --((PyObject*)(result))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(result)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(result)))); } while (0);
    result = temp;
    if (result == ((void *)0))
        return ((void *)0);

    temp = _PyLong_DivmodNear(self, result);
    do { if ( --((PyObject*)(result))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(result)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(result)))); } while (0);
    result = temp;
    if (result == ((void *)0))
        return ((void *)0);

    temp = long_sub((PyLongObject *)self,
                    (PyLongObject *)(((PyTupleObject *)(result))->ob_item[1]));
    do { if ( --((PyObject*)(result))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(result)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(result)))); } while (0);
    result = temp;

    return result;
}

static PyObject *
long_sizeof(PyLongObject *v)
{
    Py_ssize_t res;

    res = __builtin_offsetof (PyLongObject, ob_digit) + (((((PyVarObject*)(v))->ob_size)) < 0 ? -((((PyVarObject*)(v))->ob_size)) : ((((PyVarObject*)(v))->ob_size)))*sizeof(digit);
    return PyLong_FromSsize_t(res);
}

static PyObject *
long_bit_length(PyLongObject *v)
{
    PyLongObject *result, *x, *y;
    Py_ssize_t ndigits, msd_bits = 0;
    digit msd;

    (__builtin_expect(!(v != ((void *)0)), 0) ? __assert_rtn(__func__, "longobject.c", 4587, "v != NULL") : (void)0);
    (__builtin_expect(!(((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<24))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 4588, "PyLong_Check(v)") : (void)0);

    ndigits = (((((PyVarObject*)(v))->ob_size)) < 0 ? -((((PyVarObject*)(v))->ob_size)) : ((((PyVarObject*)(v))->ob_size)));
    if (ndigits == 0)
        return PyLong_FromLong(0);

    msd = v->ob_digit[ndigits-1];
    while (msd >= 32) {
        msd_bits += 6;
        msd >>= 6;
    }
    msd_bits += (long)(BitLengthTable[msd]);

    if (ndigits <= ((Py_ssize_t)(((size_t)-1)>>1))/30)
        return PyLong_FromSsize_t((ndigits-1)*30 + msd_bits);


    result = (PyLongObject *)PyLong_FromSsize_t(ndigits - 1);
    if (result == ((void *)0))
        return ((void *)0);
    x = (PyLongObject *)PyLong_FromLong(30);
    if (x == ((void *)0))
        goto error;
    y = (PyLongObject *)long_mul(result, x);
    do { if ( --((PyObject*)(x))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(x)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(x)))); } while (0);
    if (y == ((void *)0))
        goto error;
    do { if ( --((PyObject*)(result))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(result)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(result)))); } while (0);
    result = y;

    x = (PyLongObject *)PyLong_FromLong((long)msd_bits);
    if (x == ((void *)0))
        goto error;
    y = (PyLongObject *)long_add(result, x);
    do { if ( --((PyObject*)(x))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(x)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(x)))); } while (0);
    if (y == ((void *)0))
        goto error;
    do { if ( --((PyObject*)(result))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(result)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(result)))); } while (0);
    result = y;

    return (PyObject *)result;

  error:
    do { if ( --((PyObject*)(result))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(result)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(result)))); } while (0);
    return ((void *)0);
}

static char long_bit_length_doc[] = "int.bit_length() -> int\n\nNumber of bits necessary to represent self in binary.\n>>> bin(37)\n'0b100101'\n>>> (37).bit_length()\n6";
# 4653 "longobject.c"
static PyObject *
long_to_bytes(PyLongObject *v, PyObject *args, PyObject *kwds)
{
    PyObject *byteorder_str;
    PyObject *is_signed_obj = ((void *)0);
    Py_ssize_t length;
    int little_endian;
    int is_signed;
    PyObject *bytes;
    static char *kwlist[] = {"length", "byteorder", "signed", ((void *)0)};

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "nU|O:to_bytes", kwlist,
                                     &length, &byteorder_str,
                                     &is_signed_obj))
        return ((void *)0);

    if (args != ((void *)0) && (((PyVarObject*)(args))->ob_size) > 2) {
        PyErr_SetString(PyExc_TypeError,
            "'signed' is a keyword-only argument");
        return ((void *)0);
    }

    if (!PyUnicode_CompareWithASCIIString(byteorder_str, "little"))
        little_endian = 1;
    else if (!PyUnicode_CompareWithASCIIString(byteorder_str, "big"))
        little_endian = 0;
    else {
        PyErr_SetString(PyExc_ValueError,
            "byteorder must be either 'little' or 'big'");
        return ((void *)0);
    }

    if (is_signed_obj != ((void *)0)) {
        int cmp = PyObject_IsTrue(is_signed_obj);
        if (cmp < 0)
            return ((void *)0);
        is_signed = cmp ? 1 : 0;
    }
    else {


        is_signed = 0;
    }

    if (length < 0) {
        PyErr_SetString(PyExc_ValueError,
                        "length argument must be non-negative");
        return ((void *)0);
    }

    bytes = PyBytes_FromStringAndSize(((void *)0), length);
    if (bytes == ((void *)0))
        return ((void *)0);

    if (_PyLong_AsByteArray(v, (unsigned char *)((__builtin_expect(!(((((((PyObject*)(bytes))->ob_type))->tp_flags & ((1L<<27))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 4707, "PyBytes_Check(bytes)") : (void)0), (((PyBytesObject *)(bytes))->ob_sval)),
                            length, little_endian, is_signed) < 0) {
        do { if ( --((PyObject*)(bytes))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(bytes)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(bytes)))); } while (0);
        return ((void *)0);
    }

    return bytes;
}

static char long_to_bytes_doc[] = "int.to_bytes(length, byteorder, *, signed=False) -> bytes\n\nReturn an array of bytes representing an integer.\n\nThe integer is represented using length bytes.  An OverflowError is\nraised if the integer is not representable with the given number of\nbytes.\n\nThe byteorder argument determines the byte order used to represent the\ninteger.  If byteorder is 'big', the most significant byte is at the\nbeginning of the byte array.  If byteorder is 'little', the most\nsignificant byte is at the end of the byte array.  To request the native\nbyte order of the host system, use `sys.byteorder' as the byte order value.\n\nThe signed keyword-only argument determines whether two's complement is\nused to represent the integer.  If signed is False and a negative integer\nis given, an OverflowError is raised.";
# 4735 "longobject.c"
static PyObject *
long_from_bytes(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    PyObject *byteorder_str;
    PyObject *is_signed_obj = ((void *)0);
    int little_endian;
    int is_signed;
    PyObject *obj;
    PyObject *bytes;
    PyObject *long_obj;
    static char *kwlist[] = {"bytes", "byteorder", "signed", ((void *)0)};

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OU|O:from_bytes", kwlist,
                                     &obj, &byteorder_str,
                                     &is_signed_obj))
        return ((void *)0);

    if (args != ((void *)0) && (((PyVarObject*)(args))->ob_size) > 2) {
        PyErr_SetString(PyExc_TypeError,
            "'signed' is a keyword-only argument");
        return ((void *)0);
    }

    if (!PyUnicode_CompareWithASCIIString(byteorder_str, "little"))
        little_endian = 1;
    else if (!PyUnicode_CompareWithASCIIString(byteorder_str, "big"))
        little_endian = 0;
    else {
        PyErr_SetString(PyExc_ValueError,
            "byteorder must be either 'little' or 'big'");
        return ((void *)0);
    }

    if (is_signed_obj != ((void *)0)) {
        int cmp = PyObject_IsTrue(is_signed_obj);
        if (cmp < 0)
            return ((void *)0);
        is_signed = cmp ? 1 : 0;
    }
    else {


        is_signed = 0;
    }

    bytes = PyObject_Bytes(obj);
    if (bytes == ((void *)0))
        return ((void *)0);

    long_obj = _PyLong_FromByteArray(
        (unsigned char *)((__builtin_expect(!(((((((PyObject*)(bytes))->ob_type))->tp_flags & ((1L<<27))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 4785, "PyBytes_Check(bytes)") : (void)0), (((PyBytesObject *)(bytes))->ob_sval)), (((PyVarObject*)(bytes))->ob_size),
        little_endian, is_signed);
    do { if ( --((PyObject*)(bytes))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(bytes)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(bytes)))); } while (0);




    if (type != &PyLong_Type && PyType_IsSubtype(type, &PyLong_Type)) {
        PyLongObject *newobj;
        int i;
        Py_ssize_t n = (((((PyVarObject*)(long_obj))->ob_size)) < 0 ? -((((PyVarObject*)(long_obj))->ob_size)) : ((((PyVarObject*)(long_obj))->ob_size)));

        newobj = (PyLongObject *)type->tp_alloc(type, n);
        if (newobj == ((void *)0)) {
            do { if ( --((PyObject*)(long_obj))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(long_obj)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(long_obj)))); } while (0);
            return ((void *)0);
        }
        (__builtin_expect(!(((((((PyObject*)(newobj))->ob_type))->tp_flags & ((1L<<24))) != 0)), 0) ? __assert_rtn(__func__, "longobject.c", 4802, "PyLong_Check(newobj)") : (void)0);
        (((PyVarObject*)(newobj))->ob_size) = (((PyVarObject*)(long_obj))->ob_size);
        for (i = 0; i < n; i++) {
            newobj->ob_digit[i] =
                ((PyLongObject *)long_obj)->ob_digit[i];
        }
        do { if ( --((PyObject*)(long_obj))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(long_obj)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(long_obj)))); } while (0);
        return (PyObject *)newobj;
    }

    return long_obj;
}

static char long_from_bytes_doc[] = "int.from_bytes(bytes, byteorder, *, signed=False) -> int\n\nReturn the integer represented by the given array of bytes.\n\nThe bytes argument must either support the buffer protocol or be an\niterable object producing bytes.  Bytes and bytearray are examples of\nbuilt-in objects that support the buffer protocol.\n\nThe byteorder argument determines the byte order used to represent the\ninteger.  If byteorder is 'big', the most significant byte is at the\nbeginning of the byte array.  If byteorder is 'little', the most\nsignificant byte is at the end of the byte array.  To request the native\nbyte order of the host system, use `sys.byteorder' as the byte order value.\n\nThe signed keyword-only argument indicates whether two's complement is\nused to represent the integer.";
# 4833 "longobject.c"
static PyMethodDef long_methods[] = {
    {"conjugate", (PyCFunction)long_long, 0x0004,
     "Returns self, the complex conjugate of any int."},
    {"bit_length", (PyCFunction)long_bit_length, 0x0004,
     long_bit_length_doc},




    {"to_bytes", (PyCFunction)long_to_bytes,
     0x0001|0x0002, long_to_bytes_doc},
    {"from_bytes", (PyCFunction)long_from_bytes,
     0x0001|0x0002|0x0010, long_from_bytes_doc},
    {"__trunc__", (PyCFunction)long_long, 0x0004,
     "Truncating an Integral returns itself."},
    {"__floor__", (PyCFunction)long_long, 0x0004,
     "Flooring an Integral returns itself."},
    {"__ceil__", (PyCFunction)long_long, 0x0004,
     "Ceiling of an Integral returns itself."},
    {"__round__", (PyCFunction)long_round, 0x0001,
     "Rounding an Integral returns itself.\n"
     "Rounding with an ndigits argument also returns an integer."},
    {"__getnewargs__", (PyCFunction)long_getnewargs, 0x0004},
    {"__format__", (PyCFunction)long__format__, 0x0001},
    {"__sizeof__", (PyCFunction)long_sizeof, 0x0004,
     "Returns size in memory, in bytes"},
    {((void *)0), ((void *)0)}
};

static PyGetSetDef long_getset[] = {
    {"real",
     (getter)long_long, (setter)((void *)0),
     "the real part of a complex number",
     ((void *)0)},
    {"imag",
     (getter)long_get0, (setter)((void *)0),
     "the imaginary part of a complex number",
     ((void *)0)},
    {"numerator",
     (getter)long_long, (setter)((void *)0),
     "the numerator of a rational number in lowest terms",
     ((void *)0)},
    {"denominator",
     (getter)long_get1, (setter)((void *)0),
     "the denominator of a rational number in lowest terms",
     ((void *)0)},
    {((void *)0)}
};

static char long_doc[] = "int(x=0) -> integer\nint(x, base=10) -> integer\n\nConvert a number or string to an integer, or return 0 if no arguments\nare given.  If x is a number, return x.__int__().  For floating point\nnumbers, this truncates towards zero.\n\nIf x is not a number or if base is given, then x must be a string,\nbytes, or bytearray instance representing an integer literal in the\ngiven base.  The literal can be preceded by '+' or '-' and be surrounded\nby whitespace.  The base defaults to 10.  Valid bases are 0 and 2-36.\nBase 0 means to interpret the base from the string as an integer literal.\n>>> int('0b100', base=0)\n4";
# 4898 "longobject.c"
static PyNumberMethods long_as_number = {
    (binaryfunc)long_add,
    (binaryfunc)long_sub,
    (binaryfunc)long_mul,
    long_mod,
    long_divmod,
    long_pow,
    (unaryfunc)long_neg,
    (unaryfunc)long_long,
    (unaryfunc)long_abs,
    (inquiry)long_bool,
    (unaryfunc)long_invert,
    long_lshift,
    (binaryfunc)long_rshift,
    long_and,
    long_xor,
    long_or,
    long_long,
    0,
    long_float,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    long_div,
    long_true_divide,
    0,
    0,
    long_long,
};

PyTypeObject PyLong_Type = {
    { { 1, &PyType_Type }, 0 },
    "int",
    __builtin_offsetof (PyLongObject, ob_digit),
    sizeof(digit),
    long_dealloc,
    0,
    0,
    0,
    0,
    long_to_decimal_string,
    &long_as_number,
    0,
    0,
    (hashfunc)long_hash,
    0,
    long_to_decimal_string,
    PyObject_GenericGetAttr,
    0,
    0,
    ( 0 | (1L<<18) | 0) | (1L<<10) |
        (1L<<24),
    long_doc,
    0,
    0,
    long_richcompare,
    0,
    0,
    0,
    long_methods,
    0,
    long_getset,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    long_new,
    PyObject_Free,
};

static PyTypeObject Int_InfoType;

static char int_info__doc__[] = "sys.int_info\n\nA struct sequence that holds information about Python's\ninternal representation of integers.  The attributes are read only.";





static PyStructSequence_Field int_info_fields[] = {
    {"bits_per_digit", "size of a digit in bits"},
    {"sizeof_digit", "size in bytes of the C type used to represent a digit"},
    {((void *)0), ((void *)0)}
};

static PyStructSequence_Desc int_info_desc = {
    "sys.int_info",
    int_info__doc__,
    int_info_fields,
    2
};

PyObject *
PyLong_GetInfo(void)
{
    PyObject* int_info;
    int field = 0;
    int_info = PyStructSequence_New(&Int_InfoType);
    if (int_info == ((void *)0))
        return ((void *)0);
    (((PyTupleObject *)(int_info))->ob_item[field++] = PyLong_FromLong(30));

    (((PyTupleObject *)(int_info))->ob_item[field++] = PyLong_FromLong(sizeof(digit)));

    if (PyErr_Occurred()) {
        do { if (int_info) { PyObject *_py_tmp = (PyObject *)(int_info); (int_info) = ((void *)0); do { if ( --((PyObject*)(_py_tmp))->ob_refcnt != 0) ; else ( (*(((PyObject*)((PyObject *)(_py_tmp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(_py_tmp)))); } while (0); } } while (0);
        return ((void *)0);
    }
    return int_info;
}

int
_PyLong_Init(void)
{

    int ival, size;
    PyLongObject *v = small_ints;

    for (ival = -5; ival < 257; ival++, v++) {
        size = (ival < 0) ? -1 : ((ival == 0) ? 0 : 1);
        if ((((PyObject*)(v))->ob_type) == &PyLong_Type) {



            Py_ssize_t refcnt;
            PyObject* op = (PyObject*)v;

            refcnt = (((PyObject*)(op))->ob_refcnt) < 0 ? 0 : (((PyObject*)(op))->ob_refcnt);
            ( (((PyObject*)(op))->ob_refcnt) = 1);



            (((PyObject*)(op))->ob_refcnt) = refcnt + 1;
            (__builtin_expect(!((((PyVarObject*)(op))->ob_size) == size), 0) ? __assert_rtn(__func__, "longobject.c", 5040, "Py_SIZE(op) == size") : (void)0);
            (__builtin_expect(!(v->ob_digit[0] == abs(ival)), 0) ? __assert_rtn(__func__, "longobject.c", 5041, "v->ob_digit[0] == abs(ival)") : (void)0);
        }
        else {
            ( (((PyObject*)(v))->ob_type) = (&PyLong_Type), ( (((PyObject*)((PyObject *)(v)))->ob_refcnt) = 1), (v) );
        }
        (((PyVarObject*)(v))->ob_size) = size;
        v->ob_digit[0] = abs(ival);
    }


    if (Int_InfoType.tp_name == 0)
        PyStructSequence_InitType(&Int_InfoType, &int_info_desc);

    return 1;
}

void
PyLong_Fini(void)
{




    int i;
    PyLongObject *v = small_ints;
    for (i = 0; i < 5 + 257; i++, v++) {
        ;
        ;
    }

}