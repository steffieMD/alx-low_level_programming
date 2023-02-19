#include <stdio.h>

/**
 * main - Entru point
 * Description: This program prints the alphabet in lowercase, and then in uppercase.
 * Return: Always 0 (Success)
 * Author: SteffieMD
 */
int main (void)
{
	int lch, UCH;

	for (lch = 'a'; lch <= 'z'; lch++)
	{
		for (UCH = 'A'; UCH <= 'Z'; UCH++)
		{
			putchar(lch);
			putchar(UCH);
		}
	}
	putchar('\n');
	return (0);
}
