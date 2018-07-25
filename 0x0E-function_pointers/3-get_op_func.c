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
	/* pointer to array of structures */
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
	/* check if pointer matches an operator in the structure */
	/* while current index exists, check if values match */
	while (ops[i].op)
	{
	/* if match found, pass into matching operations function */
		if (*s == *(ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}
	/* if no match found, print Error */
	printf("Error\n");
	exit(99);
}
