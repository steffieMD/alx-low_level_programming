#include <stdio.h>

/**
 * main- Entry point
 * Description: this program prints all single digit numbers of base 10
 * starting from 0
 * Return: Always 0 (Success)
 * Author: SteffieMD
 */

int main(void)
{
	int base10;

	for (base10 = 0; base10 < 10; base10++)
	{
		putchar(base10);
	}
	putchar('\n');
	return (0);
}
