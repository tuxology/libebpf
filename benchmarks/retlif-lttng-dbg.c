#1 "retlif-lttng.c"
#1 "/home/suchakra/Projects/repos/libebpf/benchmarks//"
#1 "<built-in>"
#1 "<command-line>"
#1 "/usr/include/stdc-predef.h" 1 3 4
#1 "<command-line>" 2
#1 "retlif-lttng.c"
#1 "/usr/include/stdio.h" 1 3 4
#27 "/usr/include/stdio.h" 3 4
#1 "/usr/include/features.h" 1 3 4
#364 "/usr/include/features.h" 3 4
#1 "/usr/include/sys/cdefs.h" 1 3 4
#385 "/usr/include/sys/cdefs.h" 3 4
#1 "/usr/include/bits/wordsize.h" 1 3 4
#386 "/usr/include/sys/cdefs.h" 2 3 4
#365 "/usr/include/features.h" 2 3 4
#388 "/usr/include/features.h" 3 4
#1 "/usr/include/gnu/stubs.h" 1 3 4
#10 "/usr/include/gnu/stubs.h" 3 4
#1 "/usr/include/gnu/stubs-64.h" 1 3 4
#11 "/usr/include/gnu/stubs.h" 2 3 4
#389 "/usr/include/features.h" 2 3 4
#28 "/usr/include/stdio.h" 2 3 4





#1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stddef.h" 1 3 4
#212 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stddef.h" 3 4
typedef long unsigned int size_t;
#34 "/usr/include/stdio.h" 2 3 4

#1 "/usr/include/bits/types.h" 1 3 4
#27 "/usr/include/bits/types.h" 3 4
#1 "/usr/include/bits/wordsize.h" 1 3 4
#28 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#121 "/usr/include/bits/types.h" 3 4
#1 "/usr/include/bits/typesizes.h" 1 3 4
#122 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct
{
  int __val[2];
} __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void *__timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
#36 "/usr/include/stdio.h" 2 3 4
#44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





#64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
#74 "/usr/include/stdio.h" 3 4
#1 "/usr/include/libio.h" 1 3 4
#31 "/usr/include/libio.h" 3 4
#1 "/usr/include/_G_config.h" 1 3 4
#15 "/usr/include/_G_config.h" 3 4
#1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stddef.h" 1 3 4
#16 "/usr/include/_G_config.h" 2 3 4




#1 "/usr/include/wchar.h" 1 3 4
#82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
#21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
#32 "/usr/include/libio.h" 2 3 4
#49 "/usr/include/libio.h" 3 4
#1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stdarg.h" 1 3 4
#40 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
#50 "/usr/include/libio.h" 2 3 4
#144 "/usr/include/libio.h" 3 4
struct _IO_jump_t;
struct _IO_FILE;
#154 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker
{
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
#177 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
#245 "/usr/include/libio.h" 3 4
struct _IO_FILE
{
  int _flags;




  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
#293 "/usr/include/libio.h" 3 4
  __off64_t _offset;
#302 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
#338 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
				 size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t * __pos, int __w);


typedef int __io_close_fn (void *__cookie);
#390 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
#434 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE * __fp);
extern int _IO_putc (int __c, _IO_FILE * __fp);
extern int _IO_feof (_IO_FILE * __fp) __attribute__ ((__nothrow__, __leaf__));
extern int _IO_ferror (_IO_FILE * __fp)
  __attribute__ ((__nothrow__, __leaf__));

extern int _IO_peekc_locked (_IO_FILE * __fp);





extern void _IO_flockfile (_IO_FILE *)
  __attribute__ ((__nothrow__, __leaf__));
extern void _IO_funlockfile (_IO_FILE *)
  __attribute__ ((__nothrow__, __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *)
  __attribute__ ((__nothrow__, __leaf__));
#464 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char *__restrict,
			__gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE * __restrict, const char *__restrict,
			 __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *)
  __attribute__ ((__nothrow__, __leaf__));
#75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
#90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
#102 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;




#164 "/usr/include/stdio.h" 3 4
#1 "/usr/include/bits/stdio_lim.h" 1 3 4
#165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename)
  __attribute__ ((__nothrow__, __leaf__));

extern int rename (const char *__old, const char *__new)
  __attribute__ ((__nothrow__, __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
		     const char *__new)
  __attribute__ ((__nothrow__, __leaf__));








extern FILE *tmpfile (void);
#209 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__, __leaf__));





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__, __leaf__));
#227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__malloc__));








extern int fclose (FILE * __stream);




extern int fflush (FILE * __stream);

#252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE * __stream);
#266 "/usr/include/stdio.h" 3 4






extern FILE *fopen (const char *__restrict __filename,
		    const char *__restrict __modes);




extern FILE *freopen (const char *__restrict __filename,
		      const char *__restrict __modes,
		      FILE * __restrict __stream);
#295 "/usr/include/stdio.h" 3 4

#306 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes)
  __attribute__ ((__nothrow__, __leaf__));
#319 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__, __leaf__));




extern FILE *open_memstream (char **__bufloc, size_t * __sizeloc)
  __attribute__ ((__nothrow__, __leaf__));






extern void setbuf (FILE * __restrict __stream, char *__restrict __buf)
  __attribute__ ((__nothrow__, __leaf__));



extern int setvbuf (FILE * __restrict __stream, char *__restrict __buf,
		    int __modes, size_t __n)
  __attribute__ ((__nothrow__, __leaf__));





extern void setbuffer (FILE * __restrict __stream, char *__restrict __buf,
		       size_t __size) __attribute__ ((__nothrow__, __leaf__));


extern void setlinebuf (FILE * __stream)
  __attribute__ ((__nothrow__, __leaf__));








extern int fprintf (FILE * __restrict __stream,
		    const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
		    const char *__restrict __format, ...)
  __attribute__ ((__nothrow__));





extern int vfprintf (FILE * __restrict __s, const char *__restrict __format,
		     __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
		     __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
		     const char *__restrict __format, ...)
  __attribute__ ((__nothrow__))
  __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
		      const char *__restrict __format, __gnuc_va_list __arg)
  __attribute__ ((__nothrow__))
  __attribute__ ((__format__ (__printf__, 3, 0)));

#412 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
		     __gnuc_va_list __arg)
  __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
  __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE * __restrict __stream,
		   const char *__restrict __format, ...);




extern int scanf (const char *__restrict __format, ...);

extern int sscanf (const char *__restrict __s,
		   const char *__restrict __format, ...)
  __attribute__ ((__nothrow__, __leaf__));
#443 "/usr/include/stdio.h" 3 4
extern int
fscanf (FILE * __restrict __stream, const char *__restrict __format, ...)
__asm__ ("" "__isoc99_fscanf");
     extern int scanf (const char *__restrict __format,
		       ...) __asm__ ("" "__isoc99_scanf");
     extern int sscanf (const char *__restrict __s,
			const char *__restrict __format,
			...) __asm__ ("" "__isoc99_sscanf")
  __attribute__ ((__nothrow__, __leaf__));
#463 "/usr/include/stdio.h" 3 4








     extern int vfscanf (FILE * __restrict __s,
			 const char *__restrict __format,
			 __gnuc_va_list __arg)
  __attribute__ ((__format__ (__scanf__, 2, 0)));





     extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
  __attribute__ ((__format__ (__scanf__, 1, 0)));


     extern int vsscanf (const char *__restrict __s,
			 const char *__restrict __format,
			 __gnuc_va_list __arg)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__format__ (__scanf__, 2, 0)));
#494 "/usr/include/stdio.h" 3 4
     extern int vfscanf (FILE * __restrict __s,
			 const char *__restrict __format,
			 __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")
  __attribute__ ((__format__ (__scanf__, 2, 0)));
     extern int vscanf (const char *__restrict __format,
			__gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")
  __attribute__ ((__format__ (__scanf__, 1, 0)));
     extern int vsscanf (const char *__restrict __s,
			 const char *__restrict __format,
			 __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf")
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__format__ (__scanf__, 2, 0)));
#522 "/usr/include/stdio.h" 3 4









     extern int fgetc (FILE * __stream);
     extern int getc (FILE * __stream);





     extern int getchar (void);

#550 "/usr/include/stdio.h" 3 4
     extern int getc_unlocked (FILE * __stream);
     extern int getchar_unlocked (void);
#561 "/usr/include/stdio.h" 3 4
     extern int fgetc_unlocked (FILE * __stream);











     extern int fputc (int __c, FILE * __stream);
     extern int putc (int __c, FILE * __stream);





     extern int putchar (int __c);

#594 "/usr/include/stdio.h" 3 4
     extern int fputc_unlocked (int __c, FILE * __stream);







     extern int putc_unlocked (int __c, FILE * __stream);
     extern int putchar_unlocked (int __c);






     extern int getw (FILE * __stream);


     extern int putw (int __w, FILE * __stream);








     extern char *fgets (char *__restrict __s, int __n,
			 FILE * __restrict __stream);
#638 "/usr/include/stdio.h" 3 4
     extern char *gets (char *__s) __attribute__ ((__deprecated__));


#665 "/usr/include/stdio.h" 3 4
     extern __ssize_t __getdelim (char **__restrict __lineptr,
				  size_t * __restrict __n, int __delimiter,
				  FILE * __restrict __stream);
     extern __ssize_t getdelim (char **__restrict __lineptr,
				size_t * __restrict __n, int __delimiter,
				FILE * __restrict __stream);







     extern __ssize_t getline (char **__restrict __lineptr,
			       size_t * __restrict __n,
			       FILE * __restrict __stream);








     extern int fputs (const char *__restrict __s,
		       FILE * __restrict __stream);





     extern int puts (const char *__s);






     extern int ungetc (int __c, FILE * __stream);






     extern size_t fread (void *__restrict __ptr, size_t __size,
			  size_t __n, FILE * __restrict __stream);




     extern size_t fwrite (const void *__restrict __ptr, size_t __size,
			   size_t __n, FILE * __restrict __s);

#737 "/usr/include/stdio.h" 3 4
     extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
				   size_t __n, FILE * __restrict __stream);
     extern size_t fwrite_unlocked (const void *__restrict __ptr,
				    size_t __size, size_t __n,
				    FILE * __restrict __stream);








     extern int fseek (FILE * __stream, long int __off, int __whence);




     extern long int ftell (FILE * __stream);




     extern void rewind (FILE * __stream);

#773 "/usr/include/stdio.h" 3 4
     extern int fseeko (FILE * __stream, __off_t __off, int __whence);




     extern __off_t ftello (FILE * __stream);
#792 "/usr/include/stdio.h" 3 4






     extern int fgetpos (FILE * __restrict __stream,
			 fpos_t * __restrict __pos);




     extern int fsetpos (FILE * __stream, const fpos_t * __pos);
#815 "/usr/include/stdio.h" 3 4

#824 "/usr/include/stdio.h" 3 4


     extern void clearerr (FILE * __stream)
  __attribute__ ((__nothrow__, __leaf__));

     extern int feof (FILE * __stream)
  __attribute__ ((__nothrow__, __leaf__));

     extern int ferror (FILE * __stream)
  __attribute__ ((__nothrow__, __leaf__));




     extern void clearerr_unlocked (FILE * __stream)
  __attribute__ ((__nothrow__, __leaf__));
     extern int feof_unlocked (FILE * __stream)
  __attribute__ ((__nothrow__, __leaf__));
     extern int ferror_unlocked (FILE * __stream)
  __attribute__ ((__nothrow__, __leaf__));








     extern void perror (const char *__s);






#1 "/usr/include/bits/sys_errlist.h" 1 3 4
#26 "/usr/include/bits/sys_errlist.h" 3 4
     extern int sys_nerr;
     extern const char *const sys_errlist[];
#854 "/usr/include/stdio.h" 2 3 4




     extern int fileno (FILE * __stream)
  __attribute__ ((__nothrow__, __leaf__));




     extern int fileno_unlocked (FILE * __stream)
  __attribute__ ((__nothrow__, __leaf__));
#873 "/usr/include/stdio.h" 3 4
     extern FILE *popen (const char *__command, const char *__modes);





     extern int pclose (FILE * __stream);





     extern char *ctermid (char *__s) __attribute__ ((__nothrow__, __leaf__));
#913 "/usr/include/stdio.h" 3 4
     extern void flockfile (FILE * __stream)
  __attribute__ ((__nothrow__, __leaf__));



     extern int ftrylockfile (FILE * __stream)
  __attribute__ ((__nothrow__, __leaf__));


     extern void funlockfile (FILE * __stream)
  __attribute__ ((__nothrow__, __leaf__));
#943 "/usr/include/stdio.h" 3 4

#2 "retlif-lttng.c" 2
#1 "/usr/include/stdlib.h" 1 3 4
#32 "/usr/include/stdlib.h" 3 4
#1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stddef.h" 1 3 4
#324 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stddef.h" 3 4
     typedef int wchar_t;
#33 "/usr/include/stdlib.h" 2 3 4








#1 "/usr/include/bits/waitflags.h" 1 3 4
#42 "/usr/include/stdlib.h" 2 3 4
#1 "/usr/include/bits/waitstatus.h" 1 3 4
#64 "/usr/include/bits/waitstatus.h" 3 4
#1 "/usr/include/endian.h" 1 3 4
#36 "/usr/include/endian.h" 3 4
#1 "/usr/include/bits/endian.h" 1 3 4
#37 "/usr/include/endian.h" 2 3 4
#60 "/usr/include/endian.h" 3 4
#1 "/usr/include/bits/byteswap.h" 1 3 4
#28 "/usr/include/bits/byteswap.h" 3 4
#1 "/usr/include/bits/wordsize.h" 1 3 4
#29 "/usr/include/bits/byteswap.h" 2 3 4






#1 "/usr/include/bits/byteswap-16.h" 1 3 4
#36 "/usr/include/bits/byteswap.h" 2 3 4
#44 "/usr/include/bits/byteswap.h" 3 4
     static __inline unsigned int __bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}

#108 "/usr/include/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}

#61 "/usr/include/endian.h" 2 3 4
#65 "/usr/include/bits/waitstatus.h" 2 3 4

union wait
{
  int w_status;
  struct
  {

    unsigned int __w_termsig:7;
    unsigned int __w_coredump:1;
    unsigned int __w_retcode:8;
    unsigned int:16;







  } __wait_terminated;
  struct
  {

    unsigned int __w_stopval:8;
    unsigned int __w_stopsig:8;
    unsigned int:16;






  } __wait_stopped;
};
#43 "/usr/include/stdlib.h" 2 3 4
#67 "/usr/include/stdlib.h" 3 4
typedef union
{
  union wait *__uptr;
  int *__iptr;
} __WAIT_STATUS __attribute__ ((__transparent_union__));
#95 "/usr/include/stdlib.h" 3 4


typedef struct
{
  int quot;
  int rem;
} div_t;



typedef struct
{
  long int quot;
  long int rem;
} ldiv_t;







__extension__ typedef struct
{
  long long int quot;
  long long int rem;
} lldiv_t;


#139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void)
  __attribute__ ((__nothrow__, __leaf__));




extern double atof (const char *__nptr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1)));

extern int atoi (const char *__nptr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1)));

extern long int atol (const char *__nptr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1)));





__extension__ extern long long int atoll (const char *__nptr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1)));





extern double strtod (const char *__restrict __nptr,
		      char **__restrict __endptr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
		     char **__restrict __endptr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
			    char **__restrict __endptr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
			char **__restrict __endptr, int __base)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
				  char **__restrict __endptr, int __base)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
  extern long long int strtoq (const char *__restrict __nptr,
			       char **__restrict __endptr, int __base)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
  extern unsigned long long int strtouq (const char *__restrict __nptr,
					 char **__restrict __endptr,
					 int __base)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
  extern long long int strtoll (const char *__restrict __nptr,
				char **__restrict __endptr, int __base)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
  extern unsigned long long int strtoull (const char *__restrict __nptr,
					  char **__restrict __endptr,
					  int __base)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));

#305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__, __leaf__));


extern long int a64l (const char *__s)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1)));




#1 "/usr/include/sys/types.h" 1 3 4
#27 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
#60 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
#98 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
#115 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
#132 "/usr/include/sys/types.h" 3 4
#1 "/usr/include/time.h" 1 3 4
#57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



#73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



#91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
#103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
#133 "/usr/include/sys/types.h" 2 3 4
#146 "/usr/include/sys/types.h" 3 4
#1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stddef.h" 1 3 4
#147 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#194 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
#219 "/usr/include/sys/types.h" 3 4
#1 "/usr/include/sys/select.h" 1 3 4
#30 "/usr/include/sys/select.h" 3 4
#1 "/usr/include/bits/select.h" 1 3 4
#22 "/usr/include/bits/select.h" 3 4
#1 "/usr/include/bits/wordsize.h" 1 3 4
#23 "/usr/include/bits/select.h" 2 3 4
#31 "/usr/include/sys/select.h" 2 3 4


#1 "/usr/include/bits/sigset.h" 1 3 4
#22 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
#34 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





#1 "/usr/include/time.h" 1 3 4
#120 "/usr/include/time.h" 3 4
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
#44 "/usr/include/sys/select.h" 2 3 4

#1 "/usr/include/bits/time.h" 1 3 4
#30 "/usr/include/bits/time.h" 3 4
struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
#46 "/usr/include/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
#64 "/usr/include/sys/select.h" 3 4
typedef struct
{






  __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


}
fd_set;






typedef __fd_mask fd_mask;
#96 "/usr/include/sys/select.h" 3 4

#106 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set * __restrict __readfds,
		   fd_set * __restrict __writefds,
		   fd_set * __restrict __exceptfds,
		   struct timeval *__restrict __timeout);
#118 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set * __restrict __readfds,
		    fd_set * __restrict __writefds,
		    fd_set * __restrict __exceptfds,
		    const struct timespec *__restrict __timeout,
		    const __sigset_t * __restrict __sigmask);
#131 "/usr/include/sys/select.h" 3 4

#220 "/usr/include/sys/types.h" 2 3 4


#1 "/usr/include/sys/sysmacros.h" 1 3 4
#24 "/usr/include/sys/sysmacros.h" 3 4


__extension__
  extern unsigned int gnu_dev_major (unsigned long long int __dev)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__const__));
__extension__
  extern unsigned int gnu_dev_minor (unsigned long long int __dev)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__const__));
__extension__
  extern unsigned long long int gnu_dev_makedev (unsigned int __major,
						 unsigned int __minor)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__const__));
#58 "/usr/include/sys/sysmacros.h" 3 4

#223 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
#270 "/usr/include/sys/types.h" 3 4
#1 "/usr/include/bits/pthreadtypes.h" 1 3 4
#21 "/usr/include/bits/pthreadtypes.h" 3 4
#1 "/usr/include/bits/wordsize.h" 1 3 4
#22 "/usr/include/bits/pthreadtypes.h" 2 3 4
#60 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
#90 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
#124 "/usr/include/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
#211 "/usr/include/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
#271 "/usr/include/sys/types.h" 2 3 4



#315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__, __leaf__));


extern void srandom (unsigned int __seed)
  __attribute__ ((__nothrow__, __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
			size_t __statelen)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
{
  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};

extern int random_r (struct random_data *__restrict __buf,
		     int32_t * __restrict __result)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
			size_t __statelen,
			struct random_data *__restrict __buf)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
		       struct random_data *__restrict __buf)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__, __leaf__));

extern void srand (unsigned int __seed)
  __attribute__ ((__nothrow__, __leaf__));




extern int rand_r (unsigned int *__seed)
  __attribute__ ((__nothrow__, __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__, __leaf__));
extern double erand48 (unsigned short int __xsubi[3])
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__, __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__, __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval)
  __attribute__ ((__nothrow__, __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7])
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
{
  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  __extension__ unsigned long long int __a;

};


extern int drand48_r (struct drand48_data *__restrict __buffer,
		      double *__restrict __result)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__restrict __buffer,
		      double *__restrict __result)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
		     struct drand48_data *__buffer)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
		      struct drand48_data *__buffer)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__malloc__));

extern void *calloc (size_t __nmemb, size_t __size)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__malloc__));










extern void *realloc (void *__ptr, size_t __size)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__, __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__, __leaf__));



#1 "/usr/include/alloca.h" 1 3 4
#24 "/usr/include/alloca.h" 3 4
#1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stddef.h" 1 3 4
#25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__, __leaf__));






#493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__malloc__));




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));
#513 "/usr/include/stdlib.h" 3 4


extern void abort (void) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void))
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));
#530 "/usr/include/stdlib.h" 3 4





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__noreturn__));













extern void _Exit (int __status) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__noreturn__));






extern char *getenv (const char *__name)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));

#578 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__, __leaf__));
#606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1)));
#620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1)));
#642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen)
  __attribute__ ((__nonnull__ (1)));
#663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));
#712 "/usr/include/stdlib.h" 3 4





extern int system (const char *__command);

#734 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
		       char *__restrict __resolved)
  __attribute__ ((__nothrow__, __leaf__));






typedef int (*__compar_fn_t) (const void *, const void *);
#752 "/usr/include/stdlib.h" 3 4



extern void *bsearch (const void *__key, const void *__base,
		      size_t __nmemb, size_t __size, __compar_fn_t __compar)
  __attribute__ ((__nonnull__ (1, 2, 5)));







extern void qsort (void *__base, size_t __nmemb, size_t __size,
		   __compar_fn_t __compar)
  __attribute__ ((__nonnull__ (1, 4)));
#775 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__const__));
extern long int labs (long int __x) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__const__));



__extension__ extern long long int llabs (long long int __x)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__const__));







extern div_t div (int __numer, int __denom)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__const__));
extern ldiv_t ldiv (long int __numer, long int __denom)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__const__));




__extension__ extern lldiv_t lldiv (long long int __numer,
				    long long int __denom)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__const__));

#812 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (3, 4)));




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (3, 4)));




extern char *gcvt (double __value, int __ndigit, char *__buf)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (3)));




extern char *qecvt (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (3, 4)));
extern char *qfcvt (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (3, 4)));
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (3)));




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign, char *__restrict __buf,
		   size_t __len) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign, char *__restrict __buf,
		   size_t __len) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign,
		    char *__restrict __buf, size_t __len)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign,
		    char *__restrict __buf, size_t __len)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n)
  __attribute__ ((__nothrow__, __leaf__));


extern int mbtowc (wchar_t * __restrict __pwc,
		   const char *__restrict __s, size_t __n)
  __attribute__ ((__nothrow__, __leaf__));


extern int wctomb (char *__s, wchar_t __wchar)
  __attribute__ ((__nothrow__, __leaf__));



extern size_t mbstowcs (wchar_t * __restrict __pwcs,
			const char *__restrict __s, size_t __n)
  __attribute__ ((__nothrow__, __leaf__));

extern size_t wcstombs (char *__restrict __s,
			const wchar_t * __restrict __pwcs, size_t __n)
  __attribute__ ((__nothrow__, __leaf__));








extern int rpmatch (const char *__response)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));
#899 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
		      char *const *__restrict __tokens,
		      char **__restrict __valuep)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2, 3)));
#951 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


#1 "/usr/include/bits/stdlib-float.h" 1 3 4
#956 "/usr/include/stdlib.h" 2 3 4
#968 "/usr/include/stdlib.h" 3 4

#3 "retlif-lttng.c" 2
#1 "/usr/include/unistd.h" 1 3 4
#27 "/usr/include/unistd.h" 3 4

#202 "/usr/include/unistd.h" 3 4
#1 "/usr/include/bits/posix_opt.h" 1 3 4
#203 "/usr/include/unistd.h" 2 3 4



#1 "/usr/include/bits/environments.h" 1 3 4
#22 "/usr/include/bits/environments.h" 3 4
#1 "/usr/include/bits/wordsize.h" 1 3 4
#23 "/usr/include/bits/environments.h" 2 3 4
#207 "/usr/include/unistd.h" 2 3 4
#226 "/usr/include/unistd.h" 3 4
#1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stddef.h" 1 3 4
#227 "/usr/include/unistd.h" 2 3 4
#255 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;
#267 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
#287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));
#304 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (2)));
#334 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence)
  __attribute__ ((__nothrow__, __leaf__));
#353 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes);





extern ssize_t write (int __fd, const void *__buf, size_t __n);
#376 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
		      __off_t __offset);






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
		       __off_t __offset);
#417 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__, __leaf__));
#432 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds)
  __attribute__ ((__nothrow__, __leaf__));
#444 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
  __attribute__ ((__nothrow__, __leaf__));






extern int usleep (__useconds_t __useconds);
#469 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int fchown (int __fd, __uid_t __owner, __gid_t __group)
  __attribute__ ((__nothrow__, __leaf__));




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
		     __gid_t __group, int __flag)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int chdir (const char *__path) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1)));



extern int fchdir (int __fd) __attribute__ ((__nothrow__, __leaf__));
#511 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size)
  __attribute__ ((__nothrow__, __leaf__));
#525 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)))
  __attribute__ ((__deprecated__));




extern int dup (int __fd) __attribute__ ((__nothrow__, __leaf__));


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__, __leaf__));
#543 "/usr/include/unistd.h" 3 4
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
		   char *const __envp[])
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));
#598 "/usr/include/unistd.h" 3 4
extern int nice (int __inc) __attribute__ ((__nothrow__, __leaf__));




extern void _exit (int __status) __attribute__ ((__noreturn__));





#1 "/usr/include/bits/confname.h" 1 3 4
#24 "/usr/include/bits/confname.h" 3 4
enum
{
  _PC_LINK_MAX,

  _PC_MAX_CANON,

  _PC_MAX_INPUT,

  _PC_NAME_MAX,

  _PC_PATH_MAX,

  _PC_PIPE_BUF,

  _PC_CHOWN_RESTRICTED,

  _PC_NO_TRUNC,

  _PC_VDISABLE,

  _PC_SYNC_IO,

  _PC_ASYNC_IO,

  _PC_PRIO_IO,

  _PC_SOCK_MAXBUF,

  _PC_FILESIZEBITS,

  _PC_REC_INCR_XFER_SIZE,

  _PC_REC_MAX_XFER_SIZE,

  _PC_REC_MIN_XFER_SIZE,

  _PC_REC_XFER_ALIGN,

  _PC_ALLOC_SIZE_MIN,

  _PC_SYMLINK_MAX,

  _PC_2_SYMLINKS
};


enum
{
  _SC_ARG_MAX,

  _SC_CHILD_MAX,

  _SC_CLK_TCK,

  _SC_NGROUPS_MAX,

  _SC_OPEN_MAX,

  _SC_STREAM_MAX,

  _SC_TZNAME_MAX,

  _SC_JOB_CONTROL,

  _SC_SAVED_IDS,

  _SC_REALTIME_SIGNALS,

  _SC_PRIORITY_SCHEDULING,

  _SC_TIMERS,

  _SC_ASYNCHRONOUS_IO,

  _SC_PRIORITIZED_IO,

  _SC_SYNCHRONIZED_IO,

  _SC_FSYNC,

  _SC_MAPPED_FILES,

  _SC_MEMLOCK,

  _SC_MEMLOCK_RANGE,

  _SC_MEMORY_PROTECTION,

  _SC_MESSAGE_PASSING,

  _SC_SEMAPHORES,

  _SC_SHARED_MEMORY_OBJECTS,

  _SC_AIO_LISTIO_MAX,

  _SC_AIO_MAX,

  _SC_AIO_PRIO_DELTA_MAX,

  _SC_DELAYTIMER_MAX,

  _SC_MQ_OPEN_MAX,

  _SC_MQ_PRIO_MAX,

  _SC_VERSION,

  _SC_PAGESIZE,


  _SC_RTSIG_MAX,

  _SC_SEM_NSEMS_MAX,

  _SC_SEM_VALUE_MAX,

  _SC_SIGQUEUE_MAX,

  _SC_TIMER_MAX,




  _SC_BC_BASE_MAX,

  _SC_BC_DIM_MAX,

  _SC_BC_SCALE_MAX,

  _SC_BC_STRING_MAX,

  _SC_COLL_WEIGHTS_MAX,

  _SC_EQUIV_CLASS_MAX,

  _SC_EXPR_NEST_MAX,

  _SC_LINE_MAX,

  _SC_RE_DUP_MAX,

  _SC_CHARCLASS_NAME_MAX,


  _SC_2_VERSION,

  _SC_2_C_BIND,

  _SC_2_C_DEV,

  _SC_2_FORT_DEV,

  _SC_2_FORT_RUN,

  _SC_2_SW_DEV,

  _SC_2_LOCALEDEF,


  _SC_PII,

  _SC_PII_XTI,

  _SC_PII_SOCKET,

  _SC_PII_INTERNET,

  _SC_PII_OSI,

  _SC_POLL,

  _SC_SELECT,

  _SC_UIO_MAXIOV,

  _SC_IOV_MAX = _SC_UIO_MAXIOV,

  _SC_PII_INTERNET_STREAM,

