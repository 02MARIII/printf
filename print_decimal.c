#include "main.h"
/**
 * print_decimal - Entry point
 * @n: param for int
 * Return: int
 */
int print_decimal(int n)
{
	int num, l = n % 10, d;
	int  count = 1;
	int bepo = 1;

	n = n / 10;
	num = n;
	if (l < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		l = -l;
		count++;
	}
	if (num > 0)
	{
	while (num / 10 != 0)
	{
		bepo = bepo * 10;
		num = num / 10;
	}
	num = n;
	while (bepo > 0)
	{
		d = num / bepo;
		_putchar(d + '0');
		num = num - (d * bepo);
		bepo = bepo / 10;
		count++;
	}
	}
	_putchar(l + '0');
	return (count);
}