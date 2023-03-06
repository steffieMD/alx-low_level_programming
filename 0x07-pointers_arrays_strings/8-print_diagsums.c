#include "main.h"
#include <stdio.h>

/**
 * void print_diagsums - prints sum of the two diagonals
 * of a square matrix of intergers.
 * @a: pointer to the array
 * @size: size of column
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int pry = 0;
	int sec = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		pry = pry + a[i];
	}
	for (i = size - 1; i < s - 1; i += size - 1)
	{
		sec = sec + a[i];
	}
	printf("%d, %d\n", pry, sec);
}
