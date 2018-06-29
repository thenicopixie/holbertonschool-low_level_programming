#include <stdio.h>
/**
*
*
*/
int main(void)
{
	long num, i, j, prime;

	num = 612852475143;

	for (i = num; i > 1; i--)
	{
		if (num % i == 0)
		{	
			prime = 0;
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					prime = 1;
					break;
				}
			}
			if (prime == 0)
			{
				printf("%li\n", i);
				break;
			}
		}
		
	}
	return (0);
}
