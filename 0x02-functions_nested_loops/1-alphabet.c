#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet >= 'z'; alphabet++)
	{
		_putchar(alphabet);
		_putchar('\n');
	}
	print_alphabet();
	return (0);
}
