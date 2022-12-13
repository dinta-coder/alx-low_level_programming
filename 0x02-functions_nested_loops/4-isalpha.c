#include "main.h"

/**
 * _isalpha - retunrns 1 if upper or lower
 * @c: The character in ASCII code
 * main - comfirms the function
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}

	else
	
	{
		return (0);
	}
	_putchar('\n');
}

