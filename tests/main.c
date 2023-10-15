#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    len = _printf("%s", "hello");

    printf("\nfirst count: %d\n", len);
    return (0);
}