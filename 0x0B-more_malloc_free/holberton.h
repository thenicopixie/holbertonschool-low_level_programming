#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * _putchar - print character
 * malloc_checked - allocate memory using malloc
 * string_nconcat - concatenate two strings
 * _calloc - allocate memory for an array using malloc
 * array_range - create an array of integers
 */

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
#endif /* _HOLBERTON_H_ */
