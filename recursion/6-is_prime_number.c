#include "main.h"

/**
 * is_prime_number - tests an integer
 * @n: the integer
 *
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	int x = n / 2;

	if (n <= 1)
		return (0);

	return (findprime(n, x));
}

/**
 * findprime - tests if n is prime
 * @n: the integer
 * @x: a counter starting at half of n.
 *
 * Return: 1 if prime 0 if not
 */

int findprime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0)
		return (0);
	x--;
	return (findprime(n, x));
}
