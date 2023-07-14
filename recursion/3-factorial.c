#include "main.h"

/**
 * factorial - finds the _factorial of n
 * @n: the integer
 * Return: the factorial of n.
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (-1);
}
