#include <stdio.h>
/**
* main - Entry point
* print numbers in lowercase
* Return: 0
*/

int main(void)
{
	int nums = 0;
	int letter = 97;

	while (nums <= 16)
	{
		putchar(nums);
		nums++;
	}
	while (letter <= 122)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
