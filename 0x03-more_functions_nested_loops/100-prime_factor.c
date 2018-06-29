#include <stdio.h>
/**
* main - entry point
* Return: (0)
*/
int main(void)
{
	unsigned long num, greatest;

	num = 612852475143;

	for (greatest = 2; greatest < num; )
	{
		if (num % greatest == 0)
		{
			num = num / greatest;
			greatest = 2;
		}
		else
		{
			greatest++;
		}
	}
	printf("%lu", greatest);
	printf("\n");
	return (0);
}
