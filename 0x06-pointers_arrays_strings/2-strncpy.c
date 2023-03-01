#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: integer
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *str = strncpy(dest, src, n);

	return (str);
}
