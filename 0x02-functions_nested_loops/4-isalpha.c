#include "main.h"

/**
 * _isalpha - ENtry point
 * @c: Contains value to be compared
 * Return - ALways 0
 * Author: STeffieMD
 */

int _isalpha(int c)
{
	if (c >= 65 && <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
