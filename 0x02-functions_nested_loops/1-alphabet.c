#include "main.h"

/**
 *prints the alphabet, in lowercase, followed by a new line.
 * Return: alphabets in lowercase.
 *
 */
void print_alphabet(void)
{
	char c = 'a';

	while ( c >= 'z' )
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
