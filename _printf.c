#include "main.h"

int _printf(const char *format, ...)
{
	int count;

	char c;
	char *str;
	va_list args;

	if (!format)
	{
		return (-1);
	}

	count = 0;

	va_start(args, format);

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
			else if(*format == '%')
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
	va_end(args);
	return (count);
	
	
}