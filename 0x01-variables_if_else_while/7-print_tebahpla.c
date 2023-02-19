#include <stdio.h>

/**
 * main- Entry point
 * Description: This program prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 * Author: SteffieMD
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
