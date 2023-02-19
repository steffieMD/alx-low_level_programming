#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints the alphabet in lowercase.
 * Return: Always 0 (Success)
 * Author: SteffieMD
 */
int main(void)
{
	char lowercase_alpha;

	for(lowercase_alpha = 'a'; lowercase_alpha <= 'z'; lowercase_alpha++)
	{
		putchar(lowercase_alpha);
	}
	return(0);
}
