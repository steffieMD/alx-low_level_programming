#include <stdio.h>
/**
 * more_numbers - prints more numbers
 * Retuen: Always 0
 */

void more_numbers(void)
{
	int i, j;
	int first_number, second_number;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			first_number = j / 10;
			second_number = j % 10;
			if (j < 10)
			{
				second_number = j
			}
			else
			{
				putchar(first_number + '0');
			}
		putchar(second_number + '0');
		}
	putchar('\n');
	}
}
