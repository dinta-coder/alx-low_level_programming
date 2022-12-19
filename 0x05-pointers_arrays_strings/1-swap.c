#include "main.h"

/*
 * swap_int - swaps the value of two integers.
 * @a: First parameter to be swapped.
 * @b: Second parametet to be swapped.
 */

void swap_int(int *a, int *b)
{
	int dinta = *a;
	*a = *b;
	*b = dinta;
}

