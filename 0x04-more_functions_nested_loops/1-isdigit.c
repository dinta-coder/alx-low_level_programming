#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks is parameter c is a digit
 * @c: a int parameter for checking
 * Return: returns either 0 or 1
 */

int _isdigit(int c)
{
	c = 0;

	while (c <= 9; c++)
	{
		if (c >= 48 && c <= 57)
		{
			return (1);
		}
		else
		{
			return (0);
        }
}

