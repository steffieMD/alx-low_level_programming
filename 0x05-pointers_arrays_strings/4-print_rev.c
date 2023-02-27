#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints string in reverse
 * @s: string
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
int length = strlen(s);
	char *end = s + length - 1;

	while (end >= s)
	{
		printf("%c", *end);
		end--;
	}
	printf("\n");
}
