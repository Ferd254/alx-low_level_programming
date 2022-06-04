#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the lowercase alphabet in reverse.
 *
 * Return: returns 0
 */

int main(void)
{
	char m;

	for (m = 'z'; m >= 'a' ; m--)
	{
		putchar (m);
	}
	putchar ('\n');

	return (0);
}

