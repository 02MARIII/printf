#include "main.h"
/**
 * print_oct - Entry point
 * @i: param for unsigned int
 * Return: int
*/
int print_oct(unsigned int i)
{
	int count = 0;
	char c;

	if (i >= 8)
	{
		print_oct(i / 8);
		count++;
	}
	c = '0' + (i % 8);
	_putchar(c);
	count++;
	return (count);
}
