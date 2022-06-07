#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * Description - checks for alphabetic character
 *
 * @c: parameter of type int called c
 *
 * Return: returns 0 if lowercase and 1 if uppercase
 */

int _isalpha(int c)
{
	char m;
	char M;
	int result = 0;

	for (m = 'a'; m <= 'z'; m++)
	{
		for (M = 'A'; M <= 'Z' ; M++)
		{
			if (c == M || c == m)
			{
				result = 1;
			}
		}
	}
	return (result);

}
