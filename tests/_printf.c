#include "main.h"

/**
 * format_and_count - Entry point
 * @format: const pointer param for char
 * @args: for args list
 * Return: int
*/
int format_and_count(const char *format, va_list args)
{
	int count = 0;
	int c;
	char *str;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(args, int);
				_putchar(c);
				format++;
				count++;
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				count += handle_string(str);
				format++;
			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
				format++;
			}
		}
		else
		{
			_putchar(*format);
			count++;
			format++;
		}
	}
	return (count);
}
/**
 * _printf - Entry point
 * @format: const pointer param for char
 * Return: int
*/
int _printf(const char *format, ...)
{
	int count;
	va_list args;

	va_start(args, format);

	if (!format)
	{
		return (-1);
	}

	count = format_and_count(format, args);
	va_end(args);
	return (count);
}


