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

	printf("The size of int is: %ld byte(s) \n", sizeof(i));
	printf("The size of long int is: %ld byte(s) \n", sizeof(lint));
	printf("The size of long long int is: %ld byte(s) \n", sizeof(llint));
	printf("The size of float is: %ld byte(s) \n", sizeof(f));
	printf("The size of char is: %ld byte(s) \n", sizeof(c));
	return (0);
}
