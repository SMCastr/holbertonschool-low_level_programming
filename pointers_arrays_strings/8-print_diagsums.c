#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_diagsums - print the sum of the two diagnoals in matrix
 * @a: matrix interger
 * @size: size of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[(i + 1) * size - (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}

