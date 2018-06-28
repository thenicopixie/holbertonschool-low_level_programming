#include "holberton.h"
/**
* print_triangle - print triangle with #s
* @size: size of triangle
*/
void print_triangle(int size)
{
	int row, col;

	for (row = size; row > 0; row--)
	{
		for (col = size; col > 0; col--)
		{
			if (row > size - col + 1)
			{
				_putchar(' ');
			}
			else
			{
			_putchar(35);
			}
		}
		_putchar('\n');
	}
	if (size == 0)
	{
		_putchar('\n');
	}
}
