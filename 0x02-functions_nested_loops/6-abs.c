#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * Description: computes the absolute value of an integer
 *
 * @n: parameter of type int, name n
 *
 * Return: value of n
 */

int _abs(int n)
{
	if (n >= 0 )
		return (n);
	return (n * -1);
}
