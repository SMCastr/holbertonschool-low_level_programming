#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  Print all single digit numbers of base 10.
 *
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}
	x = 'a';
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
		putchar('\n');
	return (0);
}