  _SC_PII_INTERNET_DGRAM,

  _SC_PII_OSI_COTS,

  _SC_PII_OSI_CLTS,

  _SC_PII_OSI_M,

  _SC_T_IOV_MAX,



  _SC_THREADS,

  _SC_THREAD_SAFE_FUNCTIONS,

  _SC_GETGR_R_SIZE_MAX,

  _SC_GETPW_R_SIZE_MAX,

  _SC_LOGIN_NAME_MAX,

  _SC_TTY_NAME_MAX,

  _SC_THREAD_DESTRUCTOR_ITERATIONS,

  _SC_THREAD_KEYS_MAX,

  _SC_THREAD_STACK_MIN,

  _SC_THREAD_THREADS_MAX,

  _SC_THREAD_ATTR_STACKADDR,

  _SC_THREAD_ATTR_STACKSIZE,

  _SC_THREAD_PRIORITY_SCHEDULING,

  _SC_THREAD_PRIO_INHERIT,

  _SC_THREAD_PRIO_PROTECT,

  _SC_THREAD_PROCESS_SHARED,


  _SC_NPROCESSORS_CONF,

  _SC_NPROCESSORS_ONLN,

  _SC_PHYS_PAGES,

  _SC_AVPHYS_PAGES,

  _SC_ATEXIT_MAX,

  _SC_PASS_MAX,


  _SC_XOPEN_VERSION,

  _SC_XOPEN_XCU_VERSION,

  _SC_XOPEN_UNIX,

  _SC_XOPEN_CRYPT,

  _SC_XOPEN_ENH_I18N,

  _SC_XOPEN_SHM,


  _SC_2_CHAR_TERM,

  _SC_2_C_VERSION,

  _SC_2_UPE,


  _SC_XOPEN_XPG2,

  _SC_XOPEN_XPG3,

  _SC_XOPEN_XPG4,


  _SC_CHAR_BIT,

  _SC_CHAR_MAX,

  _SC_CHAR_MIN,

  _SC_INT_MAX,

  _SC_INT_MIN,

  _SC_LONG_BIT,

  _SC_WORD_BIT,

  _SC_MB_LEN_MAX,

  _SC_NZERO,

  _SC_SSIZE_MAX,

  _SC_SCHAR_MAX,

  _SC_SCHAR_MIN,

  _SC_SHRT_MAX,

  _SC_SHRT_MIN,

  _SC_UCHAR_MAX,

  _SC_UINT_MAX,

  _SC_ULONG_MAX,

  _SC_USHRT_MAX,


  _SC_NL_ARGMAX,

  _SC_NL_LANGMAX,

  _SC_NL_MSGMAX,

  _SC_NL_NMAX,

  _SC_NL_SETMAX,

  _SC_NL_TEXTMAX,


  _SC_XBS5_ILP32_OFF32,

  _SC_XBS5_ILP32_OFFBIG,

  _SC_XBS5_LP64_OFF64,

  _SC_XBS5_LPBIG_OFFBIG,


  _SC_XOPEN_LEGACY,

  _SC_XOPEN_REALTIME,

  _SC_XOPEN_REALTIME_THREADS,


  _SC_ADVISORY_INFO,

  _SC_BARRIERS,

  _SC_BASE,

  _SC_C_LANG_SUPPORT,

  _SC_C_LANG_SUPPORT_R,

  _SC_CLOCK_SELECTION,

  _SC_CPUTIME,

  _SC_THREAD_CPUTIME,

  _SC_DEVICE_IO,

  _SC_DEVICE_SPECIFIC,

  _SC_DEVICE_SPECIFIC_R,

  _SC_FD_MGMT,

  _SC_FIFO,

  _SC_PIPE,

  _SC_FILE_ATTRIBUTES,

  _SC_FILE_LOCKING,

  _SC_FILE_SYSTEM,

  _SC_MONOTONIC_CLOCK,

  _SC_MULTI_PROCESS,

  _SC_SINGLE_PROCESS,

  _SC_NETWORKING,

  _SC_READER_WRITER_LOCKS,

  _SC_SPIN_LOCKS,

  _SC_REGEXP,

  _SC_REGEX_VERSION,

  _SC_SHELL,

  _SC_SIGNALS,

  _SC_SPAWN,

  _SC_SPORADIC_SERVER,

  _SC_THREAD_SPORADIC_SERVER,

  _SC_SYSTEM_DATABASE,

  _SC_SYSTEM_DATABASE_R,

  _SC_TIMEOUTS,

  _SC_TYPED_MEMORY_OBJECTS,

  _SC_USER_GROUPS,

  _SC_USER_GROUPS_R,

  _SC_2_PBS,

  _SC_2_PBS_ACCOUNTING,

  _SC_2_PBS_LOCATE,

  _SC_2_PBS_MESSAGE,

  _SC_2_PBS_TRACK,

  _SC_SYMLOOP_MAX,

  _SC_STREAMS,

  _SC_2_PBS_CHECKPOINT,


  _SC_V6_ILP32_OFF32,

  _SC_V6_ILP32_OFFBIG,

  _SC_V6_LP64_OFF64,

  _SC_V6_LPBIG_OFFBIG,


  _SC_HOST_NAME_MAX,

  _SC_TRACE,

  _SC_TRACE_EVENT_FILTER,

  _SC_TRACE_INHERIT,

  _SC_TRACE_LOG,


  _SC_LEVEL1_ICACHE_SIZE,

  _SC_LEVEL1_ICACHE_ASSOC,

  _SC_LEVEL1_ICACHE_LINESIZE,

  _SC_LEVEL1_DCACHE_SIZE,

  _SC_LEVEL1_DCACHE_ASSOC,

  _SC_LEVEL1_DCACHE_LINESIZE,

  _SC_LEVEL2_CACHE_SIZE,

  _SC_LEVEL2_CACHE_ASSOC,

  _SC_LEVEL2_CACHE_LINESIZE,

  _SC_LEVEL3_CACHE_SIZE,

  _SC_LEVEL3_CACHE_ASSOC,

  _SC_LEVEL3_CACHE_LINESIZE,

  _SC_LEVEL4_CACHE_SIZE,

  _SC_LEVEL4_CACHE_ASSOC,

  _SC_LEVEL4_CACHE_LINESIZE,



  _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

  _SC_RAW_SOCKETS,


  _SC_V7_ILP32_OFF32,

  _SC_V7_ILP32_OFFBIG,

  _SC_V7_LP64_OFF64,

  _SC_V7_LPBIG_OFFBIG,


  _SC_SS_REPL_MAX,


  _SC_TRACE_EVENT_NAME_MAX,

  _SC_TRACE_NAME_MAX,

  _SC_TRACE_SYS_MAX,

  _SC_TRACE_USER_EVENT_MAX,


  _SC_XOPEN_STREAMS,


  _SC_THREAD_ROBUST_PRIO_INHERIT,

  _SC_THREAD_ROBUST_PRIO_PROTECT
};


enum
{
  _CS_PATH,


  _CS_V6_WIDTH_RESTRICTED_ENVS,



  _CS_GNU_LIBC_VERSION,

  _CS_GNU_LIBPTHREAD_VERSION,


  _CS_V5_WIDTH_RESTRICTED_ENVS,



  _CS_V7_WIDTH_RESTRICTED_ENVS,



  _CS_LFS_CFLAGS = 1000,

  _CS_LFS_LDFLAGS,

  _CS_LFS_LIBS,

  _CS_LFS_LINTFLAGS,

  _CS_LFS64_CFLAGS,

  _CS_LFS64_LDFLAGS,

  _CS_LFS64_LIBS,

  _CS_LFS64_LINTFLAGS,


  _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

  _CS_XBS5_ILP32_OFF32_LDFLAGS,

  _CS_XBS5_ILP32_OFF32_LIBS,

  _CS_XBS5_ILP32_OFF32_LINTFLAGS,

  _CS_XBS5_ILP32_OFFBIG_CFLAGS,

  _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

  _CS_XBS5_ILP32_OFFBIG_LIBS,

  _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

  _CS_XBS5_LP64_OFF64_CFLAGS,

  _CS_XBS5_LP64_OFF64_LDFLAGS,

  _CS_XBS5_LP64_OFF64_LIBS,

  _CS_XBS5_LP64_OFF64_LINTFLAGS,

  _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

  _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

  _CS_XBS5_LPBIG_OFFBIG_LIBS,

  _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


  _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

  _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

  _CS_POSIX_V6_ILP32_OFF32_LIBS,

  _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

  _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

  _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

  _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

  _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

  _CS_POSIX_V6_LP64_OFF64_CFLAGS,

  _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

  _CS_POSIX_V6_LP64_OFF64_LIBS,

  _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

  _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

  _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

  _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

  _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


  _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

  _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

  _CS_POSIX_V7_ILP32_OFF32_LIBS,

  _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

  _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

  _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

  _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

  _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

  _CS_POSIX_V7_LP64_OFF64_CFLAGS,

  _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

  _CS_POSIX_V7_LP64_OFF64_LIBS,

  _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

  _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

  _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

  _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

  _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


  _CS_V6_ENV,

  _CS_V7_ENV
};
#610 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name)
  __attribute__ ((__nothrow__, __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__, __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len)
  __attribute__ ((__nothrow__, __leaf__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__, __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__, __leaf__));




extern __pid_t getpgrp (void) __attribute__ ((__nothrow__, __leaf__));
#646 "/usr/include/unistd.h" 3 4
extern __pid_t __getpgid (__pid_t __pid)
  __attribute__ ((__nothrow__, __leaf__));

extern __pid_t getpgid (__pid_t __pid)
  __attribute__ ((__nothrow__, __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid)
  __attribute__ ((__nothrow__, __leaf__));
#672 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__, __leaf__));
#689 "/usr/include/unistd.h" 3 4
extern __pid_t setsid (void) __attribute__ ((__nothrow__, __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__, __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__, __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__, __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__, __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__, __leaf__));




extern int getgroups (int __size, __gid_t __list[])
  __attribute__ ((__nothrow__, __leaf__));
#722 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__, __leaf__));




extern int setreuid (__uid_t __ruid, __uid_t __euid)
  __attribute__ ((__nothrow__, __leaf__));




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__, __leaf__));






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__, __leaf__));




extern int setregid (__gid_t __rgid, __gid_t __egid)
  __attribute__ ((__nothrow__, __leaf__));




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__, __leaf__));
#778 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__, __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__, __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int isatty (int __fd) __attribute__ ((__nothrow__, __leaf__));





extern int ttyslot (void) __attribute__ ((__nothrow__, __leaf__));




extern int link (const char *__from, const char *__to)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));




extern int linkat (int __fromfd, const char *__from, int __tofd,
		   const char *__to, int __flags)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (2, 4)));




extern int symlink (const char *__from, const char *__to)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));




extern ssize_t readlink (const char *__restrict __path,
			 char *__restrict __buf, size_t __len)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));




extern int symlinkat (const char *__from, int __tofd,
		      const char *__to)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 3)));


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
			   char *__restrict __buf, size_t __len)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (2, 3)));



extern int unlink (const char *__name) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__, __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id)
  __attribute__ ((__nothrow__, __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len)
  __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));
#893 "/usr/include/unistd.h" 3 4
#1 "/usr/include/getopt.h" 1 3 4
#57 "/usr/include/getopt.h" 3 4
extern char *optarg;
#71 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
#150 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
  __attribute__ ((__nothrow__, __leaf__));
#894 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int sethostid (long int __id) __attribute__ ((__nothrow__, __leaf__));





extern int getdomainname (char *__name, size_t __len)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int setdomainname (const char *__name, size_t __len)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int vhangup (void) __attribute__ ((__nothrow__, __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1)));







extern int profil (unsigned short int *__sample_buffer, size_t __size,
		   size_t __offset, unsigned int __scale)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__, __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__, __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__, __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__, __leaf__));





extern int daemon (int __nochdir, int __noclose)
  __attribute__ ((__nothrow__, __leaf__));






extern int chroot (const char *__path) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1)));



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);
#991 "/usr/include/unistd.h" 3 4
extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__, __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__, __leaf__));
#1015 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));
#1038 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length)
  __attribute__ ((__nothrow__, __leaf__));
#1059 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__, __leaf__));





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__, __leaf__));
#1080 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...)
  __attribute__ ((__nothrow__, __leaf__));
#1103 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len);
#1134 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
#1172 "/usr/include/unistd.h" 3 4

#4 "retlif-lttng.c" 2
#1 "/usr/include/errno.h" 1 3 4
#31 "/usr/include/errno.h" 3 4




#1 "/usr/include/bits/errno.h" 1 3 4
#24 "/usr/include/bits/errno.h" 3 4
#1 "/usr/include/linux/errno.h" 1 3 4
#1 "/usr/include/asm/errno.h" 1 3 4
#1 "/usr/include/asm-generic/errno.h" 1 3 4



#1 "/usr/include/asm-generic/errno-base.h" 1 3 4
#5 "/usr/include/asm-generic/errno.h" 2 3 4
#1 "/usr/include/asm/errno.h" 2 3 4
#1 "/usr/include/linux/errno.h" 2 3 4
#25 "/usr/include/bits/errno.h" 2 3 4
#50 "/usr/include/bits/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__const__));
#36 "/usr/include/errno.h" 2 3 4
#58 "/usr/include/errno.h" 3 4

#5 "retlif-lttng.c" 2
#1 "/usr/include/string.h" 1 3 4
#27 "/usr/include/string.h" 3 4





#1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stddef.h" 1 3 4
#33 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
		     size_t __n) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
		      int __c, size_t __n)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1, 2)));
#92 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1)));


#123 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
		      const char *__restrict __src, size_t __n)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
		      size_t __n) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
		       const char *__restrict __src, size_t __n)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (2)));






#1 "/usr/include/xlocale.h" 1 3 4
#27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
#160 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
			 __locale_t __l)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__malloc__))
  __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__malloc__))
  __attribute__ ((__nonnull__ (1)));
#207 "/usr/include/string.h" 3 4

#232 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1)));
#259 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1)));


#278 "/usr/include/string.h" 3 4



extern size_t strcspn (const char *__s, const char *__reject)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1, 2)));
#311 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1, 2)));
#338 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
			 const char *__restrict __delim,
			 char **__restrict __save_ptr)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
		       char **__restrict __save_ptr)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (2, 3)));
#393 "/usr/include/string.h" 3 4


extern size_t strlen (const char *__s)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__, __leaf__));

#423 "/usr/include/string.h" 3 4
extern int
strerror_r (int __errnum, char *__buf, size_t __buflen)
__asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (2)));
#441 "/usr/include/string.h" 3 4
     extern char *strerror_l (int __errnum, __locale_t __l)
  __attribute__ ((__nothrow__, __leaf__));





     extern void __bzero (void *__s, size_t __n)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));



     extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));


     extern void bzero (void *__s, size_t __n)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


     extern int bcmp (const void *__s1, const void *__s2, size_t __n)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1, 2)));
#485 "/usr/include/string.h" 3 4
     extern char *index (const char *__s, int __c)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1)));
#513 "/usr/include/string.h" 3 4
     extern char *rindex (const char *__s, int __c)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1)));




     extern int ffs (int __i) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__const__));
#530 "/usr/include/string.h" 3 4
     extern int strcasecmp (const char *__s1, const char *__s2)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1, 2)));


     extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__pure__))
  __attribute__ ((__nonnull__ (1, 2)));
#553 "/usr/include/string.h" 3 4
     extern char *strsep (char **__restrict __stringp,
			  const char *__restrict __delim)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));




     extern char *strsignal (int __sig)
  __attribute__ ((__nothrow__, __leaf__));


     extern char *__stpcpy (char *__restrict __dest,
			    const char *__restrict __src)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));
     extern char *stpcpy (char *__restrict __dest,
			  const char *__restrict __src)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));



     extern char *__stpncpy (char *__restrict __dest,
			     const char *__restrict __src, size_t __n)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));
     extern char *stpncpy (char *__restrict __dest,
			   const char *__restrict __src, size_t __n)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));
#640 "/usr/include/string.h" 3 4

#6 "retlif-lttng.c" 2

#1 "../include/bpf.h" 1
#10 "../include/bpf.h"
#1 "../include/../include/uapi/bpf.h" 1
#10 "../include/../include/uapi/bpf.h"
#1 "/usr/include/linux/types.h" 1 3 4



#1 "/usr/include/asm/types.h" 1 3 4



#1 "/usr/include/asm-generic/types.h" 1 3 4





#1 "/usr/include/asm-generic/int-ll64.h" 1 3 4
#11 "/usr/include/asm-generic/int-ll64.h" 3 4
#1 "/usr/include/asm/bitsperlong.h" 1 3 4
#10 "/usr/include/asm/bitsperlong.h" 3 4
#1 "/usr/include/asm-generic/bitsperlong.h" 1 3 4
#11 "/usr/include/asm/bitsperlong.h" 2 3 4
#12 "/usr/include/asm-generic/int-ll64.h" 2 3 4







     typedef __signed__ char __s8;
     typedef unsigned char __u8;

     typedef __signed__ short __s16;
     typedef unsigned short __u16;

     typedef __signed__ int __s32;
     typedef unsigned int __u32;


     __extension__ typedef __signed__ long long __s64;
     __extension__ typedef unsigned long long __u64;
#7 "/usr/include/asm-generic/types.h" 2 3 4
#5 "/usr/include/asm/types.h" 2 3 4
#5 "/usr/include/linux/types.h" 2 3 4



#1 "/usr/include/linux/posix_types.h" 1 3 4



#1 "/usr/include/linux/stddef.h" 1 3 4
#5 "/usr/include/linux/posix_types.h" 2 3 4
#24 "/usr/include/linux/posix_types.h" 3 4
     typedef struct
     {
       unsigned long fds_bits[1024 / (8 * sizeof (long))];
     } __kernel_fd_set;


     typedef void (*__kernel_sighandler_t) (int);


     typedef int __kernel_key_t;
     typedef int __kernel_mqd_t;

#1 "/usr/include/asm/posix_types.h" 1 3 4





#1 "/usr/include/asm/posix_types_64.h" 1 3 4
#10 "/usr/include/asm/posix_types_64.h" 3 4
     typedef unsigned short __kernel_old_uid_t;
     typedef unsigned short __kernel_old_gid_t;


     typedef unsigned long __kernel_old_dev_t;


#1 "/usr/include/asm-generic/posix_types.h" 1 3 4
#14 "/usr/include/asm-generic/posix_types.h" 3 4
     typedef long __kernel_long_t;
     typedef unsigned long __kernel_ulong_t;



     typedef __kernel_ulong_t __kernel_ino_t;



     typedef unsigned int __kernel_mode_t;



     typedef int __kernel_pid_t;



     typedef int __kernel_ipc_pid_t;



     typedef unsigned int __kernel_uid_t;
     typedef unsigned int __kernel_gid_t;



     typedef __kernel_long_t __kernel_suseconds_t;



     typedef int __kernel_daddr_t;



     typedef unsigned int __kernel_uid32_t;
     typedef unsigned int __kernel_gid32_t;
#71 "/usr/include/asm-generic/posix_types.h" 3 4
     typedef __kernel_ulong_t __kernel_size_t;
     typedef __kernel_long_t __kernel_ssize_t;
     typedef __kernel_long_t __kernel_ptrdiff_t;




     typedef struct
     {
       int val[2];
     } __kernel_fsid_t;





     typedef __kernel_long_t __kernel_off_t;
     typedef long long __kernel_loff_t;
     typedef __kernel_long_t __kernel_time_t;
     typedef __kernel_long_t __kernel_clock_t;
     typedef int __kernel_timer_t;
     typedef int __kernel_clockid_t;
     typedef char *__kernel_caddr_t;
     typedef unsigned short __kernel_uid16_t;
     typedef unsigned short __kernel_gid16_t;
#18 "/usr/include/asm/posix_types_64.h" 2 3 4
#7 "/usr/include/asm/posix_types.h" 2 3 4
#36 "/usr/include/linux/posix_types.h" 2 3 4
#9 "/usr/include/linux/types.h" 2 3 4
#27 "/usr/include/linux/types.h" 3 4
     typedef __u16 __le16;
     typedef __u16 __be16;
     typedef __u32 __le32;
     typedef __u32 __be32;
     typedef __u64 __le64;
     typedef __u64 __be64;

     typedef __u16 __sum16;
     typedef __u32 __wsum;
#11 "../include/../include/uapi/bpf.h" 2
#1 "../include/../include/uapi/bpf_common.h" 1
#12 "../include/../include/uapi/bpf.h" 2
#40 "../include/../include/uapi/bpf.h"
     enum
     {
       BPF_REG_0 = 0,
       BPF_REG_1,
       BPF_REG_2,
       BPF_REG_3,
       BPF_REG_4,
       BPF_REG_5,
       BPF_REG_6,
       BPF_REG_7,
       BPF_REG_8,
       BPF_REG_9,
       BPF_REG_10,
       __MAX_BPF_REG,
     };




     struct bpf_insn
     {
       __u8 code;
       __u8 dst_reg:4;
       __u8 src_reg:4;
       __s16 off;
       __s32 imm;
     };


     enum bpf_cmd
     {





       BPF_MAP_CREATE,







       BPF_MAP_LOOKUP_ELEM,






       BPF_MAP_UPDATE_ELEM,






       BPF_MAP_DELETE_ELEM,






       BPF_MAP_GET_NEXT_KEY,






       BPF_PROG_LOAD,
     };

     enum bpf_map_type
     {
       BPF_MAP_TYPE_UNSPEC,
       BPF_MAP_TYPE_HASH,
     };

     enum bpf_prog_type
     {
       BPF_PROG_TYPE_UNSPEC,
       BPF_PROG_TYPE_SOCKET_FILTER,
       BPF_PROG_TYPE_TRACING_FILTER,
     };

     union bpf_attr
     {
       struct
       {
	 __u32 map_type;
	 __u32 key_size;
	 __u32 value_size;
	 __u32 max_entries;
       };

       struct
       {
	 __u32 map_fd;
	 __u64 __attribute__ ((aligned (8))) key;
	 union
	 {
	   __u64 __attribute__ ((aligned (8))) value;
	   __u64 __attribute__ ((aligned (8))) next_key;
	 };
       };

       struct
       {
	 __u32 prog_type;
	 __u32 insn_cnt;
	 __u64 __attribute__ ((aligned (8))) insns;
	 __u64 __attribute__ ((aligned (8))) license;
	 __u32 log_level;
	 __u32 log_size;
	 __u64 __attribute__ ((aligned (8))) log_buf;
       };
     } __attribute__ ((aligned (8)));




     enum bpf_func_id
     {
       BPF_FUNC_unspec,
#170 "../include/../include/uapi/bpf.h"
       BPF_FUNC_memcmp,
       BPF_FUNC_dummy,
       BPF_FUNC_strcmp,
       __BPF_FUNC_MAX_ID,
     };
#11 "../include/bpf.h" 2
#1 "../include/../include/atomic.h" 1







     typedef struct
     {
       volatile int counter;
     } atomic_t;
#34 "../include/../include/atomic.h"
     static inline void atomic_add (int i, atomic_t * v)
{
  (void) __sync_add_and_fetch (&v->counter, i);
}

#46 "../include/../include/atomic.h"
static inline void
atomic_sub (int i, atomic_t * v)
{
  (void) __sync_sub_and_fetch (&v->counter, i);
}

#60 "../include/../include/atomic.h"
static inline int
atomic_sub_and_test (int i, atomic_t * v)
{
  return !(__sync_sub_and_fetch (&v->counter, i));
}







static inline void
atomic_inc (atomic_t * v)
{
  (void) __sync_fetch_and_add (&v->counter, 1);
}

#83 "../include/../include/atomic.h"
static inline void
atomic_dec (atomic_t * v)
{
  (void) __sync_fetch_and_sub (&v->counter, 1);
}

#96 "../include/../include/atomic.h"
static inline int
atomic_dec_and_test (atomic_t * v)
{
  return !(__sync_sub_and_fetch (&v->counter, 1));
}

#109 "../include/../include/atomic.h"
static inline int
atomic_inc_and_test (atomic_t * v)
{
  return !(__sync_add_and_fetch (&v->counter, 1));
}

#123 "../include/../include/atomic.h"
static inline int
atomic_add_negative (int i, atomic_t * v)
{
  return (__sync_add_and_fetch (&v->counter, i) < 0);
}

#12 "../include/bpf.h" 2



struct list_head
{
  struct list_head *next, *prev;
};

struct bpf_map;


struct bpf_map_ops
{

  struct bpf_map *(*map_alloc) (union bpf_attr * attr);
  void (*map_free) (struct bpf_map *);
  int (*map_get_next_key) (struct bpf_map * map, void *key, void *next_key);


  void *(*map_lookup_elem) (struct bpf_map * map, void *key);
  int (*map_update_elem) (struct bpf_map * map, void *key, void *value);
  int (*map_delete_elem) (struct bpf_map * map, void *key);
};

struct bpf_map
{

  enum bpf_map_type map_type;
  __u32 key_size;
  __u32 value_size;
  __u32 max_entries;
  struct bpf_map_ops *ops;

};

struct bpf_map_type_list
{
  struct list_head list_node;
  struct bpf_map_ops *ops;
  enum bpf_map_type type;
};

void bpf_register_map_type (struct bpf_map_type_list *tl);
void bpf_map_put (struct bpf_map *map);
struct bpf_map *bpf_map_get (struct fd f);


enum bpf_arg_type
{
  ARG_ANYTHING = 0,




  ARG_CONST_MAP_PTR,
  ARG_PTR_TO_MAP_KEY,
  ARG_PTR_TO_MAP_VALUE,




  ARG_PTR_TO_STACK,
  ARG_CONST_STACK_SIZE,
};


enum bpf_return_type
{
  RET_INTEGER,
  RET_VOID,
  RET_PTR_TO_MAP_VALUE_OR_NULL,
};





struct bpf_func_proto
{
  __u64 (*func) (__u64 r1, __u64 r2, __u64 r3, __u64 r4, __u64 r5);
  _Bool gpl_only;
  enum bpf_return_type ret_type;
  enum bpf_arg_type arg1_type;
  enum bpf_arg_type arg2_type;
  enum bpf_arg_type arg3_type;
  enum bpf_arg_type arg4_type;
  enum bpf_arg_type arg5_type;
};





struct bpf_context;

enum bpf_access_type
{
  BPF_READ = 1,
  BPF_WRITE = 2
};

struct bpf_verifier_ops
{

  const struct bpf_func_proto *(*get_func_proto) (enum bpf_func_id func_id);




    _Bool (*is_valid_access) (int off, int size, enum bpf_access_type type);
};

struct bpf_prog_type_list
{
  struct list_head list_node;
  struct bpf_verifier_ops *ops;
  enum bpf_prog_type type;
};

void bpf_register_prog_type (struct bpf_prog_type_list *tl);

struct bpf_prog;

struct bpf_prog_aux
{
  atomic_t refcnt;
  _Bool is_gpl_compatible;
  enum bpf_prog_type prog_type;
  struct bpf_verifier_ops *ops;
  struct bpf_map **used_maps;
  __u32 used_map_cnt;
  struct bpf_prog *prog;

};

void bpf_prog_put (struct bpf_prog *prog);
struct bpf_prog *bpf_prog_get (__u32 ufd);

int bpf_check (struct bpf_prog *fp, union bpf_attr *attr);


__u64 bpf_map_lookup_elem (__u64 r1, __u64 r2, __u64 r3, __u64 r4, __u64 r5);
__u64 bpf_map_update_elem (__u64 r1, __u64 r2, __u64 r3, __u64 r4, __u64 r5);
__u64 bpf_map_delete_elem (__u64 r1, __u64 r2, __u64 r3, __u64 r4, __u64 r5);
#8 "retlif-lttng.c" 2
#1 "../include/filter.h" 1






#1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stdarg.h" 1 3 4
#8 "../include/filter.h" 2
#1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stddef.h" 1 3 4
#147 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stddef.h" 3 4
typedef long int ptrdiff_t;
#9 "../include/filter.h" 2
#1 "/usr/include/udis86.h" 1 3 4
#29 "/usr/include/udis86.h" 3 4
#1 "/usr/include/libudis86/types.h" 1 3 4
#46 "/usr/include/libudis86/types.h" 3 4
#1 "/usr/include/inttypes.h" 1 3 4
#27 "/usr/include/inttypes.h" 3 4
#1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stdint.h" 1 3 4
#9 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stdint.h" 3 4
#1 "/usr/include/stdint.h" 1 3 4
#26 "/usr/include/stdint.h" 3 4
#1 "/usr/include/bits/wchar.h" 1 3 4
#27 "/usr/include/stdint.h" 2 3 4
#1 "/usr/include/bits/wordsize.h" 1 3 4
#28 "/usr/include/stdint.h" 2 3 4
#48 "/usr/include/stdint.h" 3 4
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
#65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
#90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
#103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
#122 "/usr/include/stdint.h" 3 4
typedef unsigned long int uintptr_t;
#134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
#10 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stdint.h" 2 3 4
#28 "/usr/include/inttypes.h" 2 3 4






