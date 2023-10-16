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
	char c;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case '%':
					write(1,"%",1);
					count++;
					format++;
					break;
				case 's':
					count += handle_string(args);
					format++;
					break;
				case 'c':
					c = (va_arg(args, int));
					_putchar(c);
					format++;
					break;
				default:
					write(1, "%", 1);
					write(1, format, 1);
					count += 2;
					break;
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