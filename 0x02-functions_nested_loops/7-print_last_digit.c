#include "main.h"

/**
 * print_last_digit - prints the last digit of a numbe
 *
 * Description: prints the last digit of a numbe
 *
 * @n: parameter of type int
 *
 * Return:Returns the value of the last digit
 */

int print_last_digit(int n)
{
	int l;

	if (n < 0)
		l = -1 * (n % 10);
	else
		l = n % 10;

	_putchar((l % 10) + '0');
	return (l % 10);
}

