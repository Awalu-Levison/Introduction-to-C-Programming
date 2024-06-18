#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
void reverse_array(int *a, int n);
void print_chessboard(char (*a)[8]);
char *rot13(char *s);
char *cap_string(char *);
void print_buffer(char *b, int size);
void print_line(char *c, int s, int l);
char *string_toupper(char *);
int print_bin(va_list val);

#endif
