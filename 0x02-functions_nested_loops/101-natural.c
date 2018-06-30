#include <stdio.h>
/**
* main - entry point
* Return: (0)
*/
int main(void)
{
	int num, mult, sum;

	num = 1024;

	sum = 0;

	for (mult = 0; mult < num; mult++)
	{
		if (mult % 3 == 0 || mult % 5 == 0)
		{
			sum = sum + mult;
		}
	}
	printf("%i", sum);
	printf("\n");
	return (0);
}
