#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: the number of arguments passed
 * @argv: pointer to each program passed
 * Return: (0)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
