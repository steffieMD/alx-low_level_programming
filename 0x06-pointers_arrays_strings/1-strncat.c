#include "main.h"
#include <stdio.h>
#include <string.h>
char *_strncat(char *dest, char *src, int n);

/**
 * _strncat - concatenates two strings
 * @dest: a string
 * @src: a string
 * @n: an integer
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
