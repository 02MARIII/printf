#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int count = 0;
	int count2 = 0;
	count = _printf("%c", 'H');
	printf("%d\n", count);
	count2 = _printf("Character:[%c]\n", 'H');
	printf("%d\n", count2);
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	return (0);
}
