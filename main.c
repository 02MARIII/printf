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

	count = printf("%c\n", 'H');
	printf("%d\n", count);
	count2 = _printf("%s", "hello");
	printf("%d\n", count2);
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	return (0);
}
