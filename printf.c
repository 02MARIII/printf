#include "main.h"

/**
 * _lent - Entry point
 * @s: pointer param for char
 * Return: int
 */
int _lent(char *s)
{
	int count = 0;

	while (*s)
	{
		_putchar(*s);
		s++;
		count++;
	}
	return (count);
}
/**
 * _printf - Entry point
 * @format: const pointer for char
 * Return: int
 */
int _printf(const char *format, ...)
{
	int c, count = 0;
	va_list args;
	char *s;

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
			_putchar(*format), count++;
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				_putchar(*format);
				count++;
			} else if (*format == 'c')
			{
				c = va_arg(args, int);
				_putchar(c);
				count++;
			} else if (*format == 's')
			{
				s = va_arg(args, char *);
				count = _lent(s);
			} else
			{
				_putchar(*format - 1);
				count += 2;
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
