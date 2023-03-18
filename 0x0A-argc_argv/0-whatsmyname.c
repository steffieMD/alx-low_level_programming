#include <stdio.h>

/**
 * main - prints its name
 * @argc: number of vector
 * @argv: array
 * Return: Always 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	argc = 0;
	printf("%s\n", *argv);
	return (0);
}
