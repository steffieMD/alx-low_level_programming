#include "main.h"

/**
 * print_line - prints line.
 * @n: prints int
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			putchar(95);
		}
		putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}
