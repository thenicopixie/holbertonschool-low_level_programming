#include <stdio.h>
/**
* main - entry point - printf even fib numbers
* Return: (0)
*/
int main(void)
{
	int num1, num2, next_num, end_num, sum;

	num1 = 0;
	num2 = 1;
	next_num = 0;
	end_num = 4000000;

	while (next_num < end_num)
	{
		next_num = num1 + num2;
		num1 = num2;
		num2 = next_num;
		if (next_num % 2 == 0)
		{
		sum = next_num + sum;
		}
	}
	printf("%i", sum);
	printf("\n");
	return (0);
}
