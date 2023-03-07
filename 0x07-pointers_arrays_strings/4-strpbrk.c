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
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
