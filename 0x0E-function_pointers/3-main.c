#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguements passed
 * Return: pointer to function, or exit
 */
int main(int argc, char **argv)
{
	/* if there is more than one character in the operator argument */
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	/* check is there are more than 4 arguments passed */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* pass arguements into function to check operator */
	/* print result */
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
