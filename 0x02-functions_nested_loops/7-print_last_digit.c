#include "holberton.h"
/**
* print_last_digit - prints last digit of number;
* Return: last digit
* @num: integer to get last digit from
*/
int print_last_digit(int num)
{
	int lastDig;

	lastDig = num % 10;

	if (num < 0)
	{
		lastDig *= -1;
		_putchar(lastDig + '0');
		return (lastDig);
	}
	else if (lastDig > 0)
	{
		_putchar(lastDig + '0');
		return (lastDig);
	}
	else
	{
		_putchar(num + '0');
		return (num);
	}
}
