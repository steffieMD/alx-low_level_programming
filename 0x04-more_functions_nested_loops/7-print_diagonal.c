#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: prints int
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					putchar(92);
				}
				else
				{
					putchar(' ');
				}
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
	return (0);
}
