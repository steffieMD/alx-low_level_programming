#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * is_num - checks if a number or not
 * @a: char to be checked
 * Return: 0 or 1
 */

int is_num(char *a)
{
	int i, num, len;

	i = 0;
	num = 0;
	len = strlen(a);

	while (i < len)
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (-1);
		}
		else
			num = num * 10 + (a[i] - '0');
		i++;
	}
	return (num);
}

/**
 * main - adds positive numbers
 * @argc: no. of arguments
 * @argv: array
 * Return: 0 or 1 or value of add
 */

int main (int argc, char *argv[])
{
	int i;
	int num;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		num = is_num(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
				
