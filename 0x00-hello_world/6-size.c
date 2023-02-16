#include<stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char char_var;
	int int_var;
	long int longint_var;
	long long int longlongint_var;
	float float_var;

	/* size of various types on the computer */
	printf("Size of a char: %ld byte(s)\n", sizeof(char_var));
	printf("Size of an int: %ld byte(s)\n", sizeof(int_var));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longint_var));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongint_var));
	printf("Size of a float: %ld byte(s)\n", sizeof(float_var));

	return (0);
}

