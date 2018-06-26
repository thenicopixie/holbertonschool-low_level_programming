#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - print from n-98
* @n: starting number
* Return: (0)
*/
void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}

