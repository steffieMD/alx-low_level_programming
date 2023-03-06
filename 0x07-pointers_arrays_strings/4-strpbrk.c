#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any set of bytes
 * @s: pointer to string to be scanned
 * @accept: pointer to string with characters to match
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	char *ser;

	ser = strpbrk(s, accept);

	if (ser)
	{
		return (ser);
	}
	else
	{
		printf("NULL");
	}
}


