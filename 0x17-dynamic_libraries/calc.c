/**
 * _strlen - return length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	;

	return (length);
}
#include <stdio.h>
#define EXIT_SUCCESS 1

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    printf("%d\n", _strlen("Holberton"));
    return (EXIT_SUCCESS);
}
/**
 * add - function to add
 * @a: integer
 * @b: integer
 * Return: sum of a and b
 */
int add (int a, int b)
{
	return (a + b);
}
/**
 * sub - function to subtract
 * @a: integer
 * @b: integer
 * Return: difference of a and b
 */
int sub (int a, int b)
{
	return (a - b);
}
/**
 * mul - function to multiply
 * @a: integer
 * @b: integer
 * Return: product of a and b
 */
int mul (int a, int b)
{
	return (a * b);
}
/**
 * div - function to divide
 * @a: integer
 * @b: integer
 * Return: value of a divided by b
 */
int div (int a, int b)
{
	return (a / b);
}
/**
 * mod - function to mod
 * @a: integer
 * @b: integer
 * Return: value of a mod b
 */
int mod (int a, int b)
{
	return (a % b);
}
