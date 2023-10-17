#include "main.h"
/**
 * print_hexUpper - Entry point
 * @x: param for unsigned int
 * Return: int
*/
int print_hexUpper(unsigned int x)
{
	int count = 0;
	char c;

	if (x >= 16)
	{
		print_hexUpper(x / 16);
		count++;
	}
	if (x % 16 < 10)
		c = '0' + (x % 16);
	else
		c = 'A' + (x % 16) - 10;
	_putchar(c);
	count++;
	return (count);
}
