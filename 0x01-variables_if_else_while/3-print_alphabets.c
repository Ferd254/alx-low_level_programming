#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase,uppercase and newline
 *
 * Return: returns 0
 */

int main(void)
{
	char m;
	char M;

	for (m = 'a' ; m <= 'z' ; m++)
	{
		putchar (m);
	}

	for (M = 'A' ; M <= 'Z' ; M++)
	{
		putchar (M);
	}

	putchar ('\n');

	return (0);
}
