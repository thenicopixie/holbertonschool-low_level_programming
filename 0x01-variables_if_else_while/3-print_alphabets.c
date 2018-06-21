#include <stdio.h>

/**
* main - Entry point
* program to print a-z A-Z
* Return: 0
*/
int main(void)
{
	int lowChar;
	int upChar;

	for (lowChar = 97; lowChar <= 122; lowChar++)
	{
		putchar(lowChar);
	}
	for (upChar = 65; upChar <= 90; upChar++)
	{
		putchar(upChar);
	}
	putchar('\n');

	return (0);
}
