#include "main.h"

/*
 * swap_int - swaps the value of two integers.
 *
 * @a: First parameter to be swapped.
 * @b: Second parametet to be swapped.
 * swap_int:  function that swaps two integers
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

