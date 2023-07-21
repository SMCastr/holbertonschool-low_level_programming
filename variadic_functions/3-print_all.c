#include "variadic_functions.h"
/**
 * prchr - prints chars
 * @args: pointer to args
 */
void prchr(va_list *args)
{
	printf("%c", va_arg(*args, int));
}
/**
 * print - prints ints
 * @args: pointer to args
 */
void print(va_list *args)
{
	printf("%d", va_arg(*args, int));
}
/**
 * prflt - prints floats
 * @args: pointer to args
 */
void prflt(va_list *args)
{
	printf("%f", va_arg(*args, double));
}
/**
 * prstr - prints strings
 * @args: pointer to args
 */
void prstr(va_list *args)
{
	char *ar;

	ar = va_arg(*args, char *);
	if (ar == NULL)
		ar = "(nil)";
	printf("%s", ar);
}
/**
 * print_all - prints everything
 * @format: const format string
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *sep = "";
	va_list args;
	typ types[] = {
		{"c", prchr},
		{"i", print},
		{"f", prflt},
		{"s", prstr},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (types[j].type != NULL && *(types[j].ltr) != format[i])
		{
			j++;
		}
		if (types[j].type != NULL)
		{
			printf("%s", sep);
			types[j].type(&args);
			sep = ", ";
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
