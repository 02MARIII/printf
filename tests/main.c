#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len, len2;
	len = _printf("[%c]\n", 'H');
    len2 = _printf("[%s]\n", "");
	printf("C: %d S: %d\n", len, len2);
    printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
    printf("Percent:[%%]\n");

    return (0);
}