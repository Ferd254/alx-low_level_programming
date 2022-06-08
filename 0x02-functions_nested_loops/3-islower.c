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
 */i

int _islower(int c)
{
	char ch;
	int result = 0;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == c)
			result = 1;
	}
	return (result);
}

