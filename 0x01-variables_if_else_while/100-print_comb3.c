#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints all the numbers of base 16 in lowercase
 * Return: Always 0 (SUccess)
 * Author: SteffieMD
 */

int main(void)
{
	int x,y;

	for (x = 0; x < 9; x++)
	{
		for (y = 0; y < 10; y++)
		{
			putchar('0' + x);
			putchar('0' + y);

			if (x == 8 && y == 9)
			continue
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
