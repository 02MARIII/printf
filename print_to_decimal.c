#include "main.h"
/**
 * print_to_decimal - Entry point
 * @x: param for unsigned int
 * Return: int
*/
int print_to_decimal(unsigned int x)
{
	int count = 0, s;
	int dem[32];
	int i = 0;

	if (x == 0)
	{
		_putchar('0');
		return (1);
	}
	while (x > 0)
	{
		dem[i] = x % 2;
		x = x / 2;
		i++;
	}
	s = i - 1;
	while (s >= 0)
	{
		_putchar(dem[s] + '0');
		count++;
		s++;
	}
	return (count);
}
