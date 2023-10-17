#include "main.h"
/**
 * custom_string - Entry point
 * @s: param for pointer char
 * Return: int
*/
int custom_string(char *s)
{
	char hex[3];
	int count = 0;

	if (!s)
		s = "(null)";
	while (*s)
	{
		if (*s < 32 || *s >= 127)
		{
			write(1, "\\x", 2);
			count += 2;
			hex[0] = 0;
			hex[1] = 0;
			hex[2] = 0;
			sprintf(hex, "%02X", (unsigned char)*s);
			_putchar(*hex);
			count += 2;
		} else
		{
			_putchar(*s);
			count++;
		}
		s++;
	}
	return (count);
}
