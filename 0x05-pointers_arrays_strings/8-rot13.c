#include "holberton.h"

/**
 * rot13 - encode srting into rot13
 * @point: string to encode
 * Return: (point)
 */
char *rot13(char *point)
{
	int i, j;

	char lett[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G',
'H', 'I', 'J', 'K', 'L', 'M', 'N',
'O', 'P', 'Q', 'R', 'S', 'T', 'U',
'V', 'W', 'X', 'Y', 'Z', 'a', 'b',
'c', 'd', 'e', 'f', 'g', 'h', 'i',
'j', 'k', 'l', 'm', 'n', 'o', 'p',
'q', 'r', 's', 't', 'u', 'v', 'w',
'x', 'y', 'z'};
	char rotlett[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T',
'U', 'V', 'W', 'X', 'Y', 'Z', 'A',
'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
'J', 'K', 'L', 'M', 'n', 'o', 'p',
'q', 'r', 's', 't', 'u', 'v', 'w',
'x', 'y', 'z', 'a', 'b', 'c', 'd',
'e', 'f', 'g', 'h', 'i', 'j', 'k',
'l', 'm'};

	for (i = 0; point[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (point[i] == lett[j])
			{
				point[i] = rotlett[j];
				break;
			}
		}
	}
	return (point);
}
