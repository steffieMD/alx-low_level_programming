#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints all the numbers of base 16 in lowercase
 * Return: Always 0 (SUccess)
 * Author: SteffieMD
 */

int main(void)
{
	int hex;

	for (hex = 0; hex <= 9; hex++)
	{
		putchar(hex);
		putchar(',');
	}
	putchar('\n');
	return (0);
}
