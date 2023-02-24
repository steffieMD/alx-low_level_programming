#include "main.h"
/**
 * _isdigit - checks if is a digit
 * @c: prints int
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
