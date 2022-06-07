#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - print alphabets in lowercase
 *
 * Description - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	{
		putchar('\n');
	}


}
