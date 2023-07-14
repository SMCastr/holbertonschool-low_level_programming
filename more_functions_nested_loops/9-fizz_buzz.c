#include <stdio.h>
#include "main.h"

/**
 * main - 1 to 100 but replacing multiples of 5 and 3
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int printSpace = 0;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%sFizzBuzz", printSpace ? " " : "");
			printSpace = 1;
		}
		else if (i % 3 == 0)
		{
			printf("%sFizz", printSpace ? " " : "");
			printSpace = 1;
		}
		else if (i % 5 == 0)
		{
			printf("%sBuzz", printSpace ? " " : "");
			printSpace = 1;
		}
		else
		{
			printf("%s%d", printSpace ? " " : "", i);
			printSpace = 1;
		}
	}
	printf("\n");
	return (0);
}

