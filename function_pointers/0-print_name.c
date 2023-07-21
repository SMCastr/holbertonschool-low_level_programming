#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Write a function that prints a name
 * @name: char1
 * @f: char2
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
}