typedef int __gwchar_t;
#266 "/usr/include/inttypes.h" 3 4





typedef struct
{
  long int quot;
  long int rem;
} imaxdiv_t;
#290 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
			   char **__restrict __endptr, int __base)
  __attribute__ ((__nothrow__, __leaf__));


extern uintmax_t strtoumax (const char *__restrict __nptr,
			    char **__restrict __endptr, int __base)
  __attribute__ ((__nothrow__, __leaf__));


extern intmax_t wcstoimax (const __gwchar_t * __restrict __nptr,
			   __gwchar_t ** __restrict __endptr, int __base)
  __attribute__ ((__nothrow__, __leaf__));


extern uintmax_t wcstoumax (const __gwchar_t * __restrict __nptr,
			    __gwchar_t ** __restrict __endptr, int __base)
  __attribute__ ((__nothrow__, __leaf__));
#432 "/usr/include/inttypes.h" 3 4

#47 "/usr/include/libudis86/types.h" 2 3 4
#61 "/usr/include/libudis86/types.h" 3 4
enum ud_type
{
  UD_NONE,


  UD_R_AL, UD_R_CL, UD_R_DL, UD_R_BL,
  UD_R_AH, UD_R_CH, UD_R_DH, UD_R_BH,
  UD_R_SPL, UD_R_BPL, UD_R_SIL, UD_R_DIL,
  UD_R_R8B, UD_R_R9B, UD_R_R10B, UD_R_R11B,
  UD_R_R12B, UD_R_R13B, UD_R_R14B, UD_R_R15B,


  UD_R_AX, UD_R_CX, UD_R_DX, UD_R_BX,
  UD_R_SP, UD_R_BP, UD_R_SI, UD_R_DI,
  UD_R_R8W, UD_R_R9W, UD_R_R10W, UD_R_R11W,
  UD_R_R12W, UD_R_R13W, UD_R_R14W, UD_R_R15W,


  UD_R_EAX, UD_R_ECX, UD_R_EDX, UD_R_EBX,
  UD_R_ESP, UD_R_EBP, UD_R_ESI, UD_R_EDI,
  UD_R_R8D, UD_R_R9D, UD_R_R10D, UD_R_R11D,
  UD_R_R12D, UD_R_R13D, UD_R_R14D, UD_R_R15D,


  UD_R_RAX, UD_R_RCX, UD_R_RDX, UD_R_RBX,
  UD_R_RSP, UD_R_RBP, UD_R_RSI, UD_R_RDI,
  UD_R_R8, UD_R_R9, UD_R_R10, UD_R_R11,
  UD_R_R12, UD_R_R13, UD_R_R14, UD_R_R15,


  UD_R_ES, UD_R_CS, UD_R_SS, UD_R_DS,
  UD_R_FS, UD_R_GS,


  UD_R_CR0, UD_R_CR1, UD_R_CR2, UD_R_CR3,
  UD_R_CR4, UD_R_CR5, UD_R_CR6, UD_R_CR7,
  UD_R_CR8, UD_R_CR9, UD_R_CR10, UD_R_CR11,
  UD_R_CR12, UD_R_CR13, UD_R_CR14, UD_R_CR15,


  UD_R_DR0, UD_R_DR1, UD_R_DR2, UD_R_DR3,
  UD_R_DR4, UD_R_DR5, UD_R_DR6, UD_R_DR7,
  UD_R_DR8, UD_R_DR9, UD_R_DR10, UD_R_DR11,
  UD_R_DR12, UD_R_DR13, UD_R_DR14, UD_R_DR15,


  UD_R_MM0, UD_R_MM1, UD_R_MM2, UD_R_MM3,
  UD_R_MM4, UD_R_MM5, UD_R_MM6, UD_R_MM7,


  UD_R_ST0, UD_R_ST1, UD_R_ST2, UD_R_ST3,
  UD_R_ST4, UD_R_ST5, UD_R_ST6, UD_R_ST7,


  UD_R_XMM0, UD_R_XMM1, UD_R_XMM2, UD_R_XMM3,
  UD_R_XMM4, UD_R_XMM5, UD_R_XMM6, UD_R_XMM7,
  UD_R_XMM8, UD_R_XMM9, UD_R_XMM10, UD_R_XMM11,
  UD_R_XMM12, UD_R_XMM13, UD_R_XMM14, UD_R_XMM15,

  UD_R_RIP,


  UD_OP_REG, UD_OP_MEM, UD_OP_PTR, UD_OP_IMM,
  UD_OP_JIMM, UD_OP_CONST
};

#1 "/usr/include/libudis86/itab.h" 1 3 4






enum ud_table_type
{
  UD_TAB__OPC_TABLE,
  UD_TAB__OPC_X87,
  UD_TAB__OPC_MOD,
  UD_TAB__OPC_VEX_M,
  UD_TAB__OPC_VEX_P,
  UD_TAB__OPC_RM,
  UD_TAB__OPC_VENDOR,
  UD_TAB__OPC_OSIZE,
  UD_TAB__OPC_MODE,
  UD_TAB__OPC_3DNOW,
  UD_TAB__OPC_REG,
  UD_TAB__OPC_ASIZE,
  UD_TAB__OPC_SSE
};


enum ud_mnemonic_code
{
  UD_Iinvalid,
  UD_I3dnow,
  UD_Inone,
  UD_Idb,
  UD_Ipause,
  UD_Iaaa,
  UD_Iaad,
  UD_Iaam,
  UD_Iaas,
  UD_Iadc,
  UD_Iadd,
  UD_Iaddpd,
  UD_Iaddps,
  UD_Iaddsd,
  UD_Iaddss,
  UD_Iand,
  UD_Iandpd,
  UD_Iandps,
  UD_Iandnpd,
  UD_Iandnps,
  UD_Iarpl,
  UD_Imovsxd,
  UD_Ibound,
  UD_Ibsf,
  UD_Ibsr,
  UD_Ibswap,
  UD_Ibt,
  UD_Ibtc,
  UD_Ibtr,
  UD_Ibts,
  UD_Icall,
  UD_Icbw,
  UD_Icwde,
  UD_Icdqe,
  UD_Iclc,
  UD_Icld,
  UD_Iclflush,
  UD_Iclgi,
  UD_Icli,
  UD_Iclts,
  UD_Icmc,
  UD_Icmovo,
  UD_Icmovno,
  UD_Icmovb,
  UD_Icmovae,
  UD_Icmovz,
  UD_Icmovnz,
  UD_Icmovbe,
  UD_Icmova,
  UD_Icmovs,
  UD_Icmovns,
  UD_Icmovp,
  UD_Icmovnp,
  UD_Icmovl,
  UD_Icmovge,
  UD_Icmovle,
  UD_Icmovg,
  UD_Icmp,
  UD_Icmppd,
  UD_Icmpps,
  UD_Icmpsb,
  UD_Icmpsw,
  UD_Icmpsd,
  UD_Icmpsq,
  UD_Icmpss,
  UD_Icmpxchg,
  UD_Icmpxchg8b,
  UD_Icmpxchg16b,
  UD_Icomisd,
  UD_Icomiss,
  UD_Icpuid,
  UD_Icvtdq2pd,
  UD_Icvtdq2ps,
  UD_Icvtpd2dq,
  UD_Icvtpd2pi,
  UD_Icvtpd2ps,
  UD_Icvtpi2ps,
  UD_Icvtpi2pd,
  UD_Icvtps2dq,
  UD_Icvtps2pi,
  UD_Icvtps2pd,
  UD_Icvtsd2si,
  UD_Icvtsd2ss,
  UD_Icvtsi2ss,
  UD_Icvtss2si,
  UD_Icvtss2sd,
  UD_Icvttpd2pi,
  UD_Icvttpd2dq,
  UD_Icvttps2dq,
  UD_Icvttps2pi,
  UD_Icvttsd2si,
  UD_Icvtsi2sd,
  UD_Icvttss2si,
  UD_Icwd,
  UD_Icdq,
  UD_Icqo,
  UD_Idaa,
  UD_Idas,
  UD_Idec,
  UD_Idiv,
  UD_Idivpd,
  UD_Idivps,
  UD_Idivsd,
  UD_Idivss,
  UD_Iemms,
  UD_Ienter,
  UD_If2xm1,
  UD_Ifabs,
  UD_Ifadd,
  UD_Ifaddp,
  UD_Ifbld,
  UD_Ifbstp,
  UD_Ifchs,
  UD_Ifclex,
  UD_Ifcmovb,
  UD_Ifcmove,
  UD_Ifcmovbe,
  UD_Ifcmovu,
  UD_Ifcmovnb,
  UD_Ifcmovne,
  UD_Ifcmovnbe,
  UD_Ifcmovnu,
  UD_Ifucomi,
  UD_Ifcom,
  UD_Ifcom2,
  UD_Ifcomp3,
  UD_Ifcomi,
  UD_Ifucomip,
  UD_Ifcomip,
  UD_Ifcomp,
  UD_Ifcomp5,
  UD_Ifcompp,
  UD_Ifcos,
  UD_Ifdecstp,
  UD_Ifdiv,
  UD_Ifdivp,
  UD_Ifdivr,
  UD_Ifdivrp,
  UD_Ifemms,
  UD_Iffree,
  UD_Iffreep,
  UD_Ificom,
  UD_Ificomp,
  UD_Ifild,
  UD_Ifincstp,
  UD_Ifninit,
  UD_Ifiadd,
  UD_Ifidivr,
  UD_Ifidiv,
  UD_Ifisub,
  UD_Ifisubr,
  UD_Ifist,
  UD_Ifistp,
  UD_Ifisttp,
  UD_Ifld,
  UD_Ifld1,
  UD_Ifldl2t,
  UD_Ifldl2e,
  UD_Ifldpi,
  UD_Ifldlg2,
  UD_Ifldln2,
  UD_Ifldz,
  UD_Ifldcw,
  UD_Ifldenv,
  UD_Ifmul,
  UD_Ifmulp,
  UD_Ifimul,
  UD_Ifnop,
  UD_Ifpatan,
  UD_Ifprem,
  UD_Ifprem1,
  UD_Ifptan,
  UD_Ifrndint,
  UD_Ifrstor,
  UD_Ifnsave,
  UD_Ifscale,
  UD_Ifsin,
  UD_Ifsincos,
  UD_Ifsqrt,
  UD_Ifstp,
  UD_Ifstp1,
  UD_Ifstp8,
  UD_Ifstp9,
  UD_Ifst,
  UD_Ifnstcw,
  UD_Ifnstenv,
  UD_Ifnstsw,
  UD_Ifsub,
  UD_Ifsubp,
  UD_Ifsubr,
  UD_Ifsubrp,
  UD_Iftst,
  UD_Ifucom,
  UD_Ifucomp,
  UD_Ifucompp,
  UD_Ifxam,
  UD_Ifxch,
  UD_Ifxch4,
  UD_Ifxch7,
  UD_Ifxrstor,
  UD_Ifxsave,
  UD_Ifxtract,
  UD_Ifyl2x,
  UD_Ifyl2xp1,
  UD_Ihlt,
  UD_Iidiv,
  UD_Iin,
  UD_Iimul,
  UD_Iinc,
  UD_Iinsb,
  UD_Iinsw,
  UD_Iinsd,
  UD_Iint1,
  UD_Iint3,
  UD_Iint,
  UD_Iinto,
  UD_Iinvd,
  UD_Iinvept,
  UD_Iinvlpg,
  UD_Iinvlpga,
  UD_Iinvvpid,
  UD_Iiretw,
  UD_Iiretd,
  UD_Iiretq,
  UD_Ijo,
  UD_Ijno,
  UD_Ijb,
  UD_Ijae,
  UD_Ijz,
  UD_Ijnz,
  UD_Ijbe,
  UD_Ija,
  UD_Ijs,
  UD_Ijns,
  UD_Ijp,
  UD_Ijnp,
  UD_Ijl,
  UD_Ijge,
  UD_Ijle,
  UD_Ijg,
  UD_Ijcxz,
  UD_Ijecxz,
  UD_Ijrcxz,
  UD_Ijmp,
  UD_Ilahf,
  UD_Ilar,
  UD_Ilddqu,
  UD_Ildmxcsr,
  UD_Ilds,
  UD_Ilea,
  UD_Iles,
  UD_Ilfs,
  UD_Ilgs,
  UD_Ilidt,
  UD_Ilss,
  UD_Ileave,
  UD_Ilfence,
  UD_Ilgdt,
  UD_Illdt,
  UD_Ilmsw,
  UD_Ilock,
  UD_Ilodsb,
  UD_Ilodsw,
  UD_Ilodsd,
  UD_Ilodsq,
  UD_Iloopne,
  UD_Iloope,
  UD_Iloop,
  UD_Ilsl,
  UD_Iltr,
  UD_Imaskmovq,
  UD_Imaxpd,
  UD_Imaxps,
  UD_Imaxsd,
  UD_Imaxss,
  UD_Imfence,
  UD_Iminpd,
  UD_Iminps,
  UD_Iminsd,
  UD_Iminss,
  UD_Imonitor,
  UD_Imontmul,
  UD_Imov,
  UD_Imovapd,
  UD_Imovaps,
  UD_Imovd,
  UD_Imovhpd,
  UD_Imovhps,
  UD_Imovlhps,
  UD_Imovlpd,
  UD_Imovlps,
  UD_Imovhlps,
  UD_Imovmskpd,
  UD_Imovmskps,
  UD_Imovntdq,
  UD_Imovnti,
  UD_Imovntpd,
  UD_Imovntps,
  UD_Imovntq,
  UD_Imovq,
  UD_Imovsb,
  UD_Imovsw,
  UD_Imovsd,
  UD_Imovsq,
  UD_Imovss,
  UD_Imovsx,
  UD_Imovupd,
  UD_Imovups,
  UD_Imovzx,
  UD_Imul,
  UD_Imulpd,
  UD_Imulps,
  UD_Imulsd,
  UD_Imulss,
  UD_Imwait,
  UD_Ineg,
  UD_Inop,
  UD_Inot,
  UD_Ior,
  UD_Iorpd,
  UD_Iorps,
  UD_Iout,
  UD_Ioutsb,
  UD_Ioutsw,
  UD_Ioutsd,
  UD_Ipacksswb,
  UD_Ipackssdw,
  UD_Ipackuswb,
  UD_Ipaddb,
  UD_Ipaddw,
  UD_Ipaddd,
  UD_Ipaddsb,
  UD_Ipaddsw,
  UD_Ipaddusb,
  UD_Ipaddusw,
  UD_Ipand,
  UD_Ipandn,
  UD_Ipavgb,
  UD_Ipavgw,
  UD_Ipcmpeqb,
  UD_Ipcmpeqw,
  UD_Ipcmpeqd,
  UD_Ipcmpgtb,
  UD_Ipcmpgtw,
  UD_Ipcmpgtd,
  UD_Ipextrb,
  UD_Ipextrd,
  UD_Ipextrq,
  UD_Ipextrw,
  UD_Ipinsrb,
  UD_Ipinsrw,
  UD_Ipinsrd,
  UD_Ipinsrq,
  UD_Ipmaddwd,
  UD_Ipmaxsw,
  UD_Ipmaxub,
  UD_Ipminsw,
  UD_Ipminub,
  UD_Ipmovmskb,
  UD_Ipmulhuw,
  UD_Ipmulhw,
  UD_Ipmullw,
  UD_Ipop,
  UD_Ipopa,
  UD_Ipopad,
  UD_Ipopfw,
  UD_Ipopfd,
  UD_Ipopfq,
  UD_Ipor,
  UD_Iprefetch,
  UD_Iprefetchnta,
  UD_Iprefetcht0,
  UD_Iprefetcht1,
  UD_Iprefetcht2,
  UD_Ipsadbw,
  UD_Ipshufw,
  UD_Ipsllw,
  UD_Ipslld,
  UD_Ipsllq,
  UD_Ipsraw,
  UD_Ipsrad,
  UD_Ipsrlw,
  UD_Ipsrld,
  UD_Ipsrlq,
  UD_Ipsubb,
  UD_Ipsubw,
  UD_Ipsubd,
  UD_Ipsubsb,
  UD_Ipsubsw,
  UD_Ipsubusb,
  UD_Ipsubusw,
  UD_Ipunpckhbw,
  UD_Ipunpckhwd,
  UD_Ipunpckhdq,
  UD_Ipunpcklbw,
  UD_Ipunpcklwd,
  UD_Ipunpckldq,
  UD_Ipi2fw,
  UD_Ipi2fd,
  UD_Ipf2iw,
  UD_Ipf2id,
  UD_Ipfnacc,
  UD_Ipfpnacc,
  UD_Ipfcmpge,
  UD_Ipfmin,
  UD_Ipfrcp,
  UD_Ipfrsqrt,
  UD_Ipfsub,
  UD_Ipfadd,
  UD_Ipfcmpgt,
  UD_Ipfmax,
  UD_Ipfrcpit1,
  UD_Ipfrsqit1,
  UD_Ipfsubr,
  UD_Ipfacc,
  UD_Ipfcmpeq,
  UD_Ipfmul,
  UD_Ipfrcpit2,
  UD_Ipmulhrw,
  UD_Ipswapd,
  UD_Ipavgusb,
  UD_Ipush,
  UD_Ipusha,
  UD_Ipushad,
  UD_Ipushfw,
  UD_Ipushfd,
  UD_Ipushfq,
  UD_Ipxor,
  UD_Ircl,
  UD_Ircr,
  UD_Irol,
  UD_Iror,
  UD_Ircpps,
  UD_Ircpss,
  UD_Irdmsr,
  UD_Irdpmc,
  UD_Irdtsc,
  UD_Irdtscp,
  UD_Irepne,
  UD_Irep,
  UD_Iret,
  UD_Iretf,
  UD_Irsm,
  UD_Irsqrtps,
  UD_Irsqrtss,
  UD_Isahf,
  UD_Isalc,
  UD_Isar,
  UD_Ishl,
  UD_Ishr,
  UD_Isbb,
  UD_Iscasb,
  UD_Iscasw,
  UD_Iscasd,
  UD_Iscasq,
  UD_Iseto,
  UD_Isetno,
  UD_Isetb,
  UD_Isetae,
  UD_Isetz,
  UD_Isetnz,
  UD_Isetbe,
  UD_Iseta,
  UD_Isets,
  UD_Isetns,
  UD_Isetp,
  UD_Isetnp,
  UD_Isetl,
  UD_Isetge,
  UD_Isetle,
  UD_Isetg,
  UD_Isfence,
  UD_Isgdt,
  UD_Ishld,
  UD_Ishrd,
  UD_Ishufpd,
  UD_Ishufps,
  UD_Isidt,
  UD_Isldt,
  UD_Ismsw,
  UD_Isqrtps,
  UD_Isqrtpd,
  UD_Isqrtsd,
  UD_Isqrtss,
  UD_Istc,
  UD_Istd,
  UD_Istgi,
  UD_Isti,
  UD_Iskinit,
  UD_Istmxcsr,
  UD_Istosb,
  UD_Istosw,
  UD_Istosd,
  UD_Istosq,
  UD_Istr,
  UD_Isub,
  UD_Isubpd,
  UD_Isubps,
  UD_Isubsd,
  UD_Isubss,
  UD_Iswapgs,
  UD_Isyscall,
  UD_Isysenter,
  UD_Isysexit,
  UD_Isysret,
  UD_Itest,
  UD_Iucomisd,
  UD_Iucomiss,
  UD_Iud2,
  UD_Iunpckhpd,
  UD_Iunpckhps,
  UD_Iunpcklps,
  UD_Iunpcklpd,
  UD_Iverr,
  UD_Iverw,
  UD_Ivmcall,
  UD_Ivmclear,
  UD_Ivmxon,
  UD_Ivmptrld,
  UD_Ivmptrst,
  UD_Ivmlaunch,
  UD_Ivmresume,
  UD_Ivmxoff,
  UD_Ivmread,
  UD_Ivmwrite,
  UD_Ivmrun,
  UD_Ivmmcall,
  UD_Ivmload,
  UD_Ivmsave,
  UD_Iwait,
  UD_Iwbinvd,
  UD_Iwrmsr,
  UD_Ixadd,
  UD_Ixchg,
  UD_Ixgetbv,
  UD_Ixlatb,
  UD_Ixor,
  UD_Ixorpd,
  UD_Ixorps,
  UD_Ixcryptecb,
  UD_Ixcryptcbc,
  UD_Ixcryptctr,
  UD_Ixcryptcfb,
  UD_Ixcryptofb,
  UD_Ixrstor,
  UD_Ixsave,
  UD_Ixsetbv,
  UD_Ixsha1,
  UD_Ixsha256,
  UD_Ixstore,
  UD_Iaesdec,
  UD_Iaesdeclast,
  UD_Iaesenc,
  UD_Iaesenclast,
  UD_Iaesimc,
  UD_Iaeskeygenassist,
  UD_Ipclmulqdq,
  UD_Igetsec,
  UD_Imovdqa,
  UD_Imaskmovdqu,
  UD_Imovdq2q,
  UD_Imovdqu,
  UD_Imovq2dq,
  UD_Ipaddq,
  UD_Ipsubq,
  UD_Ipmuludq,
  UD_Ipshufhw,
  UD_Ipshuflw,
  UD_Ipshufd,
  UD_Ipslldq,
  UD_Ipsrldq,
  UD_Ipunpckhqdq,
  UD_Ipunpcklqdq,
  UD_Iaddsubpd,
  UD_Iaddsubps,
  UD_Ihaddpd,
  UD_Ihaddps,
  UD_Ihsubpd,
  UD_Ihsubps,
  UD_Imovddup,
  UD_Imovshdup,
  UD_Imovsldup,
  UD_Ipabsb,
  UD_Ipabsw,
  UD_Ipabsd,
  UD_Ipshufb,
  UD_Iphaddw,
  UD_Iphaddd,
  UD_Iphaddsw,
  UD_Ipmaddubsw,
  UD_Iphsubw,
  UD_Iphsubd,
  UD_Iphsubsw,
  UD_Ipsignb,
  UD_Ipsignd,
  UD_Ipsignw,
  UD_Ipmulhrsw,
  UD_Ipalignr,
  UD_Ipblendvb,
  UD_Ipmuldq,
  UD_Ipminsb,
  UD_Ipminsd,
  UD_Ipminuw,
  UD_Ipminud,
  UD_Ipmaxsb,
  UD_Ipmaxsd,
  UD_Ipmaxud,
  UD_Ipmaxuw,
  UD_Ipmulld,
  UD_Iphminposuw,
  UD_Iroundps,
  UD_Iroundpd,
  UD_Iroundss,
  UD_Iroundsd,
  UD_Iblendpd,
  UD_Ipblendw,
  UD_Iblendps,
  UD_Iblendvpd,
  UD_Iblendvps,
  UD_Idpps,
  UD_Idppd,
  UD_Impsadbw,
  UD_Iextractps,
  UD_Iinsertps,
  UD_Imovntdqa,
  UD_Ipackusdw,
  UD_Ipmovsxbw,
  UD_Ipmovsxbd,
  UD_Ipmovsxbq,
  UD_Ipmovsxwd,
  UD_Ipmovsxwq,
  UD_Ipmovsxdq,
  UD_Ipmovzxbw,
  UD_Ipmovzxbd,
  UD_Ipmovzxbq,
  UD_Ipmovzxwd,
  UD_Ipmovzxwq,
  UD_Ipmovzxdq,
  UD_Ipcmpeqq,
  UD_Ipopcnt,
  UD_Iptest,
  UD_Ipcmpestri,
  UD_Ipcmpestrm,
  UD_Ipcmpgtq,
  UD_Ipcmpistri,
  UD_Ipcmpistrm,
  UD_Imovbe,
  UD_Icrc32,
  UD_MAX_MNEMONIC_CODE
} __attribute__ ((packed));

extern const char *ud_mnemonics_str[];
#128 "/usr/include/libudis86/types.h" 2 3 4

union ud_lval
{
  int8_t sbyte;
  uint8_t ubyte;
  int16_t sword;
  uint16_t uword;
  int32_t sdword;
  uint32_t udword;
  int64_t sqword;
  uint64_t uqword;
  struct
  {
    uint16_t seg;
    uint32_t off;
  } ptr;
};





struct ud_operand
{
  enum ud_type type;
  uint8_t size;
  enum ud_type base;
  enum ud_type index;
  uint8_t scale;
  uint8_t offset;
  union ud_lval lval;



  uint64_t _legacy;
  uint8_t _oprcode;
};





struct ud
{



  int (*inp_hook) (struct ud *);

  FILE *inp_file;

  const uint8_t *inp_buf;
  size_t inp_buf_size;
  size_t inp_buf_index;
  uint8_t inp_curr;
  size_t inp_ctr;
  uint8_t inp_sess[64];
  int inp_end;

  void (*translator) (struct ud *);
  uint64_t insn_offset;
  char insn_hexcode[64];




  char *asm_buf;
  size_t asm_buf_size;
  size_t asm_buf_fill;
  char asm_buf_int[128];




  const char *(*sym_resolver) (struct ud *, uint64_t addr, int64_t * offset);

  uint8_t dis_mode;
  uint64_t pc;
  uint8_t vendor;
  enum ud_mnemonic_code mnemonic;
  struct ud_operand operand[3];
  uint8_t error;
  uint8_t pfx_rex;
  uint8_t pfx_seg;
  uint8_t pfx_opr;
  uint8_t pfx_adr;
  uint8_t pfx_lock;
  uint8_t pfx_str;
  uint8_t pfx_rep;
  uint8_t pfx_repe;
  uint8_t pfx_repne;
  uint8_t opr_mode;
  uint8_t adr_mode;
  uint8_t br_far;
  uint8_t br_near;
  uint8_t have_modrm;
  uint8_t modrm;
  uint8_t primary_opcode;
  void *user_opaque_data;
  struct ud_itab_entry *itab_entry;
  struct ud_lookup_table_list_entry *le;
};





typedef enum ud_type ud_type_t;
typedef enum ud_mnemonic_code ud_mnemonic_code_t;

typedef struct ud ud_t;
typedef struct ud_operand ud_operand_t;
#30 "/usr/include/udis86.h" 2 3 4
#1 "/usr/include/libudis86/extern.h" 1 3 4
#33 "/usr/include/libudis86/extern.h" 3 4
#1 "/usr/include/libudis86/types.h" 1 3 4
#34 "/usr/include/libudis86/extern.h" 2 3 4



extern void ud_init (struct ud *);

extern void ud_set_mode (struct ud *, uint8_t);

extern void ud_set_pc (struct ud *, uint64_t);

extern void ud_set_input_hook (struct ud *, int (*)(struct ud *));

extern void ud_set_input_buffer (struct ud *, const uint8_t *, size_t);


extern void ud_set_input_file (struct ud *, FILE *);


extern void ud_set_vendor (struct ud *, unsigned);

extern void ud_set_syntax (struct ud *, void (*)(struct ud *));

extern void ud_input_skip (struct ud *, size_t);

extern int ud_input_end (const struct ud *);

extern unsigned int ud_decode (struct ud *);

extern unsigned int ud_disassemble (struct ud *);

extern void ud_translate_intel (struct ud *);

extern void ud_translate_att (struct ud *);

extern const char *ud_insn_asm (const struct ud *u);

extern const uint8_t *ud_insn_ptr (const struct ud *u);

extern uint64_t ud_insn_off (const struct ud *);

extern const char *ud_insn_hex (struct ud *);

extern unsigned int ud_insn_len (const struct ud *u);

extern const struct ud_operand *ud_insn_opr (const struct ud *u,
					     unsigned int n);

extern int ud_opr_is_sreg (const struct ud_operand *opr);

extern int ud_opr_is_gpr (const struct ud_operand *opr);

extern enum ud_mnemonic_code ud_insn_mnemonic (const struct ud *u);

extern const char *ud_lookup_mnemonic (enum ud_mnemonic_code c);

extern void ud_set_user_opaque_data (struct ud *, void *);

extern void *ud_get_user_opaque_data (const struct ud *);

extern uint64_t ud_insn_sext_imm (const struct ud *,
				  const struct ud_operand *);

extern void ud_set_asm_buffer (struct ud *u, char *buf, size_t size);

extern void ud_set_sym_resolver (struct ud *u,
				 const char *(*resolver) (struct ud *,
							  uint64_t addr,
							  int64_t * offset));
#31 "/usr/include/udis86.h" 2 3 4
#1 "/usr/include/libudis86/itab.h" 1 3 4
#32 "/usr/include/udis86.h" 2 3 4
#10 "../include/filter.h" 2
#18 "../include/filter.h"
#1 "../include/uapi/filter.h" 1
#24 "../include/uapi/filter.h"
struct sock_filter
{
  __u16 code;
  __u8 jt;
  __u8 jf;
  __u32 k;
};

