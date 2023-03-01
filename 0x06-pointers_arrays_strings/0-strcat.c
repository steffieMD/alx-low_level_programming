#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	char *str = strcat(dest, src);

	return (str);
}
