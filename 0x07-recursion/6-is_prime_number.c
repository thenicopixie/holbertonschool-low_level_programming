#include "holberton.h"

int check_if_prime(int n, int i);
/**
 * is_prime_number - test if n is a prime number
 * @n: number to test
 * Return: 1 if n is prime, else 0
 */
int is_prime_number(int n)
{
	return (check_if_prime(n, 2));
}
/**
 * check_if_prime - check if n is num
 * @n: number to check
 * @i: number
 * Return: 1 if prime, else 0
 */
int check_if_prime(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (check_if_prime(n, i + 1));
}
