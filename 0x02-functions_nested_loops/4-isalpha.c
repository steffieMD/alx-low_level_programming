#include "main.h"

/**
 * _isalpha - Return 1 if @c is a letter, lowercase or uppercase
 * @c: Contains value to be compared
 * Return - ALways 0
 * Author: STeffieMD
 */

int _isalpha(int c)
{
	/* ASCII value of upper case letters is between 65 && 90 */
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else
	{
		/* ASCII value of lower case letters is between 97 && 122 */
		if (c >= 97 && c <= 122)
		{
			return (1);
		}

		else
		{
			return (0);
		}
	}
}

