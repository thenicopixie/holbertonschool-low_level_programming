#include <stdio.h>
/**
* main - print first 50 Fiboncci numbers
* Return: (0)
*/
int main(void)
{
	long int num, curr, sum;
	int i;

	num = 1;

	curr = 1;

	printf("%li, ", curr);

	for (i = 2; i <= 50; i++)
	{
		sum = num + curr;
		num = curr;
		curr = sum;
		printf("%li", sum);
		if (i != 50)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
