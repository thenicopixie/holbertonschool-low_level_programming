#include "holberton.h"
/**
 * get_bit - function that returns value of a bit at a given index
 * @n: number
 * @index: index of bit to return
 * Return: return value at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num = n;
	unsigned int count = 0;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if (!num)
		return (-1);
	while (num > 0)
	{
		num = num >> 1;
		count++;
	}
	if (index > count - 1)
		return (0);
	n = n >> index;
	if (n & 1)
		return (1);
	else
		return (0);
}
