#include "holberton.h"

/**
 * get_endianness - function to check if big endian or little endian
 * byte ordering
 * Return: 1 or 0
 */
int get_endianness(void)
{
	int i = 1;
	char *ptr = (char *)&i;

	if (*ptr)
		return (1);
	return (0);
}
