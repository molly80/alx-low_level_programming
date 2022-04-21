#include "main.h"
/**
 * swap_int - swap_int *a, *b
 * @a: pointer 1
 * @b: pointer 2
 * pointer a gets the value of b while pointer b gets the value of a
 * Return void
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
