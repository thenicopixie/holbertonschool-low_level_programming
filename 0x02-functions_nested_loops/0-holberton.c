#include "holberton.h"
/**
* main - program print text
* Return: (0) - success
*/
int main(void)
{
	char word[] = "Holberton\n";
	int i;

	i = 0;

	while (word[i] != '\0')
	{
		_putchar(word[i]);
		i++;
	}
	return (0);
}

