#include "main.h"


/**
 * print_alphabet - Entry point
 * Description: This program prints the alphabet, in lowercase
 * Return: Always 0 (Success)
 * Author: SteffieMD
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}

