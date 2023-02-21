#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: THis function prints 10 times the alphabet
 * Return: Void
 * Author: SteffieMD
 */

void print_alphabet_x10(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet ++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