struct sock_fprog
{
  unsigned short len;
  struct sock_filter *filter;
};
#19 "../include/filter.h" 2
#1 "../include/uapi/bpf.h" 1
#20 "../include/filter.h" 2
#29 "../include/filter.h"
struct callback_head
{
  struct callback_head *next;
  void (*func) (struct callback_head * head);
};







struct bpf_prog_aux;
#316 "../include/filter.h"
struct sock_fprog_kern
{
  __u16 len;
  struct sock_filter *filter;
};

struct bpf_binary_header
{
  unsigned int pages;
  __u8 image[];
};

struct bpf_prog
{
  __u16 pages;
  _Bool jited;
  __u32 len;
  struct sock_fprog_kern *orig_prog;
  struct bpf_prog_aux *aux;
  unsigned int (*bpf_func) (const struct sk_buff * skb,
			    const struct bpf_insn * filter);

  union
  {
    struct sock_filter insns[0];
    struct bpf_insn insnsi[0];
  };
};

struct sk_filter
{
  atomic_t refcnt;
  struct callback_head rcu;
  struct bpf_prog *prog;
};



static inline unsigned int
bpf_prog_size (unsigned int proglen)
{
  return (
	   {
	   __typeof__ (sizeof (struct bpf_prog)) _a =
	   (sizeof (struct bpf_prog));
	   __typeof__ (__builtin_offsetof (struct bpf_prog, insns[proglen]))
	   _b = (__builtin_offsetof (struct bpf_prog, insns[proglen]));
	   _a > _b ? _a : _b;
	   });
}

#368 "../include/filter.h"
static inline void
bpf_prog_lock_ro (struct bpf_prog *fp)
{
}

static inline void
bpf_prog_unlock_ro (struct bpf_prog *fp)
{
}


int sk_filter (struct sock *sk, struct sk_buff *skb);

void bpf_prog_select_runtime (struct bpf_prog *fp);
void bpf_prog_free (struct bpf_prog *fp);

int bpf_convert_filter (struct sock_filter *prog, int len,
			struct bpf_insn *new_prog, int *new_len);

struct bpf_prog *bpf_prog_alloc (unsigned int size);
struct bpf_prog *bpf_prog_realloc (struct bpf_prog *fp_old,
				   unsigned int size);
void __bpf_prog_free (struct bpf_prog *fp);
void fixup_bpf_calls (struct bpf_prog *prog);

static inline void
bpf_prog_unlock_free (struct bpf_prog *fp)
{
  bpf_prog_unlock_ro (fp);
  __bpf_prog_free (fp);
}

int bpf_prog_create (struct bpf_prog **pfp, struct sock_fprog_kern *fprog);
void bpf_prog_destroy (struct bpf_prog *fp);

int sk_attach_filter (struct sock_fprog *fprog, struct sock *sk);
int sk_attach_filter_ebpf (__u32 ufd, struct sock *sk);
int sk_detach_filter (struct sock *sk);

int bpf_check_classic (const struct sock_filter *filter, unsigned int flen);
int sk_get_filter (struct sock *sk, struct sock_filter *filter,
		   unsigned int len);

_Bool sk_filter_charge (struct sock *sk, struct sk_filter *fp);
void sk_filter_uncharge (struct sock *sk, struct sk_filter *fp);

__u64 __bpf_call_base (__u64 r1, __u64 r2, __u64 r3, __u64 r4, __u64 r5);
void bpf_int_jit_compile (struct bpf_prog *fp);


typedef void (*bpf_jit_fill_hole_t) (void *area, unsigned int size);

struct bpf_binary_header *bpf_jit_binary_alloc (unsigned int proglen,
						__u8 ** image_ptr,
						unsigned int alignment,
						bpf_jit_fill_hole_t
						bpf_fill_ill_insns);
void bpf_jit_binary_free (struct bpf_binary_header *hdr);

void bpf_jit_compile (struct bpf_prog *fp);
void bpf_jit_free (struct bpf_prog *fp);

static inline void
print_hex_dump (char *desc, void *addr, unsigned int len)
{
#454 "../include/filter.h"
  printf ("\n%s:\n", desc);

  ud_t ud_obj;
  ud_init (&ud_obj);
  ud_set_input_buffer (&ud_obj, (unsigned char *) addr, len);
  ud_set_mode (&ud_obj, 64);
  ud_set_syntax (&ud_obj, ud_translate_att);

  while (ud_disassemble (&ud_obj))
    {
      printf ("%-4x%-24s%-30s\n", ud_insn_off (&ud_obj),
	      ud_insn_hex (&ud_obj), ud_insn_asm (&ud_obj));
    }
  printf ("\n");
}

static inline void
bpf_jit_dump (unsigned int flen, unsigned int proglen,
	      __u32 pass, void *image)
{
  printf ("flen=%u proglen=%u pass=%u image=%pK\n",
	  flen, proglen, pass, image);
  if (image)
    print_hex_dump ("BPF JIT code", image, proglen);


}

#538 "../include/filter.h"
static inline int
bpf_tell_extensions (void)
{
  return 60;
}

#9 "retlif-lttng.c" 2
#1 "../include/bpf_trace.h" 1
#13 "../include/bpf_trace.h"
struct bpf_context
{
  __u64 arg1;
  __u64 arg2;
  __u64 arg3;
  __u64 arg4;
  __u64 arg5;
  __u64 arg6;
  __u64 ret;
};
#10 "retlif-lttng.c" 2

#1 "/usr/include/fcntl.h" 1 3 4
#28 "/usr/include/fcntl.h" 3 4







#1 "/usr/include/bits/fcntl.h" 1 3 4
#35 "/usr/include/bits/fcntl.h" 3 4
struct flock
{
  short int l_type;
  short int l_whence;

  __off_t l_start;
  __off_t l_len;




  __pid_t l_pid;
};
#61 "/usr/include/bits/fcntl.h" 3 4
#1 "/usr/include/bits/fcntl-linux.h" 1 3 4
#319 "/usr/include/bits/fcntl-linux.h" 3 4

#393 "/usr/include/bits/fcntl-linux.h" 3 4

#61 "/usr/include/bits/fcntl.h" 2 3 4
#36 "/usr/include/fcntl.h" 2 3 4
#67 "/usr/include/fcntl.h" 3 4
#1 "/usr/include/time.h" 1 3 4
#68 "/usr/include/fcntl.h" 2 3 4
#1 "/usr/include/bits/stat.h" 1 3 4
#46 "/usr/include/bits/stat.h" 3 4
struct stat
{
  __dev_t st_dev;




  __ino_t st_ino;







  __nlink_t st_nlink;
  __mode_t st_mode;

  __uid_t st_uid;
  __gid_t st_gid;

  int __pad0;

  __dev_t st_rdev;




  __off_t st_size;



  __blksize_t st_blksize;

  __blkcnt_t st_blocks;
#91 "/usr/include/bits/stat.h" 3 4
  struct timespec st_atim;
  struct timespec st_mtim;
  struct timespec st_ctim;
#106 "/usr/include/bits/stat.h" 3 4
  __syscall_slong_t __unused[3];
#115 "/usr/include/bits/stat.h" 3 4
};
#69 "/usr/include/fcntl.h" 2 3 4
#160 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
#169 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...)
  __attribute__ ((__nonnull__ (1)));
#193 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, const char *__file, int __oflag, ...)
  __attribute__ ((__nonnull__ (2)));
#215 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode)
  __attribute__ ((__nonnull__ (1)));
#261 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
			  int __advise)
  __attribute__ ((__nothrow__, __leaf__));
#283 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
#305 "/usr/include/fcntl.h" 3 4

#12 "retlif-lttng.c" 2
#1 "/usr/include/gelf.h" 1 3 4
#32 "/usr/include/gelf.h" 3 4
#1 "/usr/include/libelf.h" 1 3 4
#35 "/usr/include/libelf.h" 3 4
#1 "/usr/include/elf.h" 1 3 4
#24 "/usr/include/elf.h" 3 4







typedef uint16_t Elf32_Half;
typedef uint16_t Elf64_Half;


typedef uint32_t Elf32_Word;
typedef int32_t Elf32_Sword;
typedef uint32_t Elf64_Word;
typedef int32_t Elf64_Sword;


typedef uint64_t Elf32_Xword;
typedef int64_t Elf32_Sxword;
typedef uint64_t Elf64_Xword;
typedef int64_t Elf64_Sxword;


typedef uint32_t Elf32_Addr;
typedef uint64_t Elf64_Addr;


typedef uint32_t Elf32_Off;
typedef uint64_t Elf64_Off;


typedef uint16_t Elf32_Section;
typedef uint16_t Elf64_Section;


typedef Elf32_Half Elf32_Versym;
typedef Elf64_Half Elf64_Versym;






typedef struct
{
  unsigned char e_ident[(16)];
  Elf32_Half e_type;
  Elf32_Half e_machine;
  Elf32_Word e_version;
  Elf32_Addr e_entry;
  Elf32_Off e_phoff;
  Elf32_Off e_shoff;
  Elf32_Word e_flags;
  Elf32_Half e_ehsize;
  Elf32_Half e_phentsize;
  Elf32_Half e_phnum;
  Elf32_Half e_shentsize;
  Elf32_Half e_shnum;
  Elf32_Half e_shstrndx;
} Elf32_Ehdr;

typedef struct
{
  unsigned char e_ident[(16)];
  Elf64_Half e_type;
  Elf64_Half e_machine;
  Elf64_Word e_version;
  Elf64_Addr e_entry;
  Elf64_Off e_phoff;
  Elf64_Off e_shoff;
  Elf64_Word e_flags;
  Elf64_Half e_ehsize;
  Elf64_Half e_phentsize;
  Elf64_Half e_phnum;
  Elf64_Half e_shentsize;
  Elf64_Half e_shnum;
  Elf64_Half e_shstrndx;
} Elf64_Ehdr;
#272 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word sh_name;
  Elf32_Word sh_type;
  Elf32_Word sh_flags;
  Elf32_Addr sh_addr;
  Elf32_Off sh_offset;
  Elf32_Word sh_size;
  Elf32_Word sh_link;
  Elf32_Word sh_info;
  Elf32_Word sh_addralign;
  Elf32_Word sh_entsize;
} Elf32_Shdr;

typedef struct
{
  Elf64_Word sh_name;
  Elf64_Word sh_type;
  Elf64_Xword sh_flags;
  Elf64_Addr sh_addr;
  Elf64_Off sh_offset;
  Elf64_Xword sh_size;
  Elf64_Word sh_link;
  Elf64_Word sh_info;
  Elf64_Xword sh_addralign;
  Elf64_Xword sh_entsize;
} Elf64_Shdr;
#381 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word st_name;
  Elf32_Addr st_value;
  Elf32_Word st_size;
  unsigned char st_info;
  unsigned char st_other;
  Elf32_Section st_shndx;
} Elf32_Sym;

typedef struct
{
  Elf64_Word st_name;
  unsigned char st_info;
  unsigned char st_other;
  Elf64_Section st_shndx;
  Elf64_Addr st_value;
  Elf64_Xword st_size;
} Elf64_Sym;




typedef struct
{
  Elf32_Half si_boundto;
  Elf32_Half si_flags;
} Elf32_Syminfo;

typedef struct
{
  Elf64_Half si_boundto;
  Elf64_Half si_flags;
} Elf64_Syminfo;
#496 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
} Elf32_Rel;






typedef struct
{
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
} Elf64_Rel;



typedef struct
{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
  Elf32_Sword r_addend;
} Elf32_Rela;

typedef struct
{
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
  Elf64_Sxword r_addend;
} Elf64_Rela;
#541 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word p_type;
  Elf32_Off p_offset;
  Elf32_Addr p_vaddr;
  Elf32_Addr p_paddr;
  Elf32_Word p_filesz;
  Elf32_Word p_memsz;
  Elf32_Word p_flags;
  Elf32_Word p_align;
} Elf32_Phdr;

typedef struct
{
  Elf64_Word p_type;
  Elf64_Word p_flags;
  Elf64_Off p_offset;
  Elf64_Addr p_vaddr;
  Elf64_Addr p_paddr;
  Elf64_Xword p_filesz;
  Elf64_Xword p_memsz;
  Elf64_Xword p_align;
} Elf64_Phdr;
#652 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Sword d_tag;
  union
  {
    Elf32_Word d_val;
    Elf32_Addr d_ptr;
  } d_un;
} Elf32_Dyn;

typedef struct
{
  Elf64_Sxword d_tag;
  union
  {
    Elf64_Xword d_val;
    Elf64_Addr d_ptr;
  } d_un;
} Elf64_Dyn;
#828 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Half vd_version;
  Elf32_Half vd_flags;
  Elf32_Half vd_ndx;
  Elf32_Half vd_cnt;
  Elf32_Word vd_hash;
  Elf32_Word vd_aux;
  Elf32_Word vd_next;

} Elf32_Verdef;

typedef struct
{
  Elf64_Half vd_version;
  Elf64_Half vd_flags;
  Elf64_Half vd_ndx;
  Elf64_Half vd_cnt;
  Elf64_Word vd_hash;
  Elf64_Word vd_aux;
  Elf64_Word vd_next;

} Elf64_Verdef;
#870 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word vda_name;
  Elf32_Word vda_next;

} Elf32_Verdaux;

typedef struct
{
  Elf64_Word vda_name;
  Elf64_Word vda_next;

} Elf64_Verdaux;




typedef struct
{
  Elf32_Half vn_version;
  Elf32_Half vn_cnt;
  Elf32_Word vn_file;

  Elf32_Word vn_aux;
  Elf32_Word vn_next;

} Elf32_Verneed;

typedef struct
{
  Elf64_Half vn_version;
  Elf64_Half vn_cnt;
  Elf64_Word vn_file;

  Elf64_Word vn_aux;
  Elf64_Word vn_next;

} Elf64_Verneed;
#917 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word vna_hash;
  Elf32_Half vna_flags;
  Elf32_Half vna_other;
  Elf32_Word vna_name;
  Elf32_Word vna_next;

} Elf32_Vernaux;

typedef struct
{
  Elf64_Word vna_hash;
  Elf64_Half vna_flags;
  Elf64_Half vna_other;
  Elf64_Word vna_name;
  Elf64_Word vna_next;

} Elf64_Vernaux;
#951 "/usr/include/elf.h" 3 4
typedef struct
{
  uint32_t a_type;
  union
  {
    uint32_t a_val;



  } a_un;
} Elf32_auxv_t;

typedef struct
{
  uint64_t a_type;
  union
  {
    uint64_t a_val;



  } a_un;
} Elf64_auxv_t;
#1038 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word n_namesz;
  Elf32_Word n_descsz;
  Elf32_Word n_type;
} Elf32_Nhdr;

typedef struct
{
  Elf64_Word n_namesz;
  Elf64_Word n_descsz;
  Elf64_Word n_type;
} Elf64_Nhdr;
#1102 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Xword m_value;
  Elf32_Word m_info;
  Elf32_Word m_poffset;
  Elf32_Half m_repeat;
  Elf32_Half m_stride;
} Elf32_Move;

typedef struct
{
  Elf64_Xword m_value;
  Elf64_Xword m_info;
  Elf64_Xword m_poffset;
  Elf64_Half m_repeat;
  Elf64_Half m_stride;
} Elf64_Move;
#1487 "/usr/include/elf.h" 3 4
typedef union
{
  struct
  {
    Elf32_Word gt_current_g_value;
    Elf32_Word gt_unused;
  } gt_header;
  struct
  {
    Elf32_Word gt_g_value;
    Elf32_Word gt_bytes;
  } gt_entry;
} Elf32_gptab;



typedef struct
{
  Elf32_Word ri_gprmask;
  Elf32_Word ri_cprmask[4];
  Elf32_Sword ri_gp_value;
} Elf32_RegInfo;



typedef struct
{
  unsigned char kind;

  unsigned char size;
  Elf32_Section section;

  Elf32_Word info;
} Elf_Options;
#1563 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word hwp_flags1;
  Elf32_Word hwp_flags2;
} Elf_Options_Hw;
#1724 "/usr/include/elf.h" 3 4
typedef struct
{
  Elf32_Word l_name;
  Elf32_Word l_time_stamp;
  Elf32_Word l_checksum;
  Elf32_Word l_version;
  Elf32_Word l_flags;
} Elf32_Lib;

typedef struct
{
  Elf64_Word l_name;
  Elf64_Word l_time_stamp;
  Elf64_Word l_checksum;
  Elf64_Word l_version;
  Elf64_Word l_flags;
} Elf64_Lib;
#1755 "/usr/include/elf.h" 3 4
typedef Elf32_Addr Elf32_Conflict;
#3220 "/usr/include/elf.h" 3 4

#36 "/usr/include/libelf.h" 2 3 4



typedef enum
{
  ELF_T_BYTE,
  ELF_T_ADDR,
  ELF_T_DYN,
  ELF_T_EHDR,
  ELF_T_HALF,
  ELF_T_OFF,
  ELF_T_PHDR,
  ELF_T_RELA,
  ELF_T_REL,
  ELF_T_SHDR,
  ELF_T_SWORD,
  ELF_T_SYM,
  ELF_T_WORD,
  ELF_T_XWORD,
  ELF_T_SXWORD,
  ELF_T_VDEF,
  ELF_T_VDAUX,
  ELF_T_VNEED,
  ELF_T_VNAUX,
  ELF_T_NHDR,
  ELF_T_SYMINFO,
  ELF_T_MOVE,
  ELF_T_LIB,
  ELF_T_GNUHASH,
  ELF_T_AUXV,

  ELF_T_NUM
} Elf_Type;


typedef struct
{
  void *d_buf;
  Elf_Type d_type;
  unsigned int d_version;
  size_t d_size;
  loff_t d_off;
  size_t d_align;
} Elf_Data;



typedef enum
{
  ELF_C_NULL,
  ELF_C_READ,
  ELF_C_RDWR,
  ELF_C_WRITE,
  ELF_C_CLR,
  ELF_C_SET,
  ELF_C_FDDONE,

  ELF_C_FDREAD,


  ELF_C_READ_MMAP,
  ELF_C_RDWR_MMAP,
  ELF_C_WRITE_MMAP,
  ELF_C_READ_MMAP_PRIVATE,

  ELF_C_EMPTY,

  ELF_C_NUM
} Elf_Cmd;



enum
{
  ELF_F_DIRTY = 0x1,

  ELF_F_LAYOUT = 0x4,

  ELF_F_PERMISSIVE = 0x8
};



typedef enum
{
  ELF_K_NONE,
  ELF_K_AR,
  ELF_K_COFF,
  ELF_K_ELF,

  ELF_K_NUM
} Elf_Kind;



typedef struct
{
  char *ar_name;
  time_t ar_date;
  uid_t ar_uid;
  gid_t ar_gid;
  mode_t ar_mode;
  loff_t ar_size;
  char *ar_rawname;
} Elf_Arhdr;



typedef struct
{
  char *as_name;
  size_t as_off;
  unsigned long int as_hash;
} Elf_Arsym;



typedef struct Elf Elf;


typedef struct Elf_Scn Elf_Scn;







extern Elf *elf_begin (int __fildes, Elf_Cmd __cmd, Elf * __ref);


extern Elf *elf_clone (Elf * __elf, Elf_Cmd __cmd);


extern Elf *elf_memory (char *__image, size_t __size);


extern Elf_Cmd elf_next (Elf * __elf);


extern int elf_end (Elf * __elf);


extern loff_t elf_update (Elf * __elf, Elf_Cmd __cmd);


extern Elf_Kind elf_kind (Elf * __elf) __attribute__ ((__pure__));


extern loff_t elf_getbase (Elf * __elf);



extern char *elf_getident (Elf * __elf, size_t * __nbytes);


extern Elf32_Ehdr *elf32_getehdr (Elf * __elf);

extern Elf64_Ehdr *elf64_getehdr (Elf * __elf);


extern Elf32_Ehdr *elf32_newehdr (Elf * __elf);

extern Elf64_Ehdr *elf64_newehdr (Elf * __elf);





extern int elf_getphdrnum (Elf * __elf, size_t * __dst);


extern Elf32_Phdr *elf32_getphdr (Elf * __elf);

extern Elf64_Phdr *elf64_getphdr (Elf * __elf);


extern Elf32_Phdr *elf32_newphdr (Elf * __elf, size_t __cnt);

extern Elf64_Phdr *elf64_newphdr (Elf * __elf, size_t __cnt);



extern Elf_Scn *elf_getscn (Elf * __elf, size_t __index);


extern Elf_Scn *elf32_offscn (Elf * __elf, Elf32_Off __offset);

extern Elf_Scn *elf64_offscn (Elf * __elf, Elf64_Off __offset);


extern size_t elf_ndxscn (Elf_Scn * __scn);


extern Elf_Scn *elf_nextscn (Elf * __elf, Elf_Scn * __scn);


extern Elf_Scn *elf_newscn (Elf * __elf);



extern int elf_scnshndx (Elf_Scn * __scn);





extern int elf_getshdrnum (Elf * __elf, size_t * __dst);



extern int elf_getshnum (Elf * __elf, size_t * __dst)
  __attribute__ ((__deprecated__));






extern int elf_getshdrstrndx (Elf * __elf, size_t * __dst);



extern int elf_getshstrndx (Elf * __elf, size_t * __dst)
  __attribute__ ((__deprecated__));



extern Elf32_Shdr *elf32_getshdr (Elf_Scn * __scn);

extern Elf64_Shdr *elf64_getshdr (Elf_Scn * __scn);



extern unsigned int elf_flagelf (Elf * __elf, Elf_Cmd __cmd,
				 unsigned int __flags);

extern unsigned int elf_flagehdr (Elf * __elf, Elf_Cmd __cmd,
				  unsigned int __flags);

extern unsigned int elf_flagphdr (Elf * __elf, Elf_Cmd __cmd,
				  unsigned int __flags);

extern unsigned int elf_flagscn (Elf_Scn * __scn, Elf_Cmd __cmd,
				 unsigned int __flags);

extern unsigned int elf_flagdata (Elf_Data * __data, Elf_Cmd __cmd,
				  unsigned int __flags);

extern unsigned int elf_flagshdr (Elf_Scn * __scn, Elf_Cmd __cmd,
				  unsigned int __flags);




extern Elf_Data *elf_getdata (Elf_Scn * __scn, Elf_Data * __data);


extern Elf_Data *elf_rawdata (Elf_Scn * __scn, Elf_Data * __data);


extern Elf_Data *elf_newdata (Elf_Scn * __scn);




extern Elf_Data *elf_getdata_rawchunk (Elf * __elf,
				       loff_t __offset, size_t __size,
				       Elf_Type __type);



extern char *elf_strptr (Elf * __elf, size_t __index, size_t __offset);



extern Elf_Arhdr *elf_getarhdr (Elf * __elf);


extern loff_t elf_getaroff (Elf * __elf);


extern size_t elf_rand (Elf * __elf, size_t __offset);


extern Elf_Arsym *elf_getarsym (Elf * __elf, size_t * __narsyms);



extern int elf_cntl (Elf * __elf, Elf_Cmd __cmd);


extern char *elf_rawfile (Elf * __elf, size_t * __nbytes);





extern size_t elf32_fsize (Elf_Type __type, size_t __count,
			   unsigned int __version)
  __attribute__ ((__const__));

extern size_t elf64_fsize (Elf_Type __type, size_t __count,
			   unsigned int __version)
  __attribute__ ((__const__));




extern Elf_Data *elf32_xlatetom (Elf_Data * __dest, const Elf_Data * __src,
				 unsigned int __encode);

extern Elf_Data *elf64_xlatetom (Elf_Data * __dest, const Elf_Data * __src,
				 unsigned int __encode);



extern Elf_Data *elf32_xlatetof (Elf_Data * __dest, const Elf_Data * __src,
				 unsigned int __encode);

extern Elf_Data *elf64_xlatetof (Elf_Data * __dest, const Elf_Data * __src,
				 unsigned int __encode);




extern int elf_errno (void);





extern const char *elf_errmsg (int __error);



extern unsigned int elf_version (unsigned int __version);


extern void elf_fill (int __fill);


extern unsigned long int elf_hash (const char *__string)
  __attribute__ ((__pure__));


extern unsigned long int elf_gnu_hash (const char *__string)
  __attribute__ ((__pure__));



extern long int elf32_checksum (Elf * __elf);

extern long int elf64_checksum (Elf * __elf);
#33 "/usr/include/gelf.h" 2 3 4
#44 "/usr/include/gelf.h" 3 4
typedef Elf64_Half GElf_Half;


typedef Elf64_Word GElf_Word;
typedef Elf64_Sword GElf_Sword;


typedef Elf64_Xword GElf_Xword;
typedef Elf64_Sxword GElf_Sxword;


typedef Elf64_Addr GElf_Addr;


typedef Elf64_Off GElf_Off;



typedef Elf64_Ehdr GElf_Ehdr;


typedef Elf64_Shdr GElf_Shdr;




typedef Elf64_Section GElf_Section;


typedef Elf64_Sym GElf_Sym;



typedef Elf64_Syminfo GElf_Syminfo;


typedef Elf64_Rel GElf_Rel;


typedef Elf64_Rela GElf_Rela;


typedef Elf64_Phdr GElf_Phdr;


typedef Elf64_Dyn GElf_Dyn;



typedef Elf64_Verdef GElf_Verdef;


typedef Elf64_Verdaux GElf_Verdaux;


typedef Elf64_Verneed GElf_Verneed;


typedef Elf64_Vernaux GElf_Vernaux;



typedef Elf64_Versym GElf_Versym;



typedef Elf64_auxv_t GElf_auxv_t;



typedef Elf64_Nhdr GElf_Nhdr;



typedef Elf64_Move GElf_Move;



typedef Elf64_Lib GElf_Lib;
#150 "/usr/include/gelf.h" 3 4
extern int gelf_getclass (Elf * __elf);





extern size_t gelf_fsize (Elf * __elf, Elf_Type __type, size_t __count,
			  unsigned int __version);


extern GElf_Ehdr *gelf_getehdr (Elf * __elf, GElf_Ehdr * __dest);


extern int gelf_update_ehdr (Elf * __elf, GElf_Ehdr * __src);


extern unsigned long int gelf_newehdr (Elf * __elf, int __class);


extern Elf_Scn *gelf_offscn (Elf * __elf, GElf_Off __offset);


extern GElf_Shdr *gelf_getshdr (Elf_Scn * __scn, GElf_Shdr * __dst);


extern int gelf_update_shdr (Elf_Scn * __scn, GElf_Shdr * __src);


extern GElf_Phdr *gelf_getphdr (Elf * __elf, int __ndx, GElf_Phdr * __dst);


extern int gelf_update_phdr (Elf * __elf, int __ndx, GElf_Phdr * __src);


extern unsigned long int gelf_newphdr (Elf * __elf, size_t __phnum);




extern Elf_Data *gelf_xlatetom (Elf * __elf, Elf_Data * __dest,
				const Elf_Data * __src,
				unsigned int __encode);



extern Elf_Data *gelf_xlatetof (Elf * __elf, Elf_Data * __dest,
				const Elf_Data * __src,
				unsigned int __encode);



extern GElf_Rel *gelf_getrel (Elf_Data * __data, int __ndx, GElf_Rel * __dst);


extern GElf_Rela *gelf_getrela (Elf_Data * __data, int __ndx,
				GElf_Rela * __dst);


extern int gelf_update_rel (Elf_Data * __dst, int __ndx, GElf_Rel * __src);


extern int gelf_update_rela (Elf_Data * __dst, int __ndx, GElf_Rela * __src);



extern GElf_Sym *gelf_getsym (Elf_Data * __data, int __ndx, GElf_Sym * __dst);


extern int gelf_update_sym (Elf_Data * __data, int __ndx, GElf_Sym * __src);




extern GElf_Sym *gelf_getsymshndx (Elf_Data * __symdata,
				   Elf_Data * __shndxdata, int __ndx,
				   GElf_Sym * __sym, Elf32_Word * __xshndx);



extern int gelf_update_symshndx (Elf_Data * __symdata, Elf_Data * __shndxdata,
				 int __ndx, GElf_Sym * __sym,
				 Elf32_Word __xshndx);




extern GElf_Syminfo *gelf_getsyminfo (Elf_Data * __data, int __ndx,
				      GElf_Syminfo * __dst);



extern int gelf_update_syminfo (Elf_Data * __data, int __ndx,
				GElf_Syminfo * __src);



extern GElf_Dyn *gelf_getdyn (Elf_Data * __data, int __ndx, GElf_Dyn * __dst);


extern int gelf_update_dyn (Elf_Data * __dst, int __ndx, GElf_Dyn * __src);



extern GElf_Move *gelf_getmove (Elf_Data * __data, int __ndx,
				GElf_Move * __dst);


extern int gelf_update_move (Elf_Data * __data, int __ndx, GElf_Move * __src);



