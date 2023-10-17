#include "main.h"
/**
 * print_hexLower - Entry point
 * @x: param for unsigned int
 * Return: int
*/
int print_hexLower(unsigned int x)
{
	int count = 0;
	char c;

	if (x >= 16)
	{
		print_hexLower(x / 16);
		count++;
	}
	if (x % 16 < 10)
		c = '0' + (x % 16);
	else
		c = 'a' + (x % 16) - 10;
	_putchar(c);
	count++;
	return (count);
}
