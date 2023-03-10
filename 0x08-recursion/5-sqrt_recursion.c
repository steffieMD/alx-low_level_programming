#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 * Return: ALways 0
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 * @n: an int
 * @i: iterator
 * Return: Always 0.
 */

int _sqrt(int n, int i)
{
	int square;

	square = i * i;

	if (square > n)
	{
		return (-1);
	}
	if (square == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
