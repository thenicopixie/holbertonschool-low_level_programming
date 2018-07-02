#include "holberton.h"
/**
* swap_int - swap integers
* @a: first integer
* @b: second integer
*/
void swap_int(int *a, int *b)
{
	int holder = *a;
	*a = *b;
	*b = holder;
}
