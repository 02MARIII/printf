
#include "main.h"
/**
 * handle_string - print a string
 * @str: string to be printer
 * Return: lenght of the string
*/
int handle_string(char *str)
{
	char *null;
	int count;
	int i;

	if (str == NULL || str)
	{
		null = "(null)";

		for (i = 0; i < 6; i++)
		{
			_putchar(*null);
			null++;
		}
		return (6);
	}
	while (*str)
	{
		_putchar(*str);
		count++;
		str++;
	}
	return (count);
}
