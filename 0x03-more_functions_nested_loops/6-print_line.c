#include "holberton.h"
/**
 * print_line - print straight line
 * @n: integer
*/
void print_line(int n)
{
	int num;

	for (num = 0; num <= n; num++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
