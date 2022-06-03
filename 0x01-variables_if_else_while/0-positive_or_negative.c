#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 * Description - Identifying positive or negative numbers using if, if else and else statements
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n==0)
		printf("%d is zero\n", n);
	else if (n>1)
		printf("%d is positive\n", n);
	else
		printf("%d id negative\n", n);
	return (0);
}
