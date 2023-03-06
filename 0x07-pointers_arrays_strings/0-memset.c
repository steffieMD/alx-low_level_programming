#include "main.h"
#include <string.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: a pointer
 * @b: a char
 * @n: an unsigned int
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *result;

	result = memset(s, b, n);

	return (result);
}
