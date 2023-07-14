#include "main.h"

/**
 * _pow_recursion - calculates the x to the power of y
 * @x: the integer
 * @y: the power
 *
 * Return: the value or -1 if negative.
 */
int _pow_recursion(int x, int y)
{
	if (y >= 1)
	{
		return (x * (_pow_recursion(x, y - 1)));
	}
	else if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (0);
}
