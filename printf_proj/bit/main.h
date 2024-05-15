#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
/**
 * struct format - A structure for the format specifier
 * @id: A reference to the particular format
 * @f: A function pointer to particular function
 *
 * Description: A structure for the format specifier
 */
typedef struct format
{
	char *id;
	int (*f)();
} match;

int _putchar(char c);
int print_c(va_list val);
int print_str(va_list val);
int _printf(const char *format, ...);
int _strlen(char *s);
int _strlen(const char *s);
int print_percent(void);
int print_dec(va_list args);
int print_int(va_list args);
int print_bin(va_list val);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_hex1(va_list val); //hex1
int print_HEX2(va_list val); //hex2
int print_hex_pointer(unsigned long int num);
int print_rot13(va_list val);



#endif /*Header file*/
