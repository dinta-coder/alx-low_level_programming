#include "main.h"
#include <string.h>

/**
 * rev_string - function to reverse string.
 * @s: parameter to be worked on.
 * Returns: Always 0.
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int i;
	char revString;

	for (i = len - 1; i >= 0; i--)
	{
		revString = s[i];
	}
	return revString;
}


