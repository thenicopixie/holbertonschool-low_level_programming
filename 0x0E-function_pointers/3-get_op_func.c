#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation asked
 * @s: operator passed as argument to the program
 * Return: pointer to correct function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	unsigned int i;

	i = 0;

	while (ops[i].op)
	{
		if (*s == *(ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error/n");
	exit(99);
}
