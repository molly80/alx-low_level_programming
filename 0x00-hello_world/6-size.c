#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int lint;
	long long int llint;
	float f;
	char c;

	printf("Size of int is: %lu byte(s) \n", (unsigned long) sizeof(i));
	printf("Size of long int is: %ld byte(s) \n", sizeof(lint));
	printf("Size of long long int is: %ld byte(s) \n", sizeof(llint));
	printf("Size of float is: %ld byte(s) \n", sizeof(f));
	printf("Size of char is: %ld byte(s) \n", sizeof(c));
	return (0);
}
