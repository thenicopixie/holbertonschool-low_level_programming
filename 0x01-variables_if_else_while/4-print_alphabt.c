#include <stdio.h>

/**
* main - Entry point
* program to print incomplete alphabet
* Return: 0
*/
int main(void)
{
	int letter;

	for (letter = 97; letter <= 122; letter++)
	{
		if (letter == 101 || letter == 113)
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
