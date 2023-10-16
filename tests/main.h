#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
int _putchar(char c);
int _printf(const char *format, ...);
int handle_string(va_list args);
int format_and_count(const char *format, va_list args);
#endif
