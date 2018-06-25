#include "holberton.h"
/**
* main - print a-z 10x
*/
void print_alphabet_x10(void)
{
	int letter;
	int row;

	row = 0;

	while (row < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		row++;
	}
}
