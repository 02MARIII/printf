#include "main.h"
/**
 * print_hexLower - Entry point
 * @x: param for unsigned int
 * Return: int
*/
int print_hexLower(unsigned int x)
{
	int count = 0;
    char hexDigits[] = "0123456789abcdef";
    char hex[20];
    int i = 0;

    if (x == 0) {
        _putchar('0');
        return 1;
    }
    while (x > 0)
	{
        hex[i] = hexDigits[x % 16];
        x /= 16;
        i++;
        count++;
    }

    for (i = i - 1; i >= 0; i--) {
        _putchar(hex[i]);
    }

    return count;
}
