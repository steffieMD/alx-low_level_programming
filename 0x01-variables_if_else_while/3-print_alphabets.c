#include <stdio.h>

/**
 * main - Entru point
 * Description: This program prints the alphabet in lowercase, and then in uppercase.
 * Return: Always 0 (Success)
 * Author: SteffieMD
 */
int main (void)
{
	char lch = 'a';
	char UCH = 'A';

	while (lch <= 'z')
	{
		putchar(lch);
		lch++;
	}
	while (UCH <= 'Z')
	{
		putchar(UCH);
		UCH++;
	}
	putchar('\n');
	return (0);
}
