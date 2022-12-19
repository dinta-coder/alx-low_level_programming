#include "main.h"

/*
 * swap_int - A function that swaps to integers.
 * @a: First parameter to be swapped.
 * @b: Second parametet to be swapped.
 */

void swap_int(int *a, int *b)
{
	int dinta = *a;
	*a = *b;
	*b = dinta;
}

