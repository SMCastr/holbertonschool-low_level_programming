#include "variadic_functions.h"

/**
 * print_strings - A function to print strings.
 * @separator: String to be printed.
 * @n: number of strings passed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *ar;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		ar = va_arg(args, char*);
		if (ar == NULL)
			ar = "(nil)";
		printf("%s", ar);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