extern GElf_Lib *gelf_getlib (Elf_Data * __data, int __ndx, GElf_Lib * __dst);


extern int gelf_update_lib (Elf_Data * __data, int __ndx, GElf_Lib * __src);




extern GElf_Versym *gelf_getversym (Elf_Data * __data, int __ndx,
				    GElf_Versym * __dst);


extern int gelf_update_versym (Elf_Data * __data, int __ndx,
			       GElf_Versym * __src);



extern GElf_Verneed *gelf_getverneed (Elf_Data * __data, int __offset,
				      GElf_Verneed * __dst);


extern int gelf_update_verneed (Elf_Data * __data, int __offset,
				GElf_Verneed * __src);


extern GElf_Vernaux *gelf_getvernaux (Elf_Data * __data, int __offset,
				      GElf_Vernaux * __dst);


extern int gelf_update_vernaux (Elf_Data * __data, int __offset,
				GElf_Vernaux * __src);



extern GElf_Verdef *gelf_getverdef (Elf_Data * __data, int __offset,
				    GElf_Verdef * __dst);


extern int gelf_update_verdef (Elf_Data * __data, int __offset,
			       GElf_Verdef * __src);



extern GElf_Verdaux *gelf_getverdaux (Elf_Data * __data, int __offset,
				      GElf_Verdaux * __dst);


extern int gelf_update_verdaux (Elf_Data * __data, int __offset,
				GElf_Verdaux * __src);



extern GElf_auxv_t *gelf_getauxv (Elf_Data * __data, int __ndx,
				  GElf_auxv_t * __dst);


extern int gelf_update_auxv (Elf_Data * __data, int __ndx,
			     GElf_auxv_t * __src);





extern size_t gelf_getnote (Elf_Data * __data, size_t __offset,
			    GElf_Nhdr * __result,
			    size_t * __name_offset, size_t * __desc_offset);



extern long int gelf_checksum (Elf * __elf);
#13 "retlif-lttng.c" 2

#1 "filter.h" 1
static int (*bpf_strcmp) (void *ptr1, void *ptr2) = (void *) BPF_FUNC_strcmp;

struct filt_args
{

  char *str0;

  char *str1;

  char *str2;

  char *str3;

  char *str4;

  int int1;
};
#15 "retlif-lttng.c" 2




#1 "retlif-lttng_tp.h" 1
#14 "retlif-lttng_tp.h"
#1 "/usr/local/include/lttng/tracepoint.h" 1 3
#28 "/usr/local/include/lttng/tracepoint.h" 3
#1 "/usr/local/include/lttng/tracepoint-types.h" 1 3
#26 "/usr/local/include/lttng/tracepoint-types.h" 3
struct lttng_ust_tracepoint_probe
{
  void (*func) (void);
  void *data;
};


struct lttng_ust_tracepoint
{
  const char *name;
  int state;
  struct lttng_ust_tracepoint_probe *probes;
  int *tracepoint_provider_ref;
  const char *signature;
  char padding[16];
};
#29 "/usr/local/include/lttng/tracepoint.h" 2 3
#1 "/usr/local/include/lttng/tracepoint-rcu.h" 1 3
#26 "/usr/local/include/lttng/tracepoint-rcu.h" 3
#1 "/usr/local/include/urcu/compiler.h" 1 3
#22 "/usr/local/include/urcu/compiler.h" 3
#1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stddef.h" 1 3 4
#23 "/usr/local/include/urcu/compiler.h" 2 3
#27 "/usr/local/include/lttng/tracepoint-rcu.h" 2 3
#30 "/usr/local/include/lttng/tracepoint.h" 2 3

#1 "/usr/include/dlfcn.h" 1 3 4
#24 "/usr/include/dlfcn.h" 3 4
#1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stddef.h" 1 3 4
#25 "/usr/include/dlfcn.h" 2 3 4


#1 "/usr/include/bits/dlfcn.h" 1 3 4
#28 "/usr/include/dlfcn.h" 2 3 4
#52 "/usr/include/dlfcn.h" 3 4




extern void *dlopen (const char *__file, int __mode)
  __attribute__ ((__nothrow__, __leaf__));



extern int dlclose (void *__handle) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1)));



extern void *dlsym (void *__restrict __handle,
		    const char *__restrict __name)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (2)));
#82 "/usr/include/dlfcn.h" 3 4
extern char *dlerror (void) __attribute__ ((__nothrow__, __leaf__));
#188 "/usr/include/dlfcn.h" 3 4

#32 "/usr/local/include/lttng/tracepoint.h" 2 3

#1 "/usr/local/include/lttng/ust-config.h" 1 3
#34 "/usr/local/include/lttng/tracepoint.h" 2 3
#1 "/usr/local/include/lttng/ust-compiler.h" 1 3
#35 "/usr/local/include/lttng/tracepoint.h" 2 3
#198 "/usr/local/include/lttng/tracepoint.h" 3
extern int __tracepoint_probe_register (const char *name, void (*func) (void),
					void *data, const char *signature);
extern int __tracepoint_probe_unregister (const char *name,
					  void (*func) (void), void *data);





struct lttng_ust_tracepoint_dlopen
{
  void *liblttngust_handle;

  int (*tracepoint_register_lib) (struct lttng_ust_tracepoint *
				  const *tracepoints_start,
				  int tracepoints_count);
  int (*tracepoint_unregister_lib) (struct lttng_ust_tracepoint *
				    const *tracepoints_start);

  void (*rcu_read_lock_sym_bp) (void);
  void (*rcu_read_unlock_sym_bp) (void);
  void *(*rcu_dereference_sym_bp) (void *p);

};

extern struct lttng_ust_tracepoint_dlopen tracepoint_dlopen;
#229 "/usr/local/include/lttng/tracepoint.h" 3
int __tracepoint_registered __attribute__ ((weak, visibility ("hidden")));
int __tracepoint_ptrs_registered
  __attribute__ ((weak, visibility ("hidden")));
struct lttng_ust_tracepoint_dlopen tracepoint_dlopen
  __attribute__ ((weak, visibility ("hidden")));


static inline void __attribute__ ((no_instrument_function))
__tracepoint__init_urcu_sym (void);
static inline void
__tracepoint__init_urcu_sym (void)
{




  if (!tracepoint_dlopen.rcu_read_lock_sym_bp)
    tracepoint_dlopen.rcu_read_lock_sym_bp =
      ((void (*)(void))
       (dlsym (tracepoint_dlopen.liblttngust_handle, "tp_rcu_read_lock_bp")));
  if (!tracepoint_dlopen.rcu_read_unlock_sym_bp)
    tracepoint_dlopen.rcu_read_unlock_sym_bp =
      ((void (*)(void))
       (dlsym
	(tracepoint_dlopen.liblttngust_handle, "tp_rcu_read_unlock_bp")));
  if (!tracepoint_dlopen.rcu_dereference_sym_bp)
    tracepoint_dlopen.rcu_dereference_sym_bp =
      ((void
	*(*)(void *p)) (dlsym (tracepoint_dlopen.liblttngust_handle,
			       "tp_rcu_dereference_sym_bp")));
}

#271 "/usr/local/include/lttng/tracepoint.h" 3
static void __attribute__ ((no_instrument_function))
  __attribute__ ((constructor)) __tracepoints__init (void);
static void
__tracepoints__init (void)
{
  if (__tracepoint_registered++)
    return;

  if (!tracepoint_dlopen.liblttngust_handle)
    tracepoint_dlopen.liblttngust_handle =
      dlopen ("liblttng-ust-tracepoint.so.0", 0x00002 | 0x00100);
  if (!tracepoint_dlopen.liblttngust_handle)
    return;
  __tracepoint__init_urcu_sym ();
}

static void __attribute__ ((no_instrument_function))
  __attribute__ ((destructor)) __tracepoints__destroy (void);
static void
__tracepoints__destroy (void)
{
  int ret;

  if (--__tracepoint_registered)
    return;
  if (tracepoint_dlopen.liblttngust_handle && !__tracepoint_ptrs_registered)
    {
      ret = dlclose (tracepoint_dlopen.liblttngust_handle);
      if (ret)
	{
	  fprintf (stderr, "Error (%d) in dlclose\n", ret);
	  abort ();
	}
      memset (&tracepoint_dlopen, 0, sizeof (tracepoint_dlopen));
    }
}

#315 "/usr/local/include/lttng/tracepoint.h" 3
extern struct lttng_ust_tracepoint *const __start___tracepoints_ptrs[]
  __attribute__ ((weak, visibility ("hidden")));
extern struct lttng_ust_tracepoint *const __stop___tracepoints_ptrs[]
  __attribute__ ((weak, visibility ("hidden")));
#362 "/usr/local/include/lttng/tracepoint.h" 3
static void __attribute__ ((no_instrument_function))
  __attribute__ ((constructor)) __tracepoints__ptrs_init (void);
static void
__tracepoints__ptrs_init (void)
{
  if (__tracepoint_ptrs_registered++)
    return;
  if (!tracepoint_dlopen.liblttngust_handle)
    tracepoint_dlopen.liblttngust_handle =
      dlopen ("liblttng-ust-tracepoint.so.0", 0x00002 | 0x00100);
  if (!tracepoint_dlopen.liblttngust_handle)
    return;
  tracepoint_dlopen.tracepoint_register_lib =
    ((int (*)(struct lttng_ust_tracepoint * const *, int))
     (dlsym
      (tracepoint_dlopen.liblttngust_handle, "tracepoint_register_lib")));
  tracepoint_dlopen.tracepoint_unregister_lib =
    ((int (*)(struct lttng_ust_tracepoint * const *))
     (dlsym
      (tracepoint_dlopen.liblttngust_handle, "tracepoint_unregister_lib")));
  __tracepoint__init_urcu_sym ();
  if (tracepoint_dlopen.tracepoint_register_lib)
    {
      tracepoint_dlopen.tracepoint_register_lib (__start___tracepoints_ptrs,
						 __stop___tracepoints_ptrs -
						 __start___tracepoints_ptrs);
    }
}

static void __attribute__ ((no_instrument_function))
  __attribute__ ((destructor)) __tracepoints__ptrs_destroy (void);
static void
__tracepoints__ptrs_destroy (void)
{
  int ret;

  if (--__tracepoint_ptrs_registered)
    return;
  if (tracepoint_dlopen.tracepoint_unregister_lib)
    tracepoint_dlopen.tracepoint_unregister_lib (__start___tracepoints_ptrs);
  if (tracepoint_dlopen.liblttngust_handle && !__tracepoint_registered)
    {
      ret = dlclose (tracepoint_dlopen.liblttngust_handle);
      if (ret)
	{
	  fprintf (stderr, "Error (%d) in dlclose\n", ret);
	  abort ();
	}
      memset (&tracepoint_dlopen, 0, sizeof (tracepoint_dlopen));
    }
}

#590 "/usr/local/include/lttng/tracepoint.h" 3
enum
{
  TRACE_EMERG = 0,
  TRACE_ALERT = 1,
  TRACE_CRIT = 2,
  TRACE_ERR = 3,
  TRACE_WARNING = 4,
  TRACE_NOTICE = 5,
  TRACE_INFO = 6,
  TRACE_DEBUG_SYSTEM = 7,
  TRACE_DEBUG_PROGRAM = 8,
  TRACE_DEBUG_PROCESS = 9,
  TRACE_DEBUG_MODULE = 10,
  TRACE_DEBUG_UNIT = 11,
  TRACE_DEBUG_FUNCTION = 12,
  TRACE_DEBUG_LINE = 13,
  TRACE_DEBUG = 14,
};
#15 "retlif-lttng_tp.h" 2
#23 "retlif-lttng_tp.h"
extern struct lttng_ust_tracepoint __tracepoint_retlif_tp___tpfilt;
static inline __attribute__ ((always_inline, unused))
  __attribute__ ((no_instrument_function))
     void __tracepoint_cb_retlif_tp___tpfilt (char *str0, char *str1,
					      char *str2, char *str3,
					      char *str4, int life);
     static void __tracepoint_cb_retlif_tp___tpfilt (char *str0, char *str1,
						     char *str2, char *str3,
						     char *str4, int life)
{
  struct lttng_ust_tracepoint_probe *__tp_probe;
  if (__builtin_expect (! !(!tracepoint_dlopen.rcu_read_lock_sym_bp), 0))
    return;
  tracepoint_dlopen.rcu_read_lock_sym_bp ();
  __tp_probe =
    ((__typeof__ (__tracepoint_retlif_tp___tpfilt.probes))
     (tracepoint_dlopen.
      rcu_dereference_sym_bp (((void *) (__tracepoint_retlif_tp___tpfilt.
					 probes)))));
  if (__builtin_expect (! !(!__tp_probe), 0))
    goto end;
  do
    {
      void (*__tp_cb) (void) = __tp_probe->func;
      void *__tp_data = __tp_probe->data;
      ((void (*)
	(void *__tp_data, char *str0, char *str1, char *str2, char *str3,
	 char *str4, int life)) (__tp_cb)) (__tp_data, str0, str1, str2, str3,
					    str4, life);
    }
  while ((++__tp_probe)->func);
end:tracepoint_dlopen.rcu_read_unlock_sym_bp ();
}

static inline __attribute__ ((no_instrument_function))
     void __tracepoint_register_retlif_tp___tpfilt (char *name,
						    void (*func) (void),
						    void *data);
     static inline void __tracepoint_register_retlif_tp___tpfilt (char *name,
								  void (*func)
								  (void),
								  void *data)
{
  __tracepoint_probe_register (name, func, data,
			       __tracepoint_retlif_tp___tpfilt.signature);
} static inline __attribute__ ((no_instrument_function))

     void __tracepoint_unregister_retlif_tp___tpfilt (char *name,
						      void (*func) (void),
						      void *data);
     static inline void __tracepoint_unregister_retlif_tp___tpfilt (char
								    *name,
								    void
								    (*func)
								    (void),
								    void
								    *data)
{
  __tracepoint_probe_unregister (name, func, data);
} extern int __tracepoint_provider_retlif_tp;

static const char __tp_strtab_retlif_tp___tpfilt[]
  __attribute__ ((section ("__tracepoints_strings"))) =
  "retlif_tp" ":" "tpfilt";
struct lttng_ust_tracepoint __tracepoint_retlif_tp___tpfilt
  __attribute__ ((section ("__tracepoints"))) =
{
  __tp_strtab_retlif_tp___tpfilt, 0, ((void *) 0),
    &__tracepoint_provider_retlif_tp,
    "char*, str0, char*, str1, char*, str2, char*, str3, char*, str4, int, life",
  {
},};

static struct lttng_ust_tracepoint *__tracepoint_ptr_retlif_tp___tpfilt
  __attribute__ ((used, section ("__tracepoints_ptrs"))) =
  &__tracepoint_retlif_tp___tpfilt;
#57 "retlif-lttng_tp.h"
#1 "/usr/local/include/lttng/tracepoint-event.h" 1 3
#56 "/usr/local/include/lttng/tracepoint-event.h" 3
#1 "././retlif-lttng_tp.h" 1 3
#14 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint.h" 1 3
#15 "././retlif-lttng_tp.h" 2 3
#23 "././retlif-lttng_tp.h" 3

#57 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint-event.h" 1 3
#58 "././retlif-lttng_tp.h" 2 3
#57 "/usr/local/include/lttng/tracepoint-event.h" 2 3

#1 "/usr/local/include/lttng/ust-tracepoint-event.h" 1 3
#26 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "/usr/local/include/urcu/rculist.h" 1 3
#28 "/usr/local/include/urcu/rculist.h" 3
#1 "/usr/local/include/urcu/list.h" 1 3
#35 "/usr/local/include/urcu/list.h" 3
struct cds_list_head
{
  struct cds_list_head *next, *prev;
};
#50 "/usr/local/include/urcu/list.h" 3
static inline void
cds_list_add (struct cds_list_head *newp, struct cds_list_head *head)
{
  head->next->prev = newp;
  newp->next = head->next;
  newp->prev = head;
  head->next = newp;
}


static inline void
cds_list_add_tail (struct cds_list_head *newp, struct cds_list_head *head)
{
  head->prev->next = newp;
  newp->next = head;
  newp->prev = head->prev;
  head->prev = newp;
}


static inline void
__cds_list_del (struct cds_list_head *prev, struct cds_list_head *next)
{
  next->prev = prev;
  prev->next = next;
}


static inline void
cds_list_del (struct cds_list_head *elem)
{
  __cds_list_del (elem->prev, elem->next);
}


static inline void
cds_list_del_init (struct cds_list_head *elem)
{
  cds_list_del (elem);
  (elem)->next = (elem)->prev = (elem);
}


static inline void
cds_list_move (struct cds_list_head *elem, struct cds_list_head *head)
{
  __cds_list_del (elem->prev, elem->next);
  cds_list_add (elem, head);
}


static inline void
cds_list_replace (struct cds_list_head *old, struct cds_list_head *_new)
{
  _new->next = old->next;
  _new->prev = old->prev;
  _new->prev->next = _new;
  _new->next->prev = _new;
}


static inline void
cds_list_splice (struct cds_list_head *add, struct cds_list_head *head)
{

  if (add != add->next)
    {
      add->next->prev = head;
      add->prev->next = head->next;
      head->next->prev = add->prev;
      head->next = add->next;
    }
}

#174 "/usr/local/include/urcu/list.h" 3
static inline int
cds_list_empty (struct cds_list_head *head)
{
  return head == head->next;
}

static inline void
cds_list_replace_init (struct cds_list_head *old, struct cds_list_head *_new)
{
  struct cds_list_head *head = old->next;

  cds_list_del (old);
  cds_list_add_tail (_new, head);
  (old)->next = (old)->prev = (old);
}

#29 "/usr/local/include/urcu/rculist.h" 2 3
#1 "/usr/local/include/urcu/arch.h" 1 3
#26 "/usr/local/include/urcu/arch.h" 3
#1 "/usr/local/include/urcu/config.h" 1 3
#27 "/usr/local/include/urcu/arch.h" 2 3
#73 "/usr/local/include/urcu/arch.h" 3
typedef unsigned long long cycles_t;

static inline cycles_t
caa_get_cycles (void)
{
  cycles_t ret = 0;

  do
    {
      unsigned int __a, __d;
      __asm__ __volatile__ ("rdtsc":"=a" (__a), "=d" (__d));
      (ret) = ((unsigned long long) __a) | (((unsigned long long) __d) << 32);
    }
  while (0);
  return ret;
}





#1 "/usr/local/include/urcu/arch/generic.h" 1 3
#25 "/usr/local/include/urcu/arch/generic.h" 3
#1 "/usr/local/include/urcu/config.h" 1 3
#26 "/usr/local/include/urcu/arch/generic.h" 2 3
#88 "/usr/local/include/urcu/arch.h" 2 3
#30 "/usr/local/include/urcu/rculist.h" 2 3
#1 "/usr/local/include/urcu-pointer.h" 1 3
#31 "/usr/local/include/urcu-pointer.h" 3
#1 "/usr/local/include/urcu/uatomic.h" 1 3
#24 "/usr/local/include/urcu/uatomic.h" 3
#1 "/usr/local/include/urcu/system.h" 1 3
#25 "/usr/local/include/urcu/uatomic.h" 2 3
#37 "/usr/local/include/urcu/uatomic.h" 3
struct __uatomic_dummy
{
  unsigned long v[10];
};






static inline __attribute__ ((always_inline))
     unsigned long __uatomic_cmpxchg (void *addr, unsigned long old,
				      unsigned long _new, int len)
{
  switch (len)
    {
    case 1:
      {
	unsigned char result = old;

	__asm__ __volatile__ ("lock; cmpxchgb %2, %1":"+a" (result),
			      "+m" (*((struct __uatomic_dummy *) (addr))):"q"
			      ((unsigned char) _new):"memory");
	return result;
      }
    case 2:
      {
	unsigned short result = old;

	__asm__ __volatile__ ("lock; cmpxchgw %2, %1":"+a" (result),
			      "+m" (*((struct __uatomic_dummy *) (addr))):"r"
			      ((unsigned short) _new):"memory");
	return result;
      }
    case 4:
      {
	unsigned int result = old;

	__asm__ __volatile__ ("lock; cmpxchgl %2, %1":"+a" (result),
			      "+m" (*((struct __uatomic_dummy *) (addr))):"r"
			      ((unsigned int) _new):"memory");
	return result;
      }

    case 8:
      {
	unsigned long result = old;

	__asm__ __volatile__ ("lock; cmpxchgq %2, %1":"+a" (result),
			      "+m" (*((struct __uatomic_dummy *) (addr))):"r"
			      ((unsigned long) _new):"memory");
	return result;
      }

    }




  __asm__ __volatile__ ("ud2");
  return 0;
}

#114 "/usr/local/include/urcu/uatomic.h" 3
static inline __attribute__ ((always_inline))
     unsigned long __uatomic_exchange (void *addr, unsigned long val, int len)
{

  switch (len)
    {
    case 1:
      {
	unsigned char result;
	__asm__ __volatile__ ("xchgb %0, %1":"=q" (result),
			      "+m" (*((struct __uatomic_dummy *) (addr))):"0"
			      ((unsigned char) val):"memory");
	return result;
      }
    case 2:
      {
	unsigned short result;
	__asm__ __volatile__ ("xchgw %0, %1":"=r" (result),
			      "+m" (*((struct __uatomic_dummy *) (addr))):"0"
			      ((unsigned short) val):"memory");
	return result;
      }
    case 4:
      {
	unsigned int result;
	__asm__ __volatile__ ("xchgl %0, %1":"=r" (result),
			      "+m" (*((struct __uatomic_dummy *) (addr))):"0"
			      ((unsigned int) val):"memory");
	return result;
      }

    case 8:
      {
	unsigned long result;
	__asm__ __volatile__ ("xchgq %0, %1":"=r" (result),
			      "+m" (*((struct __uatomic_dummy *) (addr))):"0"
			      ((unsigned long) val):"memory");
	return result;
      }

    }




  __asm__ __volatile__ ("ud2");
  return 0;
}

#177 "/usr/local/include/urcu/uatomic.h" 3
static inline __attribute__ ((always_inline))
     unsigned long __uatomic_add_return (void *addr, unsigned long val,
					 int len)
{
  switch (len)
    {
    case 1:
      {
	unsigned char result = val;

	__asm__
	  __volatile__ ("lock; xaddb %1, %0":"+m"
			(*((struct __uatomic_dummy *) (addr))),
			"+q" (result)::"memory");
	return result + (unsigned char) val;
      }
    case 2:
      {
	unsigned short result = val;

	__asm__
	  __volatile__ ("lock; xaddw %1, %0":"+m"
			(*((struct __uatomic_dummy *) (addr))),
			"+r" (result)::"memory");
	return result + (unsigned short) val;
      }
    case 4:
      {
	unsigned int result = val;

	__asm__
	  __volatile__ ("lock; xaddl %1, %0":"+m"
			(*((struct __uatomic_dummy *) (addr))),
			"+r" (result)::"memory");
	return result + (unsigned int) val;
      }

    case 8:
      {
	unsigned long result = val;

	__asm__
	  __volatile__ ("lock; xaddq %1, %0":"+m"
			(*((struct __uatomic_dummy *) (addr))),
			"+r" (result)::"memory");
	return result + (unsigned long) val;
      }

    }




  __asm__ __volatile__ ("ud2");
  return 0;
}

#244 "/usr/local/include/urcu/uatomic.h" 3
static inline __attribute__ ((always_inline))
     void __uatomic_and (void *addr, unsigned long val, int len)
{
  switch (len)
    {
    case 1:
      {
	__asm__
	  __volatile__ ("lock; andb %1, %0":"=m"
			(*((struct __uatomic_dummy *) (addr))):"iq" ((unsigned
								      char)
								     val):"memory");
	return;
      }
    case 2:
      {
	__asm__
	  __volatile__ ("lock; andw %1, %0":"=m"
			(*((struct __uatomic_dummy *) (addr))):"ir" ((unsigned
								      short)
								     val):"memory");
	return;
      }
    case 4:
      {
	__asm__
	  __volatile__ ("lock; andl %1, %0":"=m"
			(*((struct __uatomic_dummy *) (addr))):"ir" ((unsigned
								      int)
								     val):"memory");
	return;
      }

    case 8:
      {
	__asm__
	  __volatile__ ("lock; andq %1, %0":"=m"
			(*((struct __uatomic_dummy *) (addr))):"er" ((unsigned
								      long)
								     val):"memory");
	return;
      }

    }




  __asm__ __volatile__ ("ud2");
  return;
}






static inline __attribute__ ((always_inline))
     void __uatomic_or (void *addr, unsigned long val, int len)
{
  switch (len)
    {
    case 1:
      {
	__asm__
	  __volatile__ ("lock; orb %1, %0":"=m"
			(*((struct __uatomic_dummy *) (addr))):"iq" ((unsigned
								      char)
								     val):"memory");
	return;
      }
    case 2:
      {
	__asm__
	  __volatile__ ("lock; orw %1, %0":"=m"
			(*((struct __uatomic_dummy *) (addr))):"ir" ((unsigned
								      short)
								     val):"memory");
	return;
      }
    case 4:
      {
	__asm__
	  __volatile__ ("lock; orl %1, %0":"=m"
			(*((struct __uatomic_dummy *) (addr))):"ir" ((unsigned
								      int)
								     val):"memory");
	return;
      }

    case 8:
      {
	__asm__
	  __volatile__ ("lock; orq %1, %0":"=m"
			(*((struct __uatomic_dummy *) (addr))):"er" ((unsigned
								      long)
								     val):"memory");
	return;
      }

    }




  __asm__ __volatile__ ("ud2");
  return;
}






static inline __attribute__ ((always_inline))
     void __uatomic_add (void *addr, unsigned long val, int len)
{
  switch (len)
    {
    case 1:
      {
	__asm__
	  __volatile__ ("lock; addb %1, %0":"=m"
			(*((struct __uatomic_dummy *) (addr))):"iq" ((unsigned
								      char)
								     val):"memory");
	return;
      }
    case 2:
      {
	__asm__
	  __volatile__ ("lock; addw %1, %0":"=m"
			(*((struct __uatomic_dummy *) (addr))):"ir" ((unsigned
								      short)
								     val):"memory");
	return;
      }
    case 4:
      {
	__asm__
	  __volatile__ ("lock; addl %1, %0":"=m"
			(*((struct __uatomic_dummy *) (addr))):"ir" ((unsigned
								      int)
								     val):"memory");
	return;
      }

    case 8:
      {
	__asm__
	  __volatile__ ("lock; addq %1, %0":"=m"
			(*((struct __uatomic_dummy *) (addr))):"er" ((unsigned
								      long)
								     val):"memory");
	return;
      }

    }




  __asm__ __volatile__ ("ud2");
  return;
}







static inline __attribute__ ((always_inline))
     void __uatomic_inc (void *addr, int len)
{
  switch (len)
    {
    case 1:
      {
	__asm__
	  __volatile__ ("lock; incb %0":"=m"
			(*((struct __uatomic_dummy *) (addr)))::"memory");
	return;
      }
    case 2:
      {
	__asm__
	  __volatile__ ("lock; incw %0":"=m"
			(*((struct __uatomic_dummy *) (addr)))::"memory");
	return;
      }
    case 4:
      {
	__asm__
	  __volatile__ ("lock; incl %0":"=m"
			(*((struct __uatomic_dummy *) (addr)))::"memory");
	return;
      }

    case 8:
      {
	__asm__
	  __volatile__ ("lock; incq %0":"=m"
			(*((struct __uatomic_dummy *) (addr)))::"memory");
	return;
      }

    }


  __asm__ __volatile__ ("ud2");
  return;
}





static inline __attribute__ ((always_inline))
     void __uatomic_dec (void *addr, int len)
{
  switch (len)
    {
    case 1:
      {
	__asm__
	  __volatile__ ("lock; decb %0":"=m"
			(*((struct __uatomic_dummy *) (addr)))::"memory");
	return;
      }
    case 2:
      {
	__asm__
	  __volatile__ ("lock; decw %0":"=m"
			(*((struct __uatomic_dummy *) (addr)))::"memory");
	return;
      }
    case 4:
      {
	__asm__
	  __volatile__ ("lock; decl %0":"=m"
			(*((struct __uatomic_dummy *) (addr)))::"memory");
	return;
      }

    case 8:
      {
	__asm__
	  __volatile__ ("lock; decq %0":"=m"
			(*((struct __uatomic_dummy *) (addr)))::"memory");
	return;
      }

    }




  __asm__ __volatile__ ("ud2");
  return;
}

#627 "/usr/local/include/urcu/uatomic.h" 3
#1 "/usr/local/include/urcu/uatomic/generic.h" 1 3
#40 "/usr/local/include/urcu/uatomic/generic.h" 3
static inline __attribute__ ((always_inline))
     void _uatomic_link_error (void)
{







  __builtin_trap ();

}

