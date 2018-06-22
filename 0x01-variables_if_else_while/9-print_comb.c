#include <stdio.h>
/**
* main - Entry point
* program to print all combinations of single digit numbers
* Return: 0
*/

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
		if (num <= 56)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
