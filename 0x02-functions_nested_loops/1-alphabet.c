#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * 
 * print_alphabet - print alphabets in lower case
 *
 * Description: prints the alphabets in lowercase
 *
 * Return: returns void
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
