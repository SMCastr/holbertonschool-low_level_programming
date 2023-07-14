#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print lowercase in revers.
 *
 *
 * Return: 0
 */

int main(void)

{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
