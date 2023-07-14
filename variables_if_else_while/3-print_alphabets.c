#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - This prints tha alphabet in lowercase and then in uppercase.
*
* Return: Always (sucess)
*/

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{ putchar(alphabet);
	alphabet++;
	}
	alphabet = 'A';

	while (alphabet <= 'Z')
	{ putchar(alphabet);
	alphabet++;
	}

	putchar('\n');
	return (0);
}
