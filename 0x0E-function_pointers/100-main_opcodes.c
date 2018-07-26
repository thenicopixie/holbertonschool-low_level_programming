#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: 0 or exit
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < atoi(argv[1]); i++)
	{
		printf("%.2x", *((unsigned char *)main + i));

		if (i < atoi(argv[1]) - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
