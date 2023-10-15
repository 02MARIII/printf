#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
int _putchar(char c);
int _printf(const char *format, ...);
const char *check_in(const char *format);
int handle_string(char *str);
int format_and_count(const char *format, va_list args);
#endif
