#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints the alphabet in lowercase,
 * It also excludes q and e.
 * Return: Always 0 (Success)
 * Author: SteffieMD
 */
int main(void)
{
	char lc;
	
	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
		{
			putchar(lc);
		}
	}
	putchar('\n');
	return (0);
}
