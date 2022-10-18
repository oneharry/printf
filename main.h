#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define ZERO 0
#define UNPR "\\x"

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *str);
int format_di(va_list arg);
int format_x(va_list arg);
int format_X(va_list arg);
int format_S(va_list arg);
int format_u(va_list arg);
int format_o(va_list arg);
int handle_flag(char *);
int isPrintable(char c);
char *convert(unsigned int num, int base);

#endif
