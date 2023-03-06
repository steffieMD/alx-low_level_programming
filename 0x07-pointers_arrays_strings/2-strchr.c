#include "main.h"
#include <string.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to be scanned
 * @c: character to be searched in s
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	char *loc;

	loc = strchr(s, c);

	return (loc);
}
