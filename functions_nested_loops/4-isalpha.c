#include "main.h"
/**
 * _isalpha - If is lowercase or uppercaes check in return.
 * @c: variable
 * Return:0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

