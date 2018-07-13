#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: (0)
 */
int main(int __attribute__((unused)) argc, char **argv)
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
