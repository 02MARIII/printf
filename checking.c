#include "main.h"

int checking(const char *format, va_list args)
{
	char c;
	char *str;
	int count = 0;
	if (*format == 'c')
	{
		c = va_arg(args, int);
		_putchar(c);
		count++;
	}
	else if (*format == 's')
	{
		str = va_arg(args, char *);
		while (*str)
		{
			_putchar(*str);
			count++;
			str++;
		}
	}
	else if (*format == '%')
	{
		_putchar('%');
		count++;
	}
	return (count);
}