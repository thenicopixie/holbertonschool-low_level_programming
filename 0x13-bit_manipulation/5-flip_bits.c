#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip * to get from one number to another.
 * @n: number
 * @m: flipped number
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = n ^ m;
	int count = 0;

	while (bits)
	{
		bits  = bits & (bits - 1);
		count++;
	}

	return (count);
}
