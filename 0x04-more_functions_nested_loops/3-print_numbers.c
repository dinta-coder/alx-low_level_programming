#include "main.h"
#include <studio.h>

/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: no return.
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch + 'O');
	}
	_putchar('\n');
}
