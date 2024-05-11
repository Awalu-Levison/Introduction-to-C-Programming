#ifndef MAIN_H
#define MAIN_H

/*Standard functions*/
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/*User defined functions*/
int _printf(const char *format, ...);
int putchr(char c);
int handle_format(const char *format, va_list mylist);
int len_str(char *s);
int str_print(char *mystr);
int get_int(int num);



#endif
