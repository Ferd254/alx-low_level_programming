#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase except q, e
 *
 * Return: returns 0
 */

int main(void)
{
	char m;

	for (m = 'a' ; m <= 'z' ; m++)
	{
		if (m != 'e' && m != 'q')
		{
			putchar (m);
		}

	}
	putchar ('\n');

	return (0);
}
