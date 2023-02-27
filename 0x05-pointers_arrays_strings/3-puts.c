#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout
 * @str: char
 *
 * Return: Nothing
 */

void _puts(char *str)
{
       int s = puts(str);

	printf("%d", s);
}
