#include <stdio.h>
#include <stdlib.h>
int _isdigit(int c);
/**
 * main - add numbers together
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: (0) or (1) is character is passed
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc == 0)
	{
		printf("%i\n", 0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
/**
* _isdigit - check if value is digit
* @c: value to check
* Return: (1) if value is digit, else (0) if not digit
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
