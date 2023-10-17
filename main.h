#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
int _putchar(char c);
int handle_char(char c);
int _printf(const char *format, ...);
const char *check_in(const char *format);
int handle_string(char *str);
int format_and_count(const char *format, va_list args);
int checker_formation(char check, va_list args);
int checker_formation_extend(char check, va_list args);
int print_decimal(int n);
int print_int(int n);
int print_to_decimal(unsigned int x);
int print_uns_or_oct(unsigned int i, int num);
int print_hexLower(unsigned int x);
int print_hexUpper(unsigned int x);
int custom_string(char *s);
#endif
