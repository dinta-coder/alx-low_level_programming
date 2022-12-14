#include "main.h"
/**
 * main - prints all the possible different combinations of two digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 56; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (b > a)
			{
				_putchar(a);
				_putchar(b);
				if (a != 56 || b != 57)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
	_putchar('\n');
	return (0);
}