#628 "/usr/local/include/urcu/uatomic.h" 2 3
#32 "/usr/local/include/urcu-pointer.h" 2 3
#67 "/usr/local/include/urcu-pointer.h" 3
extern void *rcu_dereference_sym (void *p);







extern void *rcu_cmpxchg_pointer_sym (void **p, void *old, void *_new);
#87 "/usr/local/include/urcu-pointer.h" 3
extern void *rcu_xchg_pointer_sym (void **p, void *v);
#103 "/usr/local/include/urcu-pointer.h" 3
extern void *rcu_set_pointer_sym (void **p, void *v);
#31 "/usr/local/include/urcu/rculist.h" 2 3


static inline void
cds_list_add_rcu (struct cds_list_head *newp, struct cds_list_head *head)
{
  newp->next = head->next;
  newp->prev = head;
  head->next->prev = newp;
  do
    {
      __typeof__ (*((&head->next))) _________pv = ((newp));
      (void) rcu_set_pointer_sym (((void **) ((&head->next))), _________pv);
    }
  while (0);
}


static inline void
cds_list_add_tail_rcu (struct cds_list_head *newp, struct cds_list_head *head)
{
  newp->next = head;
  newp->prev = head->prev;
  do
    {
      __typeof__ (*((&head->prev->next))) _________pv = ((newp));
      (void) rcu_set_pointer_sym (((void **) ((&head->prev->next))),
				  _________pv);
    }
  while (0);
  head->prev = newp;
}






static inline void
cds_list_replace_rcu (struct cds_list_head *old, struct cds_list_head *_new)
{
  _new->next = old->next;
  _new->prev = old->prev;
  do
    {
      __typeof__ (*((&_new->prev->next))) _________pv = ((_new));
      (void) rcu_set_pointer_sym (((void **) ((&_new->prev->next))),
				  _________pv);
    }
  while (0);
  _new->next->prev = _new;
}


static inline void
cds_list_del_rcu (struct cds_list_head *elem)
{
  elem->next->prev = elem->prev;
  (
    {
    __typeof__ (elem->prev->next) _v = (
					 {
					 (*
					  (__volatile__
					   __typeof__ (elem->prev->
						       next) *) & (elem->
								   prev->
								   next)) =
					 (elem->next);
					 });
  __asm__ __volatile__ ("": : :"memory");
    _v = _v;
    });
}

#27 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#1 "/usr/local/include/lttng/ust-events.h" 1 3
#31 "/usr/local/include/lttng/ust-events.h" 3
#1 "/usr/local/include/urcu/hlist.h" 1 3
#19 "/usr/local/include/urcu/hlist.h" 3
#1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stddef.h" 1 3 4
#20 "/usr/local/include/urcu/hlist.h" 2 3

struct cds_hlist_head
{
  struct cds_hlist_node *next;
};

struct cds_hlist_node
{
  struct cds_hlist_node *next, *prev;
};


static inline void
CDS_INIT_HLIST_HEAD (struct cds_hlist_head *ptr)
{
  ptr->next = ((void *) 0);
}

#47 "/usr/local/include/urcu/hlist.h" 3
static inline void
cds_hlist_add_head (struct cds_hlist_node *newp, struct cds_hlist_head *head)
{
  if (head->next)
    head->next->prev = newp;
  newp->next = head->next;
  newp->prev = (struct cds_hlist_node *) head;
  head->next = newp;
}


static inline void
cds_hlist_del (struct cds_hlist_node *elem)
{
  if (elem->next)
    elem->next->prev = elem->prev;
  elem->prev->next = elem->next;
}

#32 "/usr/local/include/lttng/ust-events.h" 2 3

#1 "/usr/local/include/lttng/ust-config.h" 1 3
#34 "/usr/local/include/lttng/ust-events.h" 2 3
#1 "/usr/local/include/lttng/ust-abi.h" 1 3
#48 "/usr/local/include/lttng/ust-abi.h" 3
enum lttng_ust_instrumentation
{
  LTTNG_UST_TRACEPOINT = 0,
  LTTNG_UST_PROBE = 1,
  LTTNG_UST_FUNCTION = 2,
};

enum lttng_ust_loglevel_type
{
  LTTNG_UST_LOGLEVEL_ALL = 0,
  LTTNG_UST_LOGLEVEL_RANGE = 1,
  LTTNG_UST_LOGLEVEL_SINGLE = 2,
};

enum lttng_ust_output
{
  LTTNG_UST_MMAP = 0,
};

enum lttng_ust_chan_type
{
  LTTNG_UST_CHAN_PER_CPU = 0,
  LTTNG_UST_CHAN_METADATA = 1,
};

struct lttng_ust_tracer_version
{
  uint32_t major;
  uint32_t minor;
  uint32_t patchlevel;
} __attribute__ ((__packed__));
#83 "/usr/local/include/lttng/ust-abi.h" 3
struct lttng_ust_channel
{
  uint64_t len;
  enum lttng_ust_chan_type type;
  char padding[(256 + 32)];
  char data[];
} __attribute__ ((__packed__));


struct lttng_ust_stream
{
  uint64_t len;
  uint32_t stream_nr;
  char padding[(256 + 32)];




} __attribute__ ((__packed__));



struct lttng_ust_event
{
  enum lttng_ust_instrumentation instrumentation;
  char name[256];

  enum lttng_ust_loglevel_type loglevel_type;
  int loglevel;
  char disabled;
  char padding[15];


  union
  {
    char padding[(256 + 32)];
  } u;
} __attribute__ ((__packed__));

enum lttng_ust_field_type
{
  LTTNG_UST_FIELD_OTHER = 0,
  LTTNG_UST_FIELD_INTEGER = 1,
  LTTNG_UST_FIELD_ENUM = 2,
  LTTNG_UST_FIELD_FLOAT = 3,
  LTTNG_UST_FIELD_STRING = 4,
};


struct lttng_ust_field_iter
{
  char event_name[256];
  char field_name[256];
  enum lttng_ust_field_type type;
  int loglevel;
  int nowrite;
  char padding[(256 + 28)];
} __attribute__ ((__packed__));

enum lttng_ust_context_type
{
  LTTNG_UST_CONTEXT_VTID = 0,
  LTTNG_UST_CONTEXT_VPID = 1,
  LTTNG_UST_CONTEXT_PTHREAD_ID = 2,
  LTTNG_UST_CONTEXT_PROCNAME = 3,
  LTTNG_UST_CONTEXT_IP = 4,
  LTTNG_UST_CONTEXT_PERF_THREAD_COUNTER = 5,
};

struct lttng_ust_perf_counter_ctx
{
  uint32_t type;
  uint64_t config;
  char name[256];
} __attribute__ ((__packed__));



struct lttng_ust_context
{
  enum lttng_ust_context_type ctx;
  char padding[16];

  union
  {
    struct lttng_ust_perf_counter_ctx perf_counter;
    char padding[(256 + 32)];
  } u;
} __attribute__ ((__packed__));





struct lttng_ust_channel_attr
{
  uint64_t subbuf_size;
  uint64_t num_subbuf;
  int overwrite;
  unsigned int switch_timer_interval;
  unsigned int read_timer_interval;
  enum lttng_ust_output output;
  char padding[(256 + 32)];
} __attribute__ ((__packed__));


struct lttng_ust_tracepoint_iter
{
  char name[256];
  int loglevel;
  char padding[16];
} __attribute__ ((__packed__));

enum lttng_ust_object_type
{
  LTTNG_UST_OBJECT_TYPE_UNKNOWN = -1,
  LTTNG_UST_OBJECT_TYPE_CHANNEL = 0,
  LTTNG_UST_OBJECT_TYPE_STREAM = 1,
  LTTNG_UST_OBJECT_TYPE_EVENT = 2,
  LTTNG_UST_OBJECT_TYPE_CONTEXT = 3,
};




struct lttng_ust_object_data
{
  enum lttng_ust_object_type type;
  int handle;
  uint64_t size;
  char padding1[32];
  union
  {
    struct
    {
      void *data;
      enum lttng_ust_chan_type type;
      int wakeup_fd;
    } channel;
    struct
    {
      int shm_fd;
      int wakeup_fd;
      uint32_t stream_nr;
    } stream;
    char padding2[(256 + 32)];
  } u;
} __attribute__ ((__packed__));

enum lttng_ust_calibrate_type
{
  LTTNG_UST_CALIBRATE_TRACEPOINT,
};



struct lttng_ust_calibrate
{
  enum lttng_ust_calibrate_type type;
  char padding[16];

  union
  {
    char padding[(256 + 32)];
  } u;
} __attribute__ ((__packed__));



struct lttng_ust_filter_bytecode
{
  uint32_t len;
  uint32_t reloc_offset;
  uint64_t seqnum;
  char padding[32];
  char data[0];
} __attribute__ ((__packed__));


struct lttng_ust_event_exclusion
{
  uint32_t count;
  char padding[32];
  char names[256][0];
} __attribute__ ((__packed__));
#296 "/usr/local/include/lttng/ust-abi.h" 3
struct lttng_ust_obj;

union ust_args
{
  struct
  {
    void *chan_data;
    int wakeup_fd;
  } channel;
  struct
  {
    int shm_fd;
    int wakeup_fd;
  } stream;
  struct
  {
    struct lttng_ust_field_iter entry;
  } field_list;
};

struct lttng_ust_objd_ops
{
  long (*cmd) (int objd, unsigned int cmd, unsigned long arg,
	       union ust_args * args, void *owner);
  int (*release) (int objd);
};


int lttng_abi_create_root_handle (void);

const struct lttng_ust_objd_ops *objd_ops (int id);
int lttng_ust_objd_unref (int id, int is_owner);

void lttng_ust_abi_exit (void);
void lttng_ust_events_exit (void);
void lttng_ust_objd_table_owner_cleanup (void *owner);
#35 "/usr/local/include/lttng/ust-events.h" 2 3
#1 "/usr/local/include/lttng/ust-tracer.h" 1 3
#30 "/usr/local/include/lttng/ust-tracer.h" 3
#1 "/usr/local/include/lttng/ust-config.h" 1 3
#31 "/usr/local/include/lttng/ust-tracer.h" 2 3
#1 "/usr/local/include/lttng/ust-version.h" 1 3
#32 "/usr/local/include/lttng/ust-tracer.h" 2 3
#36 "/usr/local/include/lttng/ust-events.h" 2 3
#1 "/usr/local/include/lttng/ust-endian.h" 1 3
#37 "/usr/local/include/lttng/ust-events.h" 2 3
#1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/float.h" 1 3 4
#38 "/usr/local/include/lttng/ust-events.h" 2 3
#1 "/usr/include/errno.h" 1 3 4
#39 "/usr/local/include/lttng/ust-events.h" 2 3
#1 "/usr/local/include/urcu/ref.h" 1 3
#17 "/usr/local/include/urcu/ref.h" 3
#1 "/usr/include/assert.h" 1 3 4
#64 "/usr/include/assert.h" 3 4



extern void __assert_fail (const char *__assertion, const char *__file,
			   unsigned int __line, const char *__function)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
				  unsigned int __line, const char *__function)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__noreturn__));



#18 "/usr/local/include/urcu/ref.h" 2 3


struct urcu_ref
{
  long refcount;
};

static inline void
urcu_ref_set (struct urcu_ref *ref, long val)
{
  (((void) (
	     {
	     __typeof__ (*(&ref->refcount)) _v = (
						   {
						   (*
						    (__volatile__
						     __typeof__ (*
								 (&ref->
								  refcount))
						     *) & (*(&ref->
							     refcount))) =
						   ((val));
						   });
  __asm__ __volatile__ ("": : :"memory");
	     _v = _v;
	     })));
}

static inline void
urcu_ref_init (struct urcu_ref *ref)
{
  urcu_ref_set (ref, 1);
}

static inline void
urcu_ref_get (struct urcu_ref *ref)
{
  ((__uatomic_add
    ((&ref->refcount),
     (((__typeof__ (1)) - 1 <
       (__typeof__ (1)) 0) ? (unsigned long) (long) (1) : (unsigned
							   long) (1)),
     sizeof (*(&ref->refcount)))));
}

static inline void
urcu_ref_put (struct urcu_ref *ref, void (*release) (struct urcu_ref *))
{
  long res =
    (((__typeof__ (*((&ref->refcount))))
      __uatomic_add_return (((&ref->refcount)),
			    (((__typeof__
			       (-
				((((__typeof__ (1)) - 1 <
				   (__typeof__ (1)) 0) ? (unsigned
							  long) (long) (1)
				  : (unsigned long) (1))))) - 1 <
			      (__typeof__
			       (-
				((((__typeof__ (1)) - 1 <
				   (__typeof__ (1)) 0) ? (unsigned
							  long) (long) (1)
				  : (unsigned long) (1))))) 0) ? (unsigned
								  long) (long)
			     (-
			      ((((__typeof__ (1)) - 1 <
				 (__typeof__ (1)) 0) ? (unsigned
							long) (long) (1)
				: (unsigned long) (1)))) : (unsigned
							    long) (-((((__typeof__ (1)) - 1 < (__typeof__ (1)) 0) ? (unsigned long) (long) (1) : (unsigned long) (1))))), sizeof (*((&ref->refcount))))));
  ((res >= 0) ? (void) (0) : __assert_fail ("res >= 0",
					    "/usr/local/include/urcu/ref.h",
					    43, __PRETTY_FUNCTION__));
  if (res == 0)
    release (ref);
}

#40 "/usr/local/include/lttng/ust-events.h" 2 3
#1 "/usr/include/pthread.h" 1 3 4
#23 "/usr/include/pthread.h" 3 4
#1 "/usr/include/sched.h" 1 3 4
#28 "/usr/include/sched.h" 3 4
#1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stddef.h" 1 3 4
#29 "/usr/include/sched.h" 2 3 4



#1 "/usr/include/time.h" 1 3 4
#33 "/usr/include/sched.h" 2 3 4
#41 "/usr/include/sched.h" 3 4
#1 "/usr/include/bits/sched.h" 1 3 4
#72 "/usr/include/bits/sched.h" 3 4
struct sched_param
{
  int __sched_priority;
};


#95 "/usr/include/bits/sched.h" 3 4








struct __sched_param
{
  int __sched_priority;
};
#118 "/usr/include/bits/sched.h" 3 4
typedef unsigned long int __cpu_mask;






typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
}
cpu_set_t;
#201 "/usr/include/bits/sched.h" 3 4


extern int __sched_cpucount (size_t __setsize, const cpu_set_t * __setp)
  __attribute__ ((__nothrow__, __leaf__));
extern cpu_set_t *__sched_cpualloc (size_t __count)
  __attribute__ ((__nothrow__, __leaf__));
extern void __sched_cpufree (cpu_set_t * __set)
  __attribute__ ((__nothrow__, __leaf__));


#42 "/usr/include/sched.h" 2 3 4







extern int sched_setparam (__pid_t __pid, const struct sched_param *__param)
  __attribute__ ((__nothrow__, __leaf__));


extern int sched_getparam (__pid_t __pid, struct sched_param *__param)
  __attribute__ ((__nothrow__, __leaf__));


extern int sched_setscheduler (__pid_t __pid, int __policy,
			       const struct sched_param *__param)
  __attribute__ ((__nothrow__, __leaf__));


extern int sched_getscheduler (__pid_t __pid)
  __attribute__ ((__nothrow__, __leaf__));


extern int sched_yield (void) __attribute__ ((__nothrow__, __leaf__));


extern int sched_get_priority_max (int __algorithm)
  __attribute__ ((__nothrow__, __leaf__));


extern int sched_get_priority_min (int __algorithm)
  __attribute__ ((__nothrow__, __leaf__));


extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t)
  __attribute__ ((__nothrow__, __leaf__));
#124 "/usr/include/sched.h" 3 4

#24 "/usr/include/pthread.h" 2 3 4
#1 "/usr/include/time.h" 1 3 4
#29 "/usr/include/time.h" 3 4








#1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stddef.h" 1 3 4
#38 "/usr/include/time.h" 2 3 4



#1 "/usr/include/bits/time.h" 1 3 4
#42 "/usr/include/time.h" 2 3 4
#131 "/usr/include/time.h" 3 4


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};








struct itimerspec
{
  struct timespec it_interval;
  struct timespec it_value;
};


struct sigevent;
#186 "/usr/include/time.h" 3 4



extern clock_t clock (void) __attribute__ ((__nothrow__, __leaf__));


extern time_t time (time_t * __timer) __attribute__ ((__nothrow__, __leaf__));


extern double difftime (time_t __time1, time_t __time0)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp)
  __attribute__ ((__nothrow__, __leaf__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
			const char *__restrict __format,
			const struct tm *__restrict __tp)
  __attribute__ ((__nothrow__, __leaf__));

#223 "/usr/include/time.h" 3 4
extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
			  const char *__restrict __format,
			  const struct tm *__restrict __tp,
			  __locale_t __loc)
  __attribute__ ((__nothrow__, __leaf__));
#236 "/usr/include/time.h" 3 4



extern struct tm *gmtime (const time_t * __timer)
  __attribute__ ((__nothrow__, __leaf__));



extern struct tm *localtime (const time_t * __timer)
  __attribute__ ((__nothrow__, __leaf__));





extern struct tm *gmtime_r (const time_t * __restrict __timer,
			    struct tm *__restrict __tp)
  __attribute__ ((__nothrow__, __leaf__));



extern struct tm *localtime_r (const time_t * __restrict __timer,
			       struct tm *__restrict __tp)
  __attribute__ ((__nothrow__, __leaf__));





extern char *asctime (const struct tm *__tp)
  __attribute__ ((__nothrow__, __leaf__));


extern char *ctime (const time_t * __timer)
  __attribute__ ((__nothrow__, __leaf__));







extern char *asctime_r (const struct tm *__restrict __tp,
			char *__restrict __buf)
  __attribute__ ((__nothrow__, __leaf__));


extern char *ctime_r (const time_t * __restrict __timer,
		      char *__restrict __buf)
  __attribute__ ((__nothrow__, __leaf__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__, __leaf__));



extern int daylight;
extern long int timezone;





extern int stime (const time_t * __when)
  __attribute__ ((__nothrow__, __leaf__));
#319 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp)
  __attribute__ ((__nothrow__, __leaf__));


extern time_t timelocal (struct tm *__tp)
  __attribute__ ((__nothrow__, __leaf__));


extern int dysize (int __year) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__const__));
#334 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
		      struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res)
  __attribute__ ((__nothrow__, __leaf__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp)
  __attribute__ ((__nothrow__, __leaf__));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
  __attribute__ ((__nothrow__, __leaf__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
			    const struct timespec *__req,
			    struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t * __clock_id)
  __attribute__ ((__nothrow__, __leaf__));




extern int timer_create (clockid_t __clock_id,
			 struct sigevent *__restrict __evp,
			 timer_t * __restrict __timerid)
  __attribute__ ((__nothrow__, __leaf__));


extern int timer_delete (timer_t __timerid)
  __attribute__ ((__nothrow__, __leaf__));


extern int timer_settime (timer_t __timerid, int __flags,
			  const struct itimerspec *__restrict __value,
			  struct itimerspec *__restrict __ovalue)
  __attribute__ ((__nothrow__, __leaf__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
  __attribute__ ((__nothrow__, __leaf__));


extern int timer_getoverrun (timer_t __timerid)
  __attribute__ ((__nothrow__, __leaf__));
#430 "/usr/include/time.h" 3 4

#25 "/usr/include/pthread.h" 2 3 4


#1 "/usr/include/bits/setjmp.h" 1 3 4
#26 "/usr/include/bits/setjmp.h" 3 4
#1 "/usr/include/bits/wordsize.h" 1 3 4
#27 "/usr/include/bits/setjmp.h" 2 3 4




typedef long int __jmp_buf[8];
#28 "/usr/include/pthread.h" 2 3 4
#1 "/usr/include/bits/wordsize.h" 1 3 4
#29 "/usr/include/pthread.h" 2 3 4



enum
{
  PTHREAD_CREATE_JOINABLE,

  PTHREAD_CREATE_DETACHED
};



enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL
};




enum
{
  PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST,
  PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};





enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};
#125 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
#166 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_INHERIT_SCHED,

  PTHREAD_EXPLICIT_SCHED
};



enum
{
  PTHREAD_SCOPE_SYSTEM,

  PTHREAD_SCOPE_PROCESS
};



enum
{
  PTHREAD_PROCESS_PRIVATE,

  PTHREAD_PROCESS_SHARED
};
#201 "/usr/include/pthread.h" 3 4
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};


enum
{
  PTHREAD_CANCEL_ENABLE,

  PTHREAD_CANCEL_DISABLE
};
enum
{
  PTHREAD_CANCEL_DEFERRED,

  PTHREAD_CANCEL_ASYNCHRONOUS
};
#239 "/usr/include/pthread.h" 3 4





extern int pthread_create (pthread_t * __restrict __newthread,
			   const pthread_attr_t * __restrict __attr,
			   void *(*__start_routine) (void *),
			   void *__restrict __arg)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));





extern void pthread_exit (void *__retval) __attribute__ ((__noreturn__));







extern int pthread_join (pthread_t __th, void **__thread_return);
#282 "/usr/include/pthread.h" 3 4
extern int pthread_detach (pthread_t __th)
  __attribute__ ((__nothrow__, __leaf__));



extern pthread_t pthread_self (void) __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__const__));


extern int pthread_equal (pthread_t __thread1, pthread_t __thread2)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__const__));







extern int pthread_attr_init (pthread_attr_t * __attr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_destroy (pthread_attr_t * __attr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getdetachstate (const pthread_attr_t * __attr,
					int *__detachstate)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setdetachstate (pthread_attr_t * __attr,
					int __detachstate)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getguardsize (const pthread_attr_t * __attr,
				      size_t * __guardsize)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setguardsize (pthread_attr_t * __attr,
				      size_t __guardsize)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getschedparam (const pthread_attr_t *
				       __restrict __attr,
				       struct sched_param *__restrict __param)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedparam (pthread_attr_t * __restrict __attr,
				       const struct sched_param *__restrict
				       __param)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_getschedpolicy (const pthread_attr_t * __restrict
					__attr, int *__restrict __policy)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedpolicy (pthread_attr_t * __attr, int __policy)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getinheritsched (const pthread_attr_t * __restrict
					 __attr, int *__restrict __inherit)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setinheritsched (pthread_attr_t * __attr,
					 int __inherit)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getscope (const pthread_attr_t * __restrict __attr,
				  int *__restrict __scope)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setscope (pthread_attr_t * __attr, int __scope)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getstackaddr (const pthread_attr_t * __restrict
				      __attr, void **__restrict __stackaddr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1, 2)))
  __attribute__ ((__deprecated__));





extern int pthread_attr_setstackaddr (pthread_attr_t * __attr,
				      void *__stackaddr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)))
  __attribute__ ((__deprecated__));


extern int pthread_attr_getstacksize (const pthread_attr_t * __restrict
				      __attr, size_t * __restrict __stacksize)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_attr_setstacksize (pthread_attr_t * __attr,
				      size_t __stacksize)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getstack (const pthread_attr_t * __restrict __attr,
				  void **__restrict __stackaddr,
				  size_t * __restrict __stacksize)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_attr_setstack (pthread_attr_t * __attr, void *__stackaddr,
				  size_t __stacksize)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));
#440 "/usr/include/pthread.h" 3 4
extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
				  const struct sched_param *__param)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (3)));


extern int pthread_getschedparam (pthread_t __target_thread,
				  int *__restrict __policy,
				  struct sched_param *__restrict __param)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (2, 3)));


extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
  __attribute__ ((__nothrow__, __leaf__));
#505 "/usr/include/pthread.h" 3 4
extern int pthread_once (pthread_once_t * __once_control,
			 void (*__init_routine) (void))
  __attribute__ ((__nonnull__ (1, 2)));
#517 "/usr/include/pthread.h" 3 4
extern int pthread_setcancelstate (int __state, int *__oldstate);



extern int pthread_setcanceltype (int __type, int *__oldtype);


extern int pthread_cancel (pthread_t __th);




extern void pthread_testcancel (void);




typedef struct
{
  struct
  {
    __jmp_buf __cancel_jmp_buf;
    int __mask_was_saved;
  } __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t __attribute__ ((__aligned__));
#551 "/usr/include/pthread.h" 3 4
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};
#691 "/usr/include/pthread.h" 3 4
extern void __pthread_register_cancel (__pthread_unwind_buf_t * __buf);
#703 "/usr/include/pthread.h" 3 4
extern void __pthread_unregister_cancel (__pthread_unwind_buf_t * __buf);
#744 "/usr/include/pthread.h" 3 4
extern void __pthread_unwind_next (__pthread_unwind_buf_t * __buf)
  __attribute__ ((__noreturn__)) __attribute__ ((__weak__));



struct __jmp_buf_tag;
extern int __sigsetjmp (struct __jmp_buf_tag *__env, int __savemask)
  __attribute__ ((__nothrow__));





extern int pthread_mutex_init (pthread_mutex_t * __mutex,
			       const pthread_mutexattr_t * __mutexattr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_destroy (pthread_mutex_t * __mutex)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_trylock (pthread_mutex_t * __mutex)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_lock (pthread_mutex_t * __mutex)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_timedlock (pthread_mutex_t * __restrict __mutex,
				    const struct timespec *__restrict
				    __abstime) __attribute__ ((__nothrow__))
  __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_unlock (pthread_mutex_t * __mutex)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_getprioceiling (const pthread_mutex_t *
					 __restrict __mutex,
					 int *__restrict __prioceiling)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_setprioceiling (pthread_mutex_t * __restrict __mutex,
					 int __prioceiling,
					 int *__restrict __old_ceiling)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 3)));




extern int pthread_mutex_consistent (pthread_mutex_t * __mutex)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));
#817 "/usr/include/pthread.h" 3 4
extern int pthread_mutexattr_init (pthread_mutexattr_t * __attr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_destroy (pthread_mutexattr_t * __attr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getpshared (const pthread_mutexattr_t *
					 __restrict __attr,
					 int *__restrict __pshared)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setpshared (pthread_mutexattr_t * __attr,
					 int __pshared)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_gettype (const pthread_mutexattr_t * __restrict
				      __attr, int *__restrict __kind)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_mutexattr_settype (pthread_mutexattr_t * __attr,
				      int __kind)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getprotocol (const pthread_mutexattr_t *
					  __restrict __attr,
					  int *__restrict __protocol)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setprotocol (pthread_mutexattr_t * __attr,
					  int __protocol)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *
					     __restrict __attr,
					     int *__restrict __prioceiling)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setprioceiling (pthread_mutexattr_t * __attr,
					     int __prioceiling)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getrobust (const pthread_mutexattr_t * __attr,
					int *__robustness)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));







extern int pthread_mutexattr_setrobust (pthread_mutexattr_t * __attr,
					int __robustness)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));
#899 "/usr/include/pthread.h" 3 4
extern int pthread_rwlock_init (pthread_rwlock_t * __restrict __rwlock,
				const pthread_rwlockattr_t * __restrict
				__attr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_destroy (pthread_rwlock_t * __rwlock)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_rdlock (pthread_rwlock_t * __rwlock)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_tryrdlock (pthread_rwlock_t * __rwlock)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedrdlock (pthread_rwlock_t * __restrict __rwlock,
				       const struct timespec *__restrict
				       __abstime)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_wrlock (pthread_rwlock_t * __rwlock)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_trywrlock (pthread_rwlock_t * __rwlock)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedwrlock (pthread_rwlock_t * __restrict __rwlock,
				       const struct timespec *__restrict
				       __abstime)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_unlock (pthread_rwlock_t * __rwlock)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int pthread_rwlockattr_init (pthread_rwlockattr_t * __attr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_destroy (pthread_rwlockattr_t * __attr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *
					  __restrict __attr,
					  int *__restrict __pshared)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setpshared (pthread_rwlockattr_t * __attr,
					  int __pshared)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getkind_np (const pthread_rwlockattr_t *
					  __restrict __attr,
					  int *__restrict __pref)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setkind_np (pthread_rwlockattr_t * __attr,
					  int __pref)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int pthread_cond_init (pthread_cond_t * __restrict __cond,
			      const pthread_condattr_t *
			      __restrict __cond_attr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_destroy (pthread_cond_t * __cond)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_signal (pthread_cond_t * __cond)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_broadcast (pthread_cond_t * __cond)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int pthread_cond_wait (pthread_cond_t * __restrict __cond,
			      pthread_mutex_t * __restrict __mutex)
  __attribute__ ((__nonnull__ (1, 2)));
#1011 "/usr/include/pthread.h" 3 4
extern int pthread_cond_timedwait (pthread_cond_t * __restrict __cond,
				   pthread_mutex_t * __restrict __mutex,
				   const struct timespec *__restrict
				   __abstime)
  __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_condattr_init (pthread_condattr_t * __attr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_destroy (pthread_condattr_t * __attr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_getpshared (const pthread_condattr_t *
					__restrict __attr,
					int *__restrict __pshared)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setpshared (pthread_condattr_t * __attr,
					int __pshared)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_condattr_getclock (const pthread_condattr_t *
				      __restrict __attr,
				      __clockid_t * __restrict __clock_id)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setclock (pthread_condattr_t * __attr,
				      __clockid_t __clock_id)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));
#1055 "/usr/include/pthread.h" 3 4
extern int pthread_spin_init (pthread_spinlock_t * __lock, int __pshared)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_destroy (pthread_spinlock_t * __lock)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_lock (pthread_spinlock_t * __lock)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_trylock (pthread_spinlock_t * __lock)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_unlock (pthread_spinlock_t * __lock)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int pthread_barrier_init (pthread_barrier_t * __restrict __barrier,
				 const pthread_barrierattr_t * __restrict
				 __attr, unsigned int __count)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_destroy (pthread_barrier_t * __barrier)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_wait (pthread_barrier_t * __barrier)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_barrierattr_init (pthread_barrierattr_t * __attr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_destroy (pthread_barrierattr_t * __attr)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_getpshared (const pthread_barrierattr_t *
					   __restrict __attr,
					   int *__restrict __pshared)
  __attribute__ ((__nothrow__, __leaf__))
  __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_barrierattr_setpshared (pthread_barrierattr_t * __attr,
					   int __pshared)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));
#1122 "/usr/include/pthread.h" 3 4
extern int pthread_key_create (pthread_key_t * __key,
			       void (*__destr_function) (void *))
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_key_delete (pthread_key_t __key)
  __attribute__ ((__nothrow__, __leaf__));


extern void *pthread_getspecific (pthread_key_t __key)
  __attribute__ ((__nothrow__, __leaf__));


extern int pthread_setspecific (pthread_key_t __key,
				const void *__pointer)
  __attribute__ ((__nothrow__, __leaf__));




extern int pthread_getcpuclockid (pthread_t __thread_id,
				  __clockid_t * __clock_id)
  __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__nonnull__ (2)));
