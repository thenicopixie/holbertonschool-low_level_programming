#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - function that prints name
 * @name: name of person
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
