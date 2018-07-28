#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * _putchar - write character to standard output
 * @c: character to print
 * Return: 1 or -1
 * sum_them_all - Returns the sum of all of its parameters
 * print_numbers - print numbers
 * print_strings - print strings, followed by a new line
 * print_all - print any anything
 */
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /* _VARIADIC_FUNCTIONS_H_ */
