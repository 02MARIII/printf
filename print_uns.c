#include "main.h"
/**
 * print_uns - Entry point
 * @i: param for unsigned int
 * Return: int
*/
int print_uns(unsigned int i)
{
	int count = 0;
	char c;

	if (i >= 10)
	{
		print_uns(i / 10);
		count++;
	}
	c = '0' + (i % 10);
	_putchar(c);
	count++;
	return (count);
}
