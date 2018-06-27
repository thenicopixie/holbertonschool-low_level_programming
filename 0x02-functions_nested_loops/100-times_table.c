#include "holberton.h"
/**
* print_times_table - print n times table
* @n - sets range of times table
*/
void print_times_table(int n)
{
	int row, col, mult_num, ones, tens, hundreds;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');
			for (col = 1; col <= n; col++)
			{
				mult_num = row * col;
				ones = mult_num % 10;
				tens = (mult_num / 10) % 10;
				hundreds = mult_num / 100;
				if (col >= 0 || col < n - 1)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (mult_num <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(ones + '0');
				}
				else if (mult_num > 9 && mult_num < 100)
				{
					_putchar(' ');
					_putchar(tens + '0');
					_putchar(ones + '0');
				}
				else if (mult_num > 99 && mult_num < 999)
				{
					_putchar(hundreds + '0');
					_putchar(tens + '0');
					_putchar(ones + '0');
				}
			}
			_putchar('\n');
		}
	}
}
