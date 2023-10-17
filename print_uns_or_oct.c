#include "main.h"
/**
 * print_uns_or_oct - Entry point
 * @i: param for unsigned int
 * @num: number of param for int
 * Return: int
*/
int print_uns_or_oct(unsigned int i, int num)
{
	int count = 0;
	char dep[20];
	int x = 0;

	if (i == 0)
	{
		_putchar('0');
		return (1);
	}
	while (i > 0)
	{
		dep[x] = '0' + (i % num);
		i /= num;
		x++;
		count++;
	}
	for (x = x - 1; x >= 0; x--)
	{
		_putchar(dep[x]);
	}
	return (count);
}
