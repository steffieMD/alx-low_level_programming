#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string to be scanned
 * @accept: pointer to string with characters to match
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	size_t *len;

	len = strspn(s, accept);

	return (len);
}

