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
	int i;
	int len;
	int temp;
	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
