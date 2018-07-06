#include "holberton.h"
/**
 * _atoi - convert string to integer 
 * @s: string to convert
 * Return: (0)
 */
int _atoi(char *s)
{
	int i, sign, result, k;

	sign = 0;
	result = 0;
	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign++;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			k++;
			result = result * 10 + (s[i] - '0');
		}
		if (k > 0 && (s[i] < '0' || s[i] > '9'))
		{
			break;
		}

		
	}
	if (sign % 2 != 0)
	{
		sign = -1;
	}
	else
	{
		sign = 1;
	}
	return (result*sign);
	_putchar('\n');
}
