#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - return the sum of a and b
 * @a: number
 * @b: number
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference of a and b
 * @a: number
 * @b: number
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of a and b
 * @a: number
 * @b: number
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the result of a divided by b
 * @a: number
 * @b: number
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - return the remained of the division of a by b
 * @a: number
 * @b: number
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
