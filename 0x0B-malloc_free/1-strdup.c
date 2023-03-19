#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: pointer to new str
 *
 * Return: NULL or pointer to array
 */

char *_strdup(char *str)
{
	char *dest_str;

	if (str == NULL)
	{
		return (NULL);
	}

	dest_str = malloc(sizeof(char));

	dest_str = strdup(str);

	free(dest_str);
	return (dest_str);
}