#1156 "/usr/include/pthread.h" 3 4
extern int pthread_atfork (void (*__prepare) (void),
			   void (*__parent) (void),
			   void (*__child) (void))
  __attribute__ ((__nothrow__, __leaf__));
#1170 "/usr/include/pthread.h" 3 4

#41 "/usr/local/include/lttng/ust-events.h" 2 3
#57 "/usr/local/include/lttng/ust-events.h" 3
struct lttng_channel;
struct lttng_session;
struct lttng_ust_lib_ring_buffer_ctx;
#70 "/usr/local/include/lttng/ust-events.h" 3
enum lttng_client_types
{
  LTTNG_CLIENT_METADATA = 0,
  LTTNG_CLIENT_DISCARD = 1,
  LTTNG_CLIENT_OVERWRITE = 2,
  LTTNG_CLIENT_DISCARD_RT = 3,
  LTTNG_CLIENT_OVERWRITE_RT = 4,
  LTTNG_NR_CLIENT_TYPES,
};




enum lttng_abstract_types
{
  atype_integer,
  atype_enum,
  atype_array,
  atype_sequence,
  atype_string,
  atype_float,
  NR_ABSTRACT_TYPES,
};


enum lttng_string_encodings
{
  lttng_encode_none = 0,
  lttng_encode_UTF8 = 1,
  lttng_encode_ASCII = 2,
  NR_STRING_ENCODINGS,
};


struct lttng_enum_entry
{
  unsigned long long start, end;
  const char *string;
  char padding[16];
};
#128 "/usr/local/include/lttng/ust-events.h" 3
struct lttng_integer_type
{
  unsigned int size;
  unsigned short alignment;
  unsigned int signedness:1;
  unsigned int reverse_byte_order:1;
  unsigned int base;
  enum lttng_string_encodings encoding;
  char padding[24];
};
#167 "/usr/local/include/lttng/ust-events.h" 3
struct lttng_float_type
{
  unsigned int exp_dig;
  unsigned int mant_dig;
  unsigned short alignment;
  unsigned int reverse_byte_order:1;
  char padding[24];
};


union _lttng_basic_type
{
  struct lttng_integer_type integer;
  struct
  {
    const char *name;
  } enumeration;
  struct
  {
    enum lttng_string_encodings encoding;
  } string;
  struct lttng_float_type _float;
  char padding[128];
};

struct lttng_basic_type
{
  enum lttng_abstract_types atype;
  union
  {
    union _lttng_basic_type basic;
  } u;
};


struct lttng_type
{
  enum lttng_abstract_types atype;
  union
  {
    union _lttng_basic_type basic;
    struct
    {
      struct lttng_basic_type elem_type;
      unsigned int length;
    } array;
    struct
    {
      struct lttng_basic_type length_type;
      struct lttng_basic_type elem_type;
    } sequence;
    char padding[128];
  } u;
};


struct lttng_enum
{
  const char *name;
  struct lttng_type container_type;
  const struct lttng_enum_entry *entries;
  unsigned int len;
  char padding[24];
};
#230 "/usr/local/include/lttng/ust-events.h" 3
struct lttng_event_field
{
  const char *name;
  struct lttng_type type;
  unsigned int nowrite;
  char padding[28];
};

union lttng_ctx_value
{
  int64_t s64;
  const char *str;
  double d;
};

struct lttng_perf_counter_field;


struct lttng_ctx_field
{
  struct lttng_event_field event_field;
    size_t (*get_size) (size_t offset);
  void (*record) (struct lttng_ctx_field * field,
		  struct lttng_ust_lib_ring_buffer_ctx * ctx,
		  struct lttng_channel * chan);
  void (*get_value) (struct lttng_ctx_field * field,
		     union lttng_ctx_value * value);
  union
  {
    struct lttng_perf_counter_field *perf_counter;
    char padding[40];
  } u;
  void (*destroy) (struct lttng_ctx_field * field);
};


struct lttng_ctx
{
  struct lttng_ctx_field *fields;
  unsigned int nr_fields;
  unsigned int allocated_fields;
  unsigned int largest_align;
  char padding[20];
};


struct lttng_event_desc
{
  const char *name;
  void (*probe_callback) (void);
  const struct lttng_event_ctx *ctx;
  const struct lttng_event_field *fields;
  unsigned int nr_fields;
  const int **loglevel;
  const char *signature;
  union
  {
    struct
    {
      const char **model_emf_uri;
    } ext;
    char padding[40];
  } u;
};


struct lttng_probe_desc
{
  const char *provider;
  const struct lttng_event_desc **event_desc;
  unsigned int nr_events;
  struct cds_list_head head;
  struct cds_list_head lazy_init_head;
  int lazy;
  uint32_t major;
  uint32_t minor;
  char padding[12];
};



enum lttng_enabler_type
{
  LTTNG_ENABLER_WILDCARD,
  LTTNG_ENABLER_EVENT,
};





struct lttng_enabler
{
  enum lttng_enabler_type type;


  struct cds_list_head filter_bytecode_head;

  struct cds_list_head excluder_head;
  struct cds_list_head node;

  struct lttng_ust_event event_param;
  struct lttng_channel *chan;
  struct lttng_ctx *ctx;
  unsigned int enabled:1;
};

struct tp_list_entry
{
  struct lttng_ust_tracepoint_iter tp;
  struct cds_list_head head;
};

struct lttng_ust_tracepoint_list
{
  struct tp_list_entry *iter;
  struct cds_list_head head;
};

struct tp_field_list_entry
{
  struct lttng_ust_field_iter field;
  struct cds_list_head head;
};

struct lttng_ust_field_list
{
  struct tp_field_list_entry *iter;
  struct cds_list_head head;
};

struct ust_pending_probe;
struct lttng_event;

struct lttng_ust_filter_bytecode_node
{
  struct cds_list_head node;
  struct lttng_enabler *enabler;




  struct lttng_ust_filter_bytecode bc;
};

struct lttng_ust_excluder_node
{
  struct cds_list_head node;
  struct lttng_enabler *enabler;




  struct lttng_ust_event_exclusion excluder;
};



enum lttng_filter_ret
{
  LTTNG_FILTER_DISCARD = 0,
  LTTNG_FILTER_RECORD_FLAG = (1ULL << 0),

};

struct lttng_bytecode_runtime
{

  struct lttng_ust_filter_bytecode_node *bc;
    uint64_t (*filter) (void *filter_data, const char *filter_stack_data);
  int link_failed;
  struct cds_list_head node;
};




struct lttng_enabler_ref
{
  struct cds_list_head node;
  struct lttng_enabler *ref;
};
#401 "/usr/local/include/lttng/ust-events.h" 3
struct lttng_event
{

  unsigned int id;
  struct lttng_channel *chan;
  int enabled;
  const struct lttng_event_desc *desc;
  void *_deprecated1;
  struct lttng_ctx *ctx;
  enum lttng_ust_instrumentation instrumentation;
  union
  {
  } u;
  struct cds_list_head node;
  struct cds_list_head _deprecated2;
  void *_deprecated3;
  unsigned int _deprecated4:1;



  struct cds_list_head bytecode_runtime_head;
  int has_enablers_without_bytecode;

  struct cds_list_head enablers_ref_head;
  struct cds_hlist_node hlist;
  int registered;
};

struct channel;
struct lttng_ust_shm_handle;






struct lttng_channel_ops
{
  struct lttng_channel *(*channel_create) (const char *name,
					   void *buf_addr,
					   size_t subbuf_size,
					   size_t num_subbuf,
					   unsigned int switch_timer_interval,
					   unsigned int read_timer_interval,
					   unsigned char *uuid,
					   uint32_t chan_id);
  void (*channel_destroy) (struct lttng_channel * chan);
  union
  {
    void *_deprecated1;
    unsigned long has_strcpy:1;
  } u;
  void *_deprecated2;
  int (*event_reserve) (struct lttng_ust_lib_ring_buffer_ctx * ctx,
			uint32_t event_id);
  void (*event_commit) (struct lttng_ust_lib_ring_buffer_ctx * ctx);
  void (*event_write) (struct lttng_ust_lib_ring_buffer_ctx * ctx,
		       const void *src, size_t len);





    size_t (*packet_avail_size) (struct channel * chan,
				 struct lttng_ust_shm_handle * handle);


  int (*is_finalized) (struct channel * chan);
  int (*is_disabled) (struct channel * chan);
  int (*flush_buffer) (struct channel * chan,
		       struct lttng_ust_shm_handle * handle);
  void (*event_strcpy) (struct lttng_ust_lib_ring_buffer_ctx * ctx,
			const char *src, size_t len);
};






struct lttng_channel
{






  struct channel *chan;
  int enabled;
  struct lttng_ctx *ctx;

  struct lttng_session *session;
  int objd;
  unsigned int _deprecated1;
  unsigned int _deprecated2;
  struct cds_list_head node;
  const struct lttng_channel_ops *ops;
  int header_type;
  struct lttng_ust_shm_handle *handle;
  unsigned int _deprecated3:1;


  unsigned int id;
  enum lttng_ust_chan_type type;
  unsigned char uuid[16];
  int tstate:1;
};




struct lttng_ust_event_ht
{
  struct cds_hlist_head table[(1U << 12)];
};






struct lttng_session
{
  int active;
  int been_active;
  int objd;
  void *_deprecated1;
  struct cds_list_head chan_head;
  struct cds_list_head events_head;
  struct cds_list_head _deprecated2;
  struct cds_list_head node;
  int _deprecated3;
  unsigned int _deprecated4:1;



  struct cds_list_head enablers_head;
  struct lttng_ust_event_ht events_ht;
  void *owner;
  int tstate:1;


  int statedump_pending:1;
};

struct lttng_transport
{
  char *name;
  struct cds_list_head node;
  struct lttng_channel_ops ops;
  const struct lttng_ust_lib_ring_buffer_config *client_config;
};

struct lttng_session *lttng_session_create (void);
int lttng_session_enable (struct lttng_session *session);
int lttng_session_disable (struct lttng_session *session);
void lttng_session_destroy (struct lttng_session *session);

struct lttng_channel *lttng_channel_create (struct lttng_session *session,
					    const char *transport_name,
					    void *buf_addr,
					    size_t subbuf_size,
					    size_t num_subbuf,
					    unsigned int
					    switch_timer_interval,
					    unsigned int read_timer_interval,
					    int **shm_fd, int **wait_fd,
					    uint64_t ** memory_map_size,
					    struct lttng_channel
					    *chan_priv_init);

int lttng_channel_enable (struct lttng_channel *channel);
int lttng_channel_disable (struct lttng_channel *channel);

struct lttng_enabler *lttng_enabler_create (enum lttng_enabler_type type,
					    struct lttng_ust_event
					    *event_param,
					    struct lttng_channel *chan);
int lttng_enabler_enable (struct lttng_enabler *enabler);
int lttng_enabler_disable (struct lttng_enabler *enabler);
int lttng_enabler_attach_bytecode (struct lttng_enabler *enabler,
				   struct lttng_ust_filter_bytecode_node
				   *bytecode);
int lttng_enabler_attach_context (struct lttng_enabler *enabler,
				  struct lttng_ust_context *ctx);
int lttng_enabler_attach_exclusion (struct lttng_enabler *enabler,
				    struct lttng_ust_excluder_node *excluder);

int lttng_attach_context (struct lttng_ust_context *context_param,
			  struct lttng_ctx **ctx,
			  struct lttng_session *session);
void lttng_context_init (void);
void lttng_context_exit (void);
extern struct lttng_ctx *lttng_static_ctx;

void lttng_transport_register (struct lttng_transport *transport);
void lttng_transport_unregister (struct lttng_transport *transport);

void synchronize_trace (void);

int lttng_probe_register (struct lttng_probe_desc *desc);
void lttng_probe_unregister (struct lttng_probe_desc *desc);
int lttng_fix_pending_events (void);
int lttng_probes_init (void);
void lttng_probes_exit (void);
int lttng_find_context (struct lttng_ctx *ctx, const char *name);
int lttng_get_context_index (struct lttng_ctx *ctx, const char *name);
struct lttng_ctx_field *lttng_append_context (struct lttng_ctx **ctx_p);
void lttng_context_update (struct lttng_ctx *ctx);
void lttng_remove_context_field (struct lttng_ctx **ctx_p,
				 struct lttng_ctx_field *field);
void lttng_destroy_context (struct lttng_ctx *ctx);
int lttng_add_vtid_to_ctx (struct lttng_ctx **ctx);
int lttng_add_vpid_to_ctx (struct lttng_ctx **ctx);
int lttng_add_pthread_id_to_ctx (struct lttng_ctx **ctx);
int lttng_add_procname_to_ctx (struct lttng_ctx **ctx);
int lttng_add_ip_to_ctx (struct lttng_ctx **ctx);
void lttng_context_vtid_reset (void);
void lttng_context_vpid_reset (void);


int lttng_add_perf_counter_to_ctx (uint32_t type,
				   uint64_t config,
				   const char *name, struct lttng_ctx **ctx);
int lttng_perf_counter_init (void);
void lttng_perf_counter_exit (void);
#633 "/usr/local/include/lttng/ust-events.h" 3
extern const struct lttng_ust_client_lib_ring_buffer_client_cb
  *lttng_client_callbacks_metadata;
extern const struct lttng_ust_client_lib_ring_buffer_client_cb
  *lttng_client_callbacks_discard;
extern const struct lttng_ust_client_lib_ring_buffer_client_cb
  *lttng_client_callbacks_overwrite;

struct lttng_transport *lttng_transport_find (const char *name);

int lttng_probes_get_event_list (struct lttng_ust_tracepoint_list *list);
void lttng_probes_prune_event_list (struct lttng_ust_tracepoint_list *list);
struct lttng_ust_tracepoint_iter
  *lttng_ust_tracepoint_list_get_iter_next (struct lttng_ust_tracepoint_list
					    *list);
int lttng_probes_get_field_list (struct lttng_ust_field_list *list);
void lttng_probes_prune_field_list (struct lttng_ust_field_list *list);
struct lttng_ust_field_iter *lttng_ust_field_list_get_iter_next (struct
								 lttng_ust_field_list
								 *list);

void lttng_filter_event_link_bytecode (struct lttng_event *event);
void lttng_enabler_event_link_bytecode (struct lttng_event *event,
					struct lttng_enabler *enabler);
void lttng_free_event_filter_runtime (struct lttng_event *event);
void lttng_filter_sync_state (struct lttng_bytecode_runtime *runtime);

struct cds_list_head *lttng_get_probe_list_head (void);
int lttng_session_active (void);

typedef int (*t_statedump_func_ptr) (struct lttng_session * session);
void lttng_handle_pending_statedump (void *owner);
struct cds_list_head *_lttng_get_sessions (void);
#28 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#1 "/usr/local/include/lttng/ringbuffer-config.h" 1 3
#31 "/usr/local/include/lttng/ringbuffer-config.h" 3
#1 "/usr/include/errno.h" 1 3 4
#32 "/usr/local/include/lttng/ringbuffer-config.h" 2 3


#1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/stddef.h" 1 3 4
#35 "/usr/local/include/lttng/ringbuffer-config.h" 2 3


#1 "/usr/local/include/lttng/align.h" 1 3
#28 "/usr/local/include/lttng/align.h" 3
#1 "/usr/local/include/lttng/bug.h" 1 3
#29 "/usr/local/include/lttng/align.h" 2 3

#1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/limits.h" 1 3 4
#34 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/limits.h" 3 4
#1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/syslimits.h" 1 3 4






#1 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/limits.h" 1 3 4
#168 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/limits.h" 3 4
#1 "/usr/include/limits.h" 1 3 4
#143 "/usr/include/limits.h" 3 4
#1 "/usr/include/bits/posix1_lim.h" 1 3 4
#160 "/usr/include/bits/posix1_lim.h" 3 4
#1 "/usr/include/bits/local_lim.h" 1 3 4
#38 "/usr/include/bits/local_lim.h" 3 4
#1 "/usr/include/linux/limits.h" 1 3 4
#39 "/usr/include/bits/local_lim.h" 2 3 4
#161 "/usr/include/bits/posix1_lim.h" 2 3 4
#144 "/usr/include/limits.h" 2 3 4



#1 "/usr/include/bits/posix2_lim.h" 1 3 4
#148 "/usr/include/limits.h" 2 3 4
#169 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/limits.h" 2 3 4
#8 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/syslimits.h" 2 3 4
#35 "/usr/lib/gcc/x86_64-redhat-linux/4.8.3/include/limits.h" 2 3 4
#31 "/usr/local/include/lttng/align.h" 2 3
#38 "/usr/local/include/lttng/ringbuffer-config.h" 2 3


struct lttng_ust_lib_ring_buffer;
struct channel;
struct lttng_ust_lib_ring_buffer_config;
struct lttng_ust_lib_ring_buffer_ctx;
struct lttng_ust_shm_handle;







struct lttng_ust_lib_ring_buffer_client_cb
{



  uint64_t (*ring_buffer_clock_read) (struct channel * chan);
  size_t (*record_header_size) (const struct lttng_ust_lib_ring_buffer_config
				* config, struct channel * chan,
				size_t offset, size_t * pre_header_padding,
				struct lttng_ust_lib_ring_buffer_ctx * ctx);


  size_t (*subbuffer_header_size) (void);
  void (*buffer_begin) (struct lttng_ust_lib_ring_buffer * buf, uint64_t tsc,
			unsigned int subbuf_idx,
			struct lttng_ust_shm_handle * handle);
  void (*buffer_end) (struct lttng_ust_lib_ring_buffer * buf, uint64_t tsc,
		      unsigned int subbuf_idx, unsigned long data_size,
		      struct lttng_ust_shm_handle * handle);




  int (*buffer_create) (struct lttng_ust_lib_ring_buffer * buf, void *priv,
			int cpu, const char *name,
			struct lttng_ust_shm_handle * handle);




  void (*buffer_finalize) (struct lttng_ust_lib_ring_buffer * buf,
			   void *priv, int cpu,
			   struct lttng_ust_shm_handle * handle);






  void (*record_get) (const struct lttng_ust_lib_ring_buffer_config * config,
		      struct channel * chan,
		      struct lttng_ust_lib_ring_buffer * buf, size_t offset,
		      size_t * header_len, size_t * payload_len,
		      uint64_t * timestamp,
		      struct lttng_ust_shm_handle * handle);
};
#138 "/usr/local/include/lttng/ringbuffer-config.h" 3
enum lttng_ust_lib_ring_buffer_alloc_types
{
  RING_BUFFER_ALLOC_PER_CPU,
  RING_BUFFER_ALLOC_GLOBAL,
};

enum lttng_ust_lib_ring_buffer_sync_types
{
  RING_BUFFER_SYNC_PER_CPU,
  RING_BUFFER_SYNC_GLOBAL,
};

enum lttng_ust_lib_ring_buffer_mode_types
{
  RING_BUFFER_OVERWRITE,
  RING_BUFFER_DISCARD,
};

enum lttng_ust_lib_ring_buffer_output_types
{
  RING_BUFFER_SPLICE,
  RING_BUFFER_MMAP,
  RING_BUFFER_READ,
  RING_BUFFER_ITERATOR,
  RING_BUFFER_NONE,
};

enum lttng_ust_lib_ring_buffer_backend_types
{
  RING_BUFFER_PAGE,
  RING_BUFFER_VMAP,
  RING_BUFFER_STATIC,
};

enum lttng_ust_lib_ring_buffer_oops_types
{
  RING_BUFFER_NO_OOPS_CONSISTENCY,
  RING_BUFFER_OOPS_CONSISTENCY,
};

enum lttng_ust_lib_ring_buffer_ipi_types
{
  RING_BUFFER_IPI_BARRIER,
  RING_BUFFER_NO_IPI_BARRIER,
};

enum lttng_ust_lib_ring_buffer_wakeup_types
{
  RING_BUFFER_WAKEUP_BY_TIMER,
  RING_BUFFER_WAKEUP_BY_WRITER,




};

struct lttng_ust_lib_ring_buffer_config
{
  enum lttng_ust_lib_ring_buffer_alloc_types alloc;
  enum lttng_ust_lib_ring_buffer_sync_types sync;
  enum lttng_ust_lib_ring_buffer_mode_types mode;
  enum lttng_ust_lib_ring_buffer_output_types output;
  enum lttng_ust_lib_ring_buffer_backend_types backend;
  enum lttng_ust_lib_ring_buffer_oops_types oops;
  enum lttng_ust_lib_ring_buffer_ipi_types ipi;
  enum lttng_ust_lib_ring_buffer_wakeup_types wakeup;




  unsigned int tsc_bits;
  struct lttng_ust_lib_ring_buffer_client_cb cb;





  int client_type;
  int _unused1;
  const struct lttng_ust_lib_ring_buffer_client_cb *cb_ptr;
  char padding[20];
};
#225 "/usr/local/include/lttng/ringbuffer-config.h" 3
struct lttng_ust_lib_ring_buffer_ctx
{

  struct channel *chan;
  void *priv;
  struct lttng_ust_shm_handle *handle;
  size_t data_size;
  int largest_align;



  int cpu;


  struct lttng_ust_lib_ring_buffer *buf;



  size_t slot_size;
  unsigned long buf_offset;
  unsigned long pre_offset;





  uint64_t tsc;
  unsigned int rflags;
  unsigned int padding1;
  void *ip;
  char padding2[(24 - sizeof (int) - sizeof (void *))];
};
#266 "/usr/local/include/lttng/ringbuffer-config.h" 3
static inline __attribute__ ((no_instrument_function))
     void
     lib_ring_buffer_ctx_init (struct lttng_ust_lib_ring_buffer_ctx *ctx,
			       struct channel *chan, void *priv,
			       size_t data_size, int largest_align,
			       int cpu, struct lttng_ust_shm_handle *handle);
     static
     inline void
     lib_ring_buffer_ctx_init (struct lttng_ust_lib_ring_buffer_ctx *ctx,
			       struct channel *chan, void *priv,
			       size_t data_size, int largest_align,
			       int cpu, struct lttng_ust_shm_handle *handle)
{
  ctx->chan = chan;
  ctx->priv = priv;
  ctx->data_size = data_size;
  ctx->largest_align = largest_align;
  ctx->cpu = cpu;
  ctx->rflags = 0;
  ctx->handle = handle;
  ctx->padding1 = 0;
  ctx->ip = 0;
  memset (ctx->padding2, 0, (24 - sizeof (int) - sizeof (void *)));
}

#336 "/usr/local/include/lttng/ringbuffer-config.h" 3
static inline __attribute__ ((no_instrument_function))
     unsigned int
     lib_ring_buffer_align (size_t align_drift, size_t size_of_type);
     static
     inline unsigned int
     lib_ring_buffer_align (size_t align_drift, size_t size_of_type)
{
  return 0;
}







static inline __attribute__ ((no_instrument_function))
     void
     lib_ring_buffer_align_ctx (struct lttng_ust_lib_ring_buffer_ctx *ctx,
				size_t alignment);
     static
     inline void
     lib_ring_buffer_align_ctx (struct lttng_ust_lib_ring_buffer_ctx *ctx,
				size_t alignment)
{
  ctx->buf_offset += lib_ring_buffer_align (ctx->buf_offset, alignment);
}





static inline __attribute__ ((no_instrument_function))
     int
     lib_ring_buffer_check_config (const struct
				   lttng_ust_lib_ring_buffer_config *config,
				   unsigned int switch_timer_interval,
				   unsigned int read_timer_interval);
     static
     inline int
     lib_ring_buffer_check_config (const struct
				   lttng_ust_lib_ring_buffer_config *config,
				   unsigned int switch_timer_interval,
				   unsigned int read_timer_interval)
{
  if (config->alloc == RING_BUFFER_ALLOC_GLOBAL
      && config->sync == RING_BUFFER_SYNC_PER_CPU && switch_timer_interval)
    return -22;
  return 0;
}

#29 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3

#1 "/usr/local/include/lttng/tracepoint.h" 1 3
#31 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#76 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "/usr/local/include/lttng/ust-tracepoint-event-reset.h" 1 3
#77 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3

static inline __attribute__ ((no_instrument_function))
     void
     __tracepoint_provider_mismatch_retlif_tp (void);
     static
     inline void
     __tracepoint_provider_mismatch_retlif_tp (void)
{
}

#93 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
static inline __attribute__ ((no_instrument_function))
     void
     __tracepoint_provider_check_retlif_tp (void);
     static
     inline void
     __tracepoint_provider_check_retlif_tp (void)
{
#1 "././retlif-lttng_tp.h" 1 3
#14 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint.h" 1 3
#15 "././retlif-lttng_tp.h" 2 3
#23 "././retlif-lttng_tp.h" 3
  __tracepoint_provider_mismatch_retlif_tp ();
  __tracepoint_provider_mismatch_retlif_tp ();
#57 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint-event.h" 1 3
#58 "././retlif-lttng_tp.h" 2 3
#99 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
}

#109 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "/usr/local/include/lttng/ust-tracepoint-event-reset.h" 1 3
#110 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#118 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "././retlif-lttng_tp.h" 1 3
#14 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint.h" 1 3
#15 "././retlif-lttng_tp.h" 2 3
#23 "././retlif-lttng_tp.h" 3
static const char __tp_name_len_checkretlif_tp___tpfilt[256]
  __attribute__ ((unused)) = "retlif_tp" ":" "tpfilt";
#57 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint-event.h" 1 3
#58 "././retlif-lttng_tp.h" 2 3
#119 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#128 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "/usr/local/include/lttng/ust-tracepoint-event-reset.h" 1 3
#129 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#1 "/usr/local/include/lttng/ust-tracepoint-event-write.h" 1 3
#130 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#1 "/usr/local/include/lttng/ust-tracepoint-event-nowrite.h" 1 3
#131 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#211 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "././retlif-lttng_tp.h" 1 3
#14 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint.h" 1 3
#15 "././retlif-lttng_tp.h" 2 3
#23 "././retlif-lttng_tp.h" 3
static const struct lttng_event_field __event_fields___retlif_tp___tpfilt[] =
  { {.name = "var0",.type =
     {.atype = atype_string,.u =
      {.basic = {.string = {.encoding = lttng_encode_UTF8}}},},.nowrite =
     0,}, {.name = "var1",.type = {.atype = atype_string,.u =
				   {.basic =
				    {.string =
				     {.encoding =
				      lttng_encode_UTF8}}},},.nowrite =
	   0,}, {.name = "var2",.type = {.atype = atype_string,.u =
					 {.basic =
					  {.string =
					   {.encoding =
					    lttng_encode_UTF8}}},},.nowrite =
		 0,}, {.name = "var3",.type = {.atype = atype_string,.u =
					       {.basic =
						{.string =
						 {.encoding =
						  lttng_encode_UTF8}}},},.
		       nowrite = 0,}, {.name = "var4",.type = {.atype =
							       atype_string,.
							       u = {.basic =
								    {.string =
								     {.
								      encoding
								      =
								      lttng_encode_UTF8}}},},.
				       nowrite = 0,}, {.name = "lyf",.type =
						       {.atype =
							atype_integer,.u =
							{.basic =
							 {.integer =
							  {.size =
							   sizeof (int) *
							   8,.alignment =
							   1 * 8,.signedness =
							   ((int) -1 <
							    (int) 0),.
							   reverse_byte_order
							   =
							   1234 !=
							   1234,.base =
							   10,.encoding =
							   lttng_encode_none,}}},},.
						       nowrite = 0,}, };
