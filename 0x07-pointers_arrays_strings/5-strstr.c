#include "main.h"
#include <string.h>

/**
 * *_strstr - locates a substring
 * @haystack: pointer to the string that is searched
 * @needle: pointer to the string that is searched for
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *found;

	found = strstr(haystack, needle);

	return (found);
}
