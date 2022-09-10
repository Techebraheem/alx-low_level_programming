#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int a;
	long int li;
	long long int lli;
	float f;
	printf("Size of a char: %c byte(s)", (unsigned char)sizeof(c));
	printf("Size of a int: %d byte(s)", (unsigned int)sizeof(a));
	printf("Size of a long int: %lu byte(s)", (unsigned long int)sizeof(li));
	printf("Size of a long long int: %lu byte(s)", (unsigned long long int)sizeof(lli));
	printf("Size of a float: %lu byte(s)", (unsigned float)sizeof(f));
	return (0);
}