#57 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint-event.h" 1 3
#58 "././retlif-lttng_tp.h" 2 3
#212 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#220 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "/usr/local/include/lttng/ust-tracepoint-event-reset.h" 1 3
#221 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#229 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "././retlif-lttng_tp.h" 1 3
#14 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint.h" 1 3
#15 "././retlif-lttng_tp.h" 2 3
#23 "././retlif-lttng_tp.h" 3
static void __event_probe__retlif_tp___tpfilt (void *__tp_data, char *str0,
					       char *str1, char *str2,
					       char *str3, char *str4,
					       int life);
#57 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint-event.h" 1 3
#58 "././retlif-lttng_tp.h" 2 3
#230 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#238 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "/usr/local/include/lttng/ust-tracepoint-event-reset.h" 1 3
#239 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#1 "/usr/local/include/lttng/ust-tracepoint-event-write.h" 1 3
#240 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#292 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "././retlif-lttng_tp.h" 1 3
#14 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint.h" 1 3
#15 "././retlif-lttng_tp.h" 2 3
#23 "././retlif-lttng_tp.h" 3
static inline __attribute__ ((no_instrument_function))
     size_t
     __event_get_size__retlif_tp___tpfilt (size_t * __dynamic_len,
					   void *__tp_data, char *str0,
					   char *str1, char *str2, char *str3,
					   char *str4, int life);
     static inline size_t
     __event_get_size__retlif_tp___tpfilt (size_t * __dynamic_len,
					   void *__tp_data, char *str0,
					   char *str1, char *str2, char *str3,
					   char *str4, int life)
{
  size_t __event_len = 0;
  unsigned int __dynamic_len_idx = 0;
  if (0)
    (void) __dynamic_len_idx;
  __event_len += __dynamic_len[__dynamic_len_idx++] = strlen (str0) + 1;
  __event_len += __dynamic_len[__dynamic_len_idx++] = strlen (str1) + 1;
  __event_len += __dynamic_len[__dynamic_len_idx++] = strlen (str2) + 1;
  __event_len += __dynamic_len[__dynamic_len_idx++] = strlen (str3) + 1;
  __event_len += __dynamic_len[__dynamic_len_idx++] = strlen (str4) + 1;
  __event_len += lib_ring_buffer_align (__event_len, 1);
  __event_len += sizeof (int);
  return __event_len;
}

#57 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint-event.h" 1 3
#58 "././retlif-lttng_tp.h" 2 3
#293 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#302 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "/usr/local/include/lttng/ust-tracepoint-event-reset.h" 1 3
#303 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#1 "/usr/local/include/lttng/ust-tracepoint-event-write.h" 1 3
#304 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#1 "/usr/local/include/lttng/ust-tracepoint-event-nowrite.h" 1 3
#305 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#427 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "././retlif-lttng_tp.h" 1 3
#14 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint.h" 1 3
#15 "././retlif-lttng_tp.h" 2 3
#23 "././retlif-lttng_tp.h" 3
static inline void
__event_prepare_filter_stack__retlif_tp___tpfilt (char *__stack_data,
						  void *__tp_data, char *str0,
						  char *str1, char *str2,
						  char *str3, char *str4,
						  int life)
{
  {
    const void *__ctf_tmp_ptr = (str0);
    memcpy (__stack_data, &__ctf_tmp_ptr, sizeof (void *));
    __stack_data += sizeof (void *);
  }
  {
    const void *__ctf_tmp_ptr = (str1);
    memcpy (__stack_data, &__ctf_tmp_ptr, sizeof (void *));
    __stack_data += sizeof (void *);
  }
  {
    const void *__ctf_tmp_ptr = (str2);
    memcpy (__stack_data, &__ctf_tmp_ptr, sizeof (void *));
    __stack_data += sizeof (void *);
  }
  {
    const void *__ctf_tmp_ptr = (str3);
    memcpy (__stack_data, &__ctf_tmp_ptr, sizeof (void *));
    __stack_data += sizeof (void *);
  }
  {
    const void *__ctf_tmp_ptr = (str4);
    memcpy (__stack_data, &__ctf_tmp_ptr, sizeof (void *));
    __stack_data += sizeof (void *);
  } if (((int) -1 < (int) 0))
    {
      int64_t __ctf_tmp_int64;
      switch (sizeof (int))
	{
	case 1:
	  {
	    union
	    {
	      int t;
	      int8_t v;
	    } __tmp =
	    {
	    (int) (life)};
	    __ctf_tmp_int64 = (int64_t) __tmp.v;
	    break;
	  }
	case 2:
	  {
	    union
	    {
	      int t;
	      int16_t v;
	    } __tmp =
	    {
	    (int) (life)};
	    __ctf_tmp_int64 = (int64_t) __tmp.v;
	    break;
	  }
	case 4:
	  {
	    union
	    {
	      int t;
	      int32_t v;
	    } __tmp =
	    {
	    (int) (life)};
	    __ctf_tmp_int64 = (int64_t) __tmp.v;
	    break;
	  }
	case 8:
	  {
	    union
	    {
	      int t;
	      int64_t v;
	    } __tmp =
	    {
	    (int) (life)};
	    __ctf_tmp_int64 = (int64_t) __tmp.v;
	    break;
	  }
	default:
	  abort ();
	};
      memcpy (__stack_data, &__ctf_tmp_int64, sizeof (int64_t));
    }
  else
    {
      uint64_t __ctf_tmp_uint64;
      switch (sizeof (int))
	{
	case 1:
	  {
	    union
	    {
	      int t;
	      uint8_t v;
	    } __tmp =
	    {
	    (int) (life)};
	    __ctf_tmp_uint64 = (uint64_t) __tmp.v;
	    break;
	  }
	case 2:
	  {
	    union
	    {
	      int t;
	      uint16_t v;
	    } __tmp =
	    {
	    (int) (life)};
	    __ctf_tmp_uint64 = (uint64_t) __tmp.v;
	    break;
	  }
	case 4:
	  {
	    union
	    {
	      int t;
	      uint32_t v;
	    } __tmp =
	    {
	    (int) (life)};
	    __ctf_tmp_uint64 = (uint64_t) __tmp.v;
	    break;
	  }
	case 8:
	  {
	    union
	    {
	      int t;
	      uint64_t v;
	    } __tmp =
	    {
	    (int) (life)};
	    __ctf_tmp_uint64 = (uint64_t) __tmp.v;
	    break;
	  }
	default:
	  abort ();
	};
      memcpy (__stack_data, &__ctf_tmp_uint64, sizeof (uint64_t));
    }
  __stack_data += sizeof (int64_t);
}

#57 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint-event.h" 1 3
#58 "././retlif-lttng_tp.h" 2 3
#428 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#438 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "/usr/local/include/lttng/ust-tracepoint-event-reset.h" 1 3
#439 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#1 "/usr/local/include/lttng/ust-tracepoint-event-write.h" 1 3
#440 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#480 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "././retlif-lttng_tp.h" 1 3
#14 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint.h" 1 3
#15 "././retlif-lttng_tp.h" 2 3
#23 "././retlif-lttng_tp.h" 3
static inline __attribute__ ((no_instrument_function))
     size_t __event_get_align__retlif_tp___tpfilt (char *str0, char *str1,
						   char *str2, char *str3,
						   char *str4, int life);
     static inline size_t __event_get_align__retlif_tp___tpfilt (char *str0,
								 char *str1,
								 char *str2,
								 char *str3,
								 char *str4,
								 int life)
{
  size_t __event_align = 1;
  __event_align = (
		    {
		    size_t __max1 = (__event_align);
		    size_t __max2 = (1);
		    __max1 > __max2 ? __max1 : __max2;
		    });
  return __event_align;
}

#57 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint-event.h" 1 3
#58 "././retlif-lttng_tp.h" 2 3
#481 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#491 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "/usr/local/include/lttng/ust-tracepoint-event-reset.h" 1 3
#492 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#1 "/usr/local/include/lttng/ust-tracepoint-event-write.h" 1 3
#493 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#632 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "././retlif-lttng_tp.h" 1 3
#14 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint.h" 1 3
#15 "././retlif-lttng_tp.h" 2 3
#23 "././retlif-lttng_tp.h" 3
static __attribute__ ((no_instrument_function))
     void __event_probe__retlif_tp___tpfilt (void *__tp_data, char *str0,
					     char *str1, char *str2,
					     char *str3, char *str4,
					     int life);
     static void __event_probe__retlif_tp___tpfilt (void *__tp_data,
						    char *str0, char *str1,
						    char *str2, char *str3,
						    char *str4, int life)
{
  struct lttng_event *__event = (struct lttng_event *) __tp_data;
  struct lttng_channel *__chan = __event->chan;
  struct lttng_ust_lib_ring_buffer_ctx __ctx;
  size_t __event_len, __event_align;
  size_t __dynamic_len_idx = 0;
  union
  {
    size_t
      __dynamic_len[(sizeof (__event_fields___retlif_tp___tpfilt) /
		     sizeof ((__event_fields___retlif_tp___tpfilt)[0]))];
    char __filter_stack_data[2 * sizeof (unsigned long) *
			     (sizeof (__event_fields___retlif_tp___tpfilt) /
			      sizeof ((__event_fields___retlif_tp___tpfilt)
				      [0]))];
  }
  __stackvar;
  int __ret;
  if (0)
    (void) __dynamic_len_idx;
  if (!1)
    return;
  if (__builtin_expect
      (! !
       (!(*(__volatile__ __typeof__ (__chan->session->active) *) &
	  (__chan->session->active))), 0))
    return;
  if (__builtin_expect
      (! !
       (!(*(__volatile__ __typeof__ (__chan->enabled) *) &
	  (__chan->enabled))), 0))
    return;
  if (__builtin_expect
      (! !
       (!(*(__volatile__ __typeof__ (__event->enabled) *) &
	  (__event->enabled))), 0))
    return;
  if (__builtin_expect (! !(!tracepoint_dlopen.rcu_read_lock_sym_bp), 0))
    return;
  if (__builtin_expect
      (! !(!cds_list_empty (&__event->bytecode_runtime_head)), 0))
    {
      struct lttng_bytecode_runtime *bc_runtime;
      int __filter_record = __event->has_enablers_without_bytecode;
      __event_prepare_filter_stack__retlif_tp___tpfilt (__stackvar.
							__filter_stack_data,
							__tp_data, str0, str1,
							str2, str3, str4,
							life);
      for (bc_runtime =
	   ((__typeof__ (*bc_runtime)
	     *) ((char
		  *) (((__typeof__ ((&__event->bytecode_runtime_head)->next))
		       (tracepoint_dlopen.
			rcu_dereference_sym_bp (((void
						  *) ((&__event->
						       bytecode_runtime_head)->
						      next)))))) -
		 (unsigned long) (&((__typeof__ (*bc_runtime) *) 0)->node)));
	   &bc_runtime->node != (&__event->bytecode_runtime_head);
	   bc_runtime =
	   ((__typeof__ (*bc_runtime)
	     *) ((char
		  *) (((__typeof__ (bc_runtime->node.next))
		       (tracepoint_dlopen.
			rcu_dereference_sym_bp (((void *) (bc_runtime->node.
							   next)))))) -
		 (unsigned long) (&((__typeof__ (*bc_runtime) *) 0)->node))))
	{
	  if (__builtin_expect
	      (! !
	       (bc_runtime->
		filter (bc_runtime,
			__stackvar.
			__filter_stack_data) & LTTNG_FILTER_RECORD_FLAG), 0))
	    __filter_record = 1;
	}
      if (__builtin_expect (! !(!__filter_record), 1))
	return;
    }
  __event_len =
    __event_get_size__retlif_tp___tpfilt (__stackvar.__dynamic_len, __tp_data,
					  str0, str1, str2, str3, str4, life);
  __event_align =
    __event_get_align__retlif_tp___tpfilt (str0, str1, str2, str3, str4,
					   life);
  lib_ring_buffer_ctx_init (&__ctx, __chan->chan, __event, __event_len,
			    __event_align, -1, __chan->handle);
  __ctx.ip = __builtin_return_address (0);
  __ret = __chan->ops->event_reserve (&__ctx, __event->id);
  if (__ret < 0)
    return;
  lib_ring_buffer_align_ctx (&__ctx, 1);
  if (__chan->ops->u.has_strcpy)
    __chan->ops->event_strcpy (&__ctx, str0,
			       __stackvar.__dynamic_len[__dynamic_len_idx++]);
  else
    __chan->ops->event_write (&__ctx, str0,
			      __stackvar.__dynamic_len[__dynamic_len_idx++]);
  lib_ring_buffer_align_ctx (&__ctx, 1);
  if (__chan->ops->u.has_strcpy)
    __chan->ops->event_strcpy (&__ctx, str1,
			       __stackvar.__dynamic_len[__dynamic_len_idx++]);
  else
    __chan->ops->event_write (&__ctx, str1,
			      __stackvar.__dynamic_len[__dynamic_len_idx++]);
  lib_ring_buffer_align_ctx (&__ctx, 1);
  if (__chan->ops->u.has_strcpy)
    __chan->ops->event_strcpy (&__ctx, str2,
			       __stackvar.__dynamic_len[__dynamic_len_idx++]);
  else
    __chan->ops->event_write (&__ctx, str2,
			      __stackvar.__dynamic_len[__dynamic_len_idx++]);
  lib_ring_buffer_align_ctx (&__ctx, 1);
  if (__chan->ops->u.has_strcpy)
    __chan->ops->event_strcpy (&__ctx, str3,
			       __stackvar.__dynamic_len[__dynamic_len_idx++]);
  else
    __chan->ops->event_write (&__ctx, str3,
			      __stackvar.__dynamic_len[__dynamic_len_idx++]);
  lib_ring_buffer_align_ctx (&__ctx, 1);
  if (__chan->ops->u.has_strcpy)
    __chan->ops->event_strcpy (&__ctx, str4,
			       __stackvar.__dynamic_len[__dynamic_len_idx++]);
  else
    __chan->ops->event_write (&__ctx, str4,
			      __stackvar.__dynamic_len[__dynamic_len_idx++]);
  {
    int __tmp = (life);
    lib_ring_buffer_align_ctx (&__ctx, 1);
    __chan->ops->event_write (&__ctx, &__tmp, sizeof (__tmp));
  }
  __chan->ops->event_commit (&__ctx);
}

#57 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint-event.h" 1 3
#58 "././retlif-lttng_tp.h" 2 3
#633 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#643 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "/usr/local/include/lttng/ust-tracepoint-event-reset.h" 1 3
#644 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#655 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "././retlif-lttng_tp.h" 1 3
#14 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint.h" 1 3
#15 "././retlif-lttng_tp.h" 2 3
#23 "././retlif-lttng_tp.h" 3
const char __tp_event_signature___retlif_tp___tpfilt[] =
  "char*, str0, char*, str1, char*, str2, char*, str3, char*, str4, int, life";
#57 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint-event.h" 1 3
#58 "././retlif-lttng_tp.h" 2 3
#656 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#669 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "/usr/local/include/lttng/ust-tracepoint-event-reset.h" 1 3
#670 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3







#1 "././retlif-lttng_tp.h" 1 3
#14 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint.h" 1 3
#15 "././retlif-lttng_tp.h" 2 3
#23 "././retlif-lttng_tp.h" 3

#57 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint-event.h" 1 3
#58 "././retlif-lttng_tp.h" 2 3
#678 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#686 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "/usr/local/include/lttng/ust-tracepoint-event-reset.h" 1 3
#687 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3





#1 "././retlif-lttng_tp.h" 1 3
#14 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint.h" 1 3
#15 "././retlif-lttng_tp.h" 2 3
#23 "././retlif-lttng_tp.h" 3

#57 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint-event.h" 1 3
#58 "././retlif-lttng_tp.h" 2 3
#693 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#703 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "/usr/local/include/lttng/ust-tracepoint-event-reset.h" 1 3
#704 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#724 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "././retlif-lttng_tp.h" 1 3
#14 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint.h" 1 3
#15 "././retlif-lttng_tp.h" 2 3
#23 "././retlif-lttng_tp.h" 3
static const int *__ref_loglevel___retlif_tp___tpfilt
  __attribute__ ((weakref ("_loglevel___" "retlif_tp" "___" "tpfilt")));
static const char *__ref_model_emf_uri___retlif_tp___tpfilt
  __attribute__ ((weakref ("_model_emf_uri___" "retlif_tp" "___" "tpfilt")));
const struct lttng_event_desc __event_desc___retlif_tp_tpfilt = {.name =
    "retlif_tp" ":" "tpfilt",.probe_callback =
    (void (*)(void)) &__event_probe__retlif_tp___tpfilt,.ctx =
    ((void *) 0),.fields = __event_fields___retlif_tp___tpfilt,.nr_fields =
    (sizeof (__event_fields___retlif_tp___tpfilt) /
     sizeof ((__event_fields___retlif_tp___tpfilt)[0])),.loglevel =
    &__ref_loglevel___retlif_tp___tpfilt,.signature =
    __tp_event_signature___retlif_tp___tpfilt,.u = {.ext =
						    {.model_emf_uri =
						     &__ref_model_emf_uri___retlif_tp___tpfilt}
						    }
, };

#57 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint-event.h" 1 3
#58 "././retlif-lttng_tp.h" 2 3
#725 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
#733 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "/usr/local/include/lttng/ust-tracepoint-event-reset.h" 1 3
#734 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3





static const struct lttng_event_desc *__event_desc___retlif_tp[] = {
#1 "././retlif-lttng_tp.h" 1 3
#14 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint.h" 1 3
#15 "././retlif-lttng_tp.h" 2 3
#23 "././retlif-lttng_tp.h" 3
  &__event_desc___retlif_tp_tpfilt,
#57 "././retlif-lttng_tp.h" 3
#1 "/usr/local/include/lttng/tracepoint-event.h" 1 3
#58 "././retlif-lttng_tp.h" 2 3
#741 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
};

#751 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
static struct lttng_probe_desc __probe_desc___retlif_tp = {
  .provider = "retlif_tp",
  .event_desc = __event_desc___retlif_tp,
  .nr_events =
    (sizeof (__event_desc___retlif_tp) /
     sizeof ((__event_desc___retlif_tp)[0])),
  .head = {((void *) 0), ((void *) 0)},
  .lazy_init_head = {((void *) 0), ((void *) 0)},
  .lazy = 0,
  .major = 1,
  .minor = 0,
};

static int __probe_register_refcount___retlif_tp;
#776 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
#1 "/usr/local/include/lttng/ust-tracepoint-event-reset.h" 1 3
#777 "/usr/local/include/lttng/ust-tracepoint-event.h" 2 3
static void __attribute__ ((no_instrument_function))
  __attribute__ ((constructor)) __lttng_events_init__retlif_tp (void);
static void
__lttng_events_init__retlif_tp (void)
{
  int ret;

  if (__probe_register_refcount___retlif_tp++)
    {
      return;
    }
#796 "/usr/local/include/lttng/ust-tracepoint-event.h" 3
  __tracepoint_provider_check_retlif_tp ();
  ret = lttng_probe_register (&__probe_desc___retlif_tp);
  if (ret)
    {
      fprintf (stderr,
	       "LTTng-UST: Error (%d) while registering tracepoint probe. Duplicate registration of tracepoint probes having the same name is not allowed.\n",
	       ret);
      abort ();
    }
}

static void __attribute__ ((no_instrument_function))
  __attribute__ ((destructor)) __lttng_events_exit__retlif_tp (void);
static void
__lttng_events_exit__retlif_tp (void)
{
  if (--__probe_register_refcount___retlif_tp)
    {
      return;
    }
  lttng_probe_unregister (&__probe_desc___retlif_tp);
}

int __tracepoint_provider_retlif_tp;
#59 "/usr/local/include/lttng/tracepoint-event.h" 2 3
#58 "retlif-lttng_tp.h" 2
#20 "retlif-lttng.c" 2







struct bpf_prog *prog;
struct bpf_insn *insn_prog;
int prog_size = 0;
unsigned long NR_RUNS = 0;

static void *
u64_to_ptr (__u64 val)
{
  return (void *) (unsigned long) val;
}

static __u64
ptr_to_u64 (void *ptr)
{
  return (__u64) (unsigned long) ptr;
}

unsigned int
filter (struct bpf_prog *prog1, struct bpf_context *ctx)
{
  __u64 ret = (*prog1->bpf_func) ((void *) ctx, prog1->insnsi);
  return ret;
}

static int
get_sec (Elf * elf, int i, GElf_Ehdr * ehdr, char **shname,
	 GElf_Shdr * shdr, Elf_Data ** data)
{
  Elf_Scn *scn;

  scn = elf_getscn (elf, i);
  if (!scn)
    return 1;

  if (gelf_getshdr (scn, shdr) != shdr)
    return 2;

  *shname = elf_strptr (elf, ehdr->e_shstrndx, shdr->sh_name);
  if (!*shname || !shdr->sh_size)
    return 3;

  *data = elf_getdata (scn, 0);
  if (!*data || elf_getdata (scn, *data) != ((void *) 0))
    return 4;

  return 0;
}

int
load_bpf_file (char *path)
{
  int fd, i;
  Elf *elf;
  GElf_Ehdr ehdr;
  GElf_Shdr shdr, shdr_prog;
  Elf_Data *data, *data_prog, *symbols = ((void *) 0);
  char *shname, *shname_prog;

  if (elf_version (1) == 0)
    return 1;

  fd = open (path, 00, 0);
  if (fd < 0)
    return 1;

  elf = elf_begin (fd, ELF_C_READ, ((void *) 0));

  if (!elf)
    return 1;

  if (gelf_getehdr (elf, &ehdr) != &ehdr)
    return 1;


  for (i = 1; i < ehdr.e_shnum; i++)
    {

      if (get_sec (elf, i, &ehdr, &shname, &shdr, &data))
	continue;

      if (0)
	printf ("section %d:%s data %p size %zd link %d flags %d\n",
		i, shname, data->d_buf, data->d_size,
		shdr.sh_link, (int) shdr.sh_flags);
    }

  for (i = 1; i < ehdr.e_shnum; i++)
    {

      if (get_sec (elf, i, &ehdr, &shname, &shdr, &data))
	continue;

      if (strcmp (shname, ".text") == 0)
	{
	  insn_prog = (struct insn_prog *) data->d_buf;
	  prog_size = data->d_size;
	  if (0)
	    printf ("section name %s, data %p, size %d\n", shname,
		    data->d_buf, data->d_size);
	}
    }

  close (fd);
  return 0;

}

unsigned int
init_ebpf_prog (void)
{
  int ret = 0;
  if (load_bpf_file ("./filter.bpf") != 0)
    {
      printf ("BPF load error");
      return 1;
    }
  char bpf_log_buf[1024];
  unsigned int insn_count = prog_size / sizeof (struct bpf_insn);

  union bpf_attr attr = {
    .prog_type = BPF_PROG_TYPE_UNSPEC,
    .insns = ptr_to_u64 ((void *) insn_prog),
    .insn_cnt = insn_count,
    .license = ptr_to_u64 ((void *) "GPL"),
    .log_buf = ptr_to_u64 (bpf_log_buf),
    .log_size = 1024,
    .log_level = 1,
  };

  prog = bpf_prog_alloc (bpf_prog_size (attr.insn_cnt));
  if (!prog)
    return -12;
  prog->jited = 0;
  prog->orig_prog = ((void *) 0);
  prog->len = attr.insn_cnt;





  if (memcpy
      (prog->insnsi, u64_to_ptr (attr.insns),
       prog->len * sizeof (struct bpf_insn)) != 0)
    (((&prog->aux->refcnt)->counter) = (1));
  prog->aux->is_gpl_compatible = 1;
#168 "retlif-lttng.c"
  fixup_bpf_calls (prog);



  bpf_prog_select_runtime (prog);



  return ret;
}

unsigned int
run_bpf_filt (struct filt_args *fargs)
{
  unsigned int ret = 0;
  struct bpf_context bctx = { };
  bctx.arg1 = (__u64) fargs;
  ret = filter (prog, &bctx);
  return ret;
}

unsigned int
run_simple_filt (struct filt_args *fargs)
{
  unsigned int ret = 0;
  if ((strcmp (fargs->str0, "str0") == 0) &&
      (strcmp (fargs->str1, "str1") == 0) &&
      (strcmp (fargs->str2, "str2") == 0) &&
      (strcmp (fargs->str3, "str3") == 0) &&
      (strcmp (fargs->str4, "str4") == 0) && (fargs->int1 == 42))
    {
      ret = 1;
    }
  else
    {
      ret = 0;
    }

  return ret;
}


void
cleanup (void)
{
  bpf_prog_free (prog);
}

int
main (int argc, char **argv)
{
  int i;
  NR_RUNS = atoi (getenv ("NR_RUNS"));

  struct filt_args *args =
    (struct filt_args *) malloc (sizeof (struct filt_args));

  args->str0 = "str0";

  args->str1 = "str1";

  args->str2 = "str2";

  args->str3 = "str3";

  args->str4 = "str4";

  args->int1 = 42;

  if (argc < 2)
    {
      printf ("Check number or args\n");
      return 0;
    }

  if (strcmp (argv[1], "BPF") == 0)
    {


      int ret = init_ebpf_prog ();
      do
	{
	  struct timespec ts_start, ts_end;
	  clock_gettime (1, &ts_start);
	  for (i = 0; i < NR_RUNS; i++)
	    {
	      ret = run_bpf_filt (args);
	      if (ret == 1)
		{
		  printf ("True\n");

		  do
		    {;
		      if (__builtin_expect
			  (! !(__tracepoint_retlif_tp___tpfilt.state), 0))
			__tracepoint_cb_retlif_tp___tpfilt (args->str0,
							    args->str1,
							    args->str2,
							    args->str3,
							    args->str4,
							    args->int1);
		    }
		  while (0)
#270 "retlif-lttng.c"
		  ;
		}
	      else
		{
		  printf ("False\n");
		}
	    }
	  clock_gettime (1, &ts_end);
	  printf ("%lf\n",
		  (ts_end.tv_sec - ts_start.tv_sec) +
		  (double) (ts_end.tv_nsec - ts_start.tv_nsec) / 1e9);
	}
      while (0);
      cleanup ();
      free (args);

      return 0;
    }
#305 "retlif-lttng.c"
  if (strcmp (argv[1], "CLEAN") == 0)
    {

      int ret = 0;
      do
	{
	  struct timespec ts_start, ts_end;
	  clock_gettime (1, &ts_start);
	  for (i = 0; i < NR_RUNS; i++)
	    {

	      do
		{;
		  if (__builtin_expect
		      (! !(__tracepoint_retlif_tp___tpfilt.state), 0))
		    __tracepoint_cb_retlif_tp___tpfilt (args->str0,
							args->str1,
							args->str2,
							args->str3,
							args->str4,
							args->int1);
		}
	      while (0)
#326 "retlif-lttng.c"
	      ;
	    }
	  clock_gettime (1, &ts_end);
	  printf ("%lf\n",
		  (ts_end.tv_sec - ts_start.tv_sec) +
		  (double) (ts_end.tv_nsec - ts_start.tv_nsec) / 1e9);
	}
      while (0);
      return 0;
    }

  if (strcmp (argv[1], "BPFFALSE") == 0)
    {


      int ret = init_ebpf_prog ();
      do
	{
	  struct timespec ts_start, ts_end;
	  clock_gettime (1, &ts_start);
	  for (i = 0; i < NR_RUNS; i++)
	    {
	      ret = run_bpf_filt (args);
	      ret = 0;
	      if (ret == 1)
		{
		  printf ("True\n");

		  do
		    {;
		      if (__builtin_expect
			  (! !(__tracepoint_retlif_tp___tpfilt.state), 0))
			__tracepoint_cb_retlif_tp___tpfilt (args->str0,
							    args->str1,
							    args->str2,
							    args->str3,
							    args->str4,
							    args->int1);
		    }
		  while (0)
#358 "retlif-lttng.c"
		  ;
		}
	      else
		{
		  printf ("False\n");
		}
	    }
	  clock_gettime (1, &ts_end);
	  printf ("%lf\n",
		  (ts_end.tv_sec - ts_start.tv_sec) +
		  (double) (ts_end.tv_nsec - ts_start.tv_nsec) / 1e9);
	}
      while (0);
      cleanup ();
      free (args);

      return 0;
    }
  printf ("Check args..\n");
}
