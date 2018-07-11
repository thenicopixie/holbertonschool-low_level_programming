#include "holberton.h"

int test(int n, int i);

/**
 * _sqrt_recursion - return natural square root of number
 * @n: number to test
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (test(n, 1));
}
/**
 * test - test if numbers are square root of n
 * @n: number
 * @i: number to test
 * Return: -1 if n is negative, i if i * i is n
 */
int test(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (test(n, i + 1));
}
