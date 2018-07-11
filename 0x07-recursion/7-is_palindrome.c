#include "holberton.h"

/**
 * is_equal - compare values at indexes of s
 * @s: string to check
 * @len: length of s
 * @beg: begging index of s
 * Return: 1 if equal, else 0
 */
int is_equal(char *s, int len, int beg)
{
	if (s[beg] != s[len])
	{
		return (0);
	}
	if (beg > len)
	{
		return (1);
	}
	return (is_equal(s, len - 1, beg + 1));
}
/**
 * _strlen_recursion - return length of string
 * @s: string to find length
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 is palindrome, else 0
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0 || len == 1)
	{
		return (1);
	}
	len--;

	return (is_equal(s, len, 0));
}
