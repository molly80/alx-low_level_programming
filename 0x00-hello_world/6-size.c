#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	double d;
	float f;
	char c;
	
	printf("The size of int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of double is: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of float is: %lu.\n", (unsigned long)sizeof(f));
	printf("The size of char is: %lu.\n", (unsigned long)sizeof(c));		

	return (0);
}
