#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: the board to print
*/

void print_chessboard(char (*a)[8])
{
	int count, index;

	for (count = 0; count < 8; count++)
	{
		for (index = 0; index < 8; index++)
		{
			printf("%c", a[count][index]);
		}
		printf("\n");
	}
}
