#include "main.h"
/**
 * more_numbers - prints more numbers
 * Return: Always 0
 */

void more_numbers(void)
{
	int i;
	int j;
	int first_number;
	int second_number;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
			{
				second_number = j;

			}
			else
			{
				first_number = j / 10;
				second_number = j % 10;
				_putchar(first_number + '0');
			}
		_putchar(second_number + '0');
		}
	_putchar('\n');
	}
}