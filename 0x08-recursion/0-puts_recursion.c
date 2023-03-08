#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: a string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	printf("%c", *s);
	_puts_recursion(s + 1);
}
