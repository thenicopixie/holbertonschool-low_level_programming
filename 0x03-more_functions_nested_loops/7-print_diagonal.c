#include "holberton.h"
/**
* print_diagonal - print diagonal lines
* @n: integer
*/
void print_diagonal(int n)
{
	int row, col;

	for (row = 0; row < n; row++)
	{
		for (col = 0; col < n; col++)
		{
			if (col <= row)
			{
				_putchar(' ');
			}
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
