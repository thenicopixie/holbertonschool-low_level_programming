#include <stdio.h>
/**
* main - Entry point
* print numbers in lowercase
* Return: 0
*/

int main(void)
{
	int nums = 48;
	int letter = 97;

	while (nums <= 57)
	{
		putchar(nums);
		nums++;
	}
	while (letter <= 122)
	{
		putchar(letter);
		letter++;
	}
	putchar(10);

	return (0);
}
