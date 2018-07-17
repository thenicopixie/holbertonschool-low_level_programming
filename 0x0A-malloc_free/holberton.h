#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * _putchar - print character
 * create_array - creates an array of chars, and initializes it with a specific char
 * _strdup - returns a pointer to a newly allocated space in memory
 * str_concat - concatenate two strings
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * free_grid - frees a 2 dimensional grid previously created by your
 * argstostr - concatenates all the arguments of your program
 */

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);

#endif /* _HOLBERTON_H_ */
