#ifndef MAIN_H
#define MAIN_H


/*Standard header files*/
#include <stdarg.h>
#include <unistd.h>

/*User defined prototypes*/
int handle_format(char format, va_list mylist);
int char_print(int z);
int length_str(char *mystr);
int get_int(int num);
int _printf(const char *format, ...);
int digit_print(long num, int base);
int string_print(char *mystr);
int _strlen(char *mystr);


#endif
