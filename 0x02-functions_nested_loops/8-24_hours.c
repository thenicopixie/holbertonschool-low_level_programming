#include "holberton.h"
/**
* jack_bauer - print every minute of the day
*
* Return: (0)
*/
void jack_bauer(void)
{
	int num1, num2;

	for (num1 = 00; num1 <= 23; num1++)
	{
		for (num2 = 00; num2 <= 59; num2++)
		{
			_putchar(num1 / 10 + '0');
			_putchar(num1 % 10 + '0');
			_putchar(58);
			_putchar(num2 / 10 + '0');
			_putchar(num2 % 10 + '0');
			_putchar('\n');
		}
	}
}
