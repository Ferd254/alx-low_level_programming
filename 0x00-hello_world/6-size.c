#include <stdio.h>

int main(void)
{
	char a;
	int b;
	float c;
	long d;
	long long e;

	printf("Size of a char: %lu byte(s)\n", (unsigned int)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned int)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned int)sizeof(c));

	return (0);
}
