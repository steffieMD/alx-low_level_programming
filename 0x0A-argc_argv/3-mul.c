#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: no. of arguments
 * @argv: array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int result;
	int num1, num2;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
