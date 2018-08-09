#include "holberton.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int place = 1, num = 0;

	if (!b)
		return (0);

	while (*(b + i))
		i++;
	i -= 1;
	while (i != -1)
	{
		if ((*(b + i) == '1') || (*(b + i) == '0'))
		{
			num += ((*(b + i) - '0') * place);
			place *= 2;
			i--;
		}
		else
			return (0);
	}
	return (num);
}
