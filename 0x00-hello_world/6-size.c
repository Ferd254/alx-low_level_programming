#include <stdio.h>

int main(void)
{
	char a;
	int b;
	float c;
	long d;
	long long e;

	printf("Size of a char: %zu byte(s)\n", sizeof(a));
	printf("Size of an int: %zu byte(s)\n", sizeof(b));
	printf("Size of float: %zu byte(s)\n", sizeof(c));
	printf("Size of a long int: %zu byte(s)\n", sizeof(d));
	printf("Size of a long long int %zu byte(s)\n", sizeof(e));

	return (0);
}
