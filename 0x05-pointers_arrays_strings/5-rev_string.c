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

	for (i = 0; i < len; i++)
	{
		revString[i] = s[len - 1];
	}
	return (revString);
}


