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

	printf("Size of a char is: %ld byte(s) \n", sizeof(c));
	printf("Size of an int is: %lu byte(s) \n", (unsigned long) sizeof(i));
        printf("Size of a long int is: %ld byte(s) \n", sizeof(lint));
        printf("Size of a long long int is: %ld byte(s) \n", sizeof(llint));
        printf("Size of a float is: %ld byte(s) \n", sizeof(f));
	return (0);
}
