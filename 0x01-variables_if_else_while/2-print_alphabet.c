#include <stdio>
/**
 * main - prints lowercase alphabet
 * Return: Always 0
 */
int main(void)
{
	alphabet[26]="abcdefghijklmnopqrstuvwxyz";
	int i;
	
	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar("\n");
	return (0);
}

