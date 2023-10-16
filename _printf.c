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
	char *str;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			switch (*format)
			{
				case '%':
					write(1, "%", 1);
					count++;
					format++;
					break;
				case 's':
					str = va_arg(args, char *);
					count += handle_string(str);
					format++;
					break;
				case 'c':
					c = (va_arg(args, int));
					write(1, &c, 1);
					count++;
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

	if (!format || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	count = format_and_count(format, args);
	va_end(args);
	return (count);
}
