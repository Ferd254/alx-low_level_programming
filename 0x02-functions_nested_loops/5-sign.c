#include "main.h"

/**
 *  print_sign  - prints the sign of a number
 *
 *  Description: prints the sign of a number
 *
 *  @n: parameter of of int called n
 *
 *  Return: returns 0 if n is zero,
 *  1 if n is greater than zero,
 *  -1 if n is less than zero
 *
 */
int print_sign(int n)
{
	char result = 0;

		if (n > 0)
		{
			result = 1;
			putchar('+');
		} else if (n < 0)
		{
			result = -1;
			putchar('-');
		}

		else
		{
			result = 0;
			putchar('0');
		}

		return (result);
}

