#include <stdio.h>
#include "main.h"

/**
 *  _islower - checks for lowercase character
 *
 * Description: checks for lowercase character
 *
 * Returns 1
 */

int _islower(int c)
{
	char m;
	int result = 0;

	for (m = 'a' ; m <= 'z'; c++)
	{
		if (m == c)
			result = 1;
	}
	return (result);
}

