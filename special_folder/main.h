#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _putchar(char c);
int do_s(va_list args);
void do_c(va_list args);

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

#endif
