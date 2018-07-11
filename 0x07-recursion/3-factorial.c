#include "holberton.h"

/**
 * factorial - return factorial for given number
 * @n: number to find factorial
 * Return: factorial
 */
int factorial(int n)
{
	int answer;

	if (n < 0)
	{
		answer = -1;
	}
	else if (n == 0)
	{
		answer = 1;
	}
	else
	{
		answer = n * factorial(n - 1);
	}
	return (answer);
}
