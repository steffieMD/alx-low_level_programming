#include "main.h"
/**
 * print_numbers - prints numbers
 * Return: void
 */

void print_numbers(void);
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
}
