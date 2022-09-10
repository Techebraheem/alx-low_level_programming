#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 1;
	int a = 4;
	long int li = 4;
	long long int lli = 8;
	float f = 4;
	printf("Size of a char: %c byte(s)", c);
	printf("Size of a int: %d byte(s)", a);
	printf("Size of a long int: %lu byte(s)", li);
	printf("Size of a long long int: %lu byte(s)", lli);
	printf("Size of a float: %lu byte(s)", f);
	return (0);
}

