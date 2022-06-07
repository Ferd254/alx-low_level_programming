#include <stdio.h>
#include "main.h"

/**
 *  _islower - checks for lowercase character
 *
 * Description: checks for lowercase character
 *
 * @c: parameter of type int called c
 *
 * Return: returns 1 if lowercase and 0 if uppercase
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

