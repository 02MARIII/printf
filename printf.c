#include "main.h"
int parse_and_output(const char *format, ...);
/**
 * _printf - Entry point
 * @format: const param for char
 * Return: int
*/
int _printf(const char *format, ...)
{
	int count = 0;

	if (format == NULL)
		return (-1);
	count = parse_and_output(format);
	return (count);
}
/**
 * parse_and_output - Entry point
 * @format: const param for char
 * Return: int
*/
int parse_and_output(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += checking(format, args);
			while (*format && (*format == 'c' || *format == 's' || *format == '%'))
			{
				format++;
			}
		} else
		{
			_putchar(*format);
			count++;
			format++;
		}
	}
	va_end(args);
	return (count);
}
