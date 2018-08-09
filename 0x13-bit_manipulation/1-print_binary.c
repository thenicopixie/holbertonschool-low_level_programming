#include "holberton.h"

/**
 * print_binary - print the binary representation of a number
 * @n: number to represent
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = n;
	int power = 0, count;

	if (num == 0)
		_putchar('0');

	while (num > 0)
	{
		num = num >> 1;
		power++;
	}
	for (power--; power >= 0; power--)
	{
		count = n >> power;
		if (count & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
