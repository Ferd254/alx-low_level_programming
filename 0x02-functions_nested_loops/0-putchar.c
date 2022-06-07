#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar
 *
 * Return: 0
 */

int main(void)
{
	char c [8] = "_putchar";
	int i;

	for(i = 0 ; i <= 8; i++)
	{
		putchar(c[i]);
	}
	{
		putchar('\n');
	}
		return(0);
}


