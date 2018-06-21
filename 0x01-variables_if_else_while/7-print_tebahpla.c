#include <stdio.h>
/**
* main - Entry point
* print 0-9
* Return: Always 0 (Success)
*/

int main(void)
{
	int letters = 122;

	while (letters >= 97)
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');

	return (0);
}
