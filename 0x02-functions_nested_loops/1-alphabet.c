#include "main.h"

/**
 * main -  Entry point.
 * prints the alphabet, in lowercase, followed by a new line.
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
