#include <stdio.h>
/**
* main - entry point
* Return: (0)
*/
int main(void)
{
	long int last, curr, next, count;

	last = 0;
	curr = 1;
	count = 0;

	while (count < 50)
	{
		next  = last + curr;
		last = curr;
		curr = next;
		if (count < 49)
		{
			printf("%li, ", next);
		}
		else
		{
			printf("%li", next);
		}
		count++;
	}
	printf("\n");
	return (0);
}
