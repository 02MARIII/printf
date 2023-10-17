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

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			count += checker_formation(*format, args);
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
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
		return (-1);
	count = format_and_count(format, args);
	va_end(args);
	return (count);
}
/**
 * checker_formation - Entry point
 * @check: param for char
 * @args: args from va_list
 * Return: int
*/
int checker_formation(char check, va_list args)
{
	int count = 0;
	unsigned int x;
	int num;

	switch (check)
	{
		case 's':
			count = handle_string(va_arg(args, char *));
			break;
		case 'c':
			count = _putchar(va_arg(args, int));
			break;
		case '%':
			count = _putchar('%');
			break;
		case 'd':
			num = va_arg(args, int);
			count += print_decimal(num);
			break;
		case 'i':
			num = va_arg(args, int);
			count += print_int(num);
			break;
		case 'b':
			x = va_arg(args, unsigned int);
			count += print_to_decimal(x);
			break;
		default:
			write(1, "%", 1);
			_putchar(check);
			count += 2;
			break;
	}

	return (count);
}
