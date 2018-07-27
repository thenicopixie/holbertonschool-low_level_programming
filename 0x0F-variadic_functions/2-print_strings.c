#include "variadic_functions.h"

/**
 * print_strings - print strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed in function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *st;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		st = va_arg(args, char *);
		if (!st)
			printf("(nil)");
		else
			printf("%s", st);
		if (separator && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
