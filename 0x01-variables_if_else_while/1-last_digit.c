#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - shows if n is greater-than,equall-to and lesser-than
 * Return : Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
