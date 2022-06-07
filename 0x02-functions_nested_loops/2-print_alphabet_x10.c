#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10(void) - Prints 10 times the alphabet, in lowercase
 *
 * Description: Prints 10 times the alphabet in lower case
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char m;
	int i = 0;

	while (i < 10)
	{
		for (m = 'a'; m = 'z'; m++)
		{
			putchar(m);
		}
		{
			putchar('\n');
			i++
		}

}
