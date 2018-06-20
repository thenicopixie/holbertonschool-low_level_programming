#include <stdio.h>

/**
* main - Entry point
*
* program to print size of various types
*
* Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of a char: %li byte(s)\n", sizeof(char));
	printf("Size of an int: %li byte(s)\n", sizeof(int));
	printf("Sizie of a long int: %li byte(s)\n", sizeof(long));
	printf("Size of a long long int: %li byte(s)\n", sizeof(long long));
	printf("Size of a float: %li byte(s)\n", sizeof(float));
	
	return (0);
}
