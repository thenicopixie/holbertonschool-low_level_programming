#include "holberton.h"

/**
 * _strlen - return length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	unsigned int length;

	for (length = 0; s[length] != '\0'; length++)
	;

	return (length);
}
/**
 * _atoi - convert string to integer
 * @s: string to convert
 * Return: (0)
 */
int _atoi(char *s)
{
	int i, k;
	unsigned int result = 0;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
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
	if (k == 0)
	{
		return (0);
	}
	return (result * -1);
}
/**
 * infinite_add - add two numbers
 * @n1: number 1
 * @n2: number 2
 * @r: buffer to store result
 * @size_r: the buffer size
 * Return: pointer to result if result size can be stored in size_r. Else return (0)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, overflow = 0, sum = 0;
	unsigned int len1 = _strlen(n1);
	unsigned int len2 = _strlen(n2);
	unsigned result = 0;
	unsigned conv1 = _atoi(n1);
	unsigned conv2 = _atoi(n2);

	while (len1 >= 0 || len2 >= 0)
	{
		sum = n1[len1] + n2[len2] + overflow;
		if (sum / 10 != 0)
			_putchar(sum + '0');
			overflow = 0;
		else if (sum / 10)
		{
			overflow = 1;
			_putchar(sum / 10 + '0');
		}
		len1--;
		len2--;
	}
}
