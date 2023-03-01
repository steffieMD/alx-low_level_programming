#include <stdio.h>
#include <string.h>
char *_strncat(char *dest, char *src, int n);

/**
 * _strncat - concatenates two strings
 * @dest: a string
 * @src: a string
 * @n: an integer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *str = strncat(dest, src, n);

	return(str);
}
