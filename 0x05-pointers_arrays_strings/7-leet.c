#include "holberton.h"

/**
 * leet - encode string to 1337
 * @point: pointer to string
 * Return: (point)
 */
char *leet(char *point)
{
	int i, j;

	char letter[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	char leetcode[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; point[i] != 0; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (point[i] == letter[j])
			{
				point[i] = leetcode[j];
			}
		}
	}
	return (point);
}
