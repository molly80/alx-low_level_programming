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

	printf("The size of int is: %lu byte(s) \n", (unsigned long)sizeof(i));
	printf("The size of long int is: %lu byte(s) \n", (unsigned long)sizeof(lint));
	printf("The size of long long int is: %lu byte(s) \n", (unsigned long)sizeof(llint));
	printf("The size of float is: %lu byte(s) \n", (unsigned long)sizeof(f));
	printf("The size of char is: %lu byte(s) \n", (unsigned long)sizeof(c));
	return (0);
}
