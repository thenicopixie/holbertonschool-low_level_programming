#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - Returns sum of arguments
 * @n: number of arguments
 * Return: sum of arguments, or 0 if n is zero
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}
	va_end(args);

	return (sum);
}
