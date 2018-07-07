#include "holberton.h"

/**
 * print_number - print integer of unknown size
 * @n: integer to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		if (n / 10)
		{
			print_number(n / 10);
			_putchar((n % 10) * -1 + '0');
		}
		else
		{
			_putchar(45);
			_putchar((n % 10) * -1 + '0');
		}
	}
	else if (n >= 0)
	{
		if (n / 10)
		{
			print_number(n / 10);
			_putchar(n % 10 + '0');
		}
		else
		{
			_putchar(n % 10 + '0');
		}
	}
}
