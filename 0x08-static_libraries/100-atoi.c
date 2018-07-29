#include "holberton.h"
/**
 * _atoi - convert string to integer
 * @s: string to convert
 * Return: (0)
 */
int _atoi(char *s)
{
	int i, sign, k;
	unsigned int result = 0;

	sign = 0;
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
	if (sign % 2 == 0)
	{
		return (result);
	}
	if (k == 0)
	{
		return (0);
	}
	return (result * -1);
}
