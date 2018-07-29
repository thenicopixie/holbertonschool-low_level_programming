#include "holberton.h"
/**
* main - entry point
* Return: (0)
*/
int main(void)
{
	int letter, row;

	for (row = 0; row < 10; row++)
	{
		for (letter = 97; letter <= 122; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
	return (0);
}
