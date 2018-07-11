#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * 0. char *_memset(char *s, char b, unsigned int n) - fills memory with a constant byte
 * 1. char *_memcpy(char *dest, char *src, unsigned int n) - copies memory area
 * 2. char *_strchr(char *s, char c) - locates a character in a string
 * 3. unsigned int _strspn(char *s, char *accept) - gets the length of a prefix substring
 * 4. char *_strpbrk(char *s, char *accept) - searches a string for any of a set of bytes
 * 5. char *_strstr(char *haystack, char *needle) - locates a substring
 * 6. void print_chessboard(char (*a)[8]) - prints the chessboard
 * 7. void print_diagsums(int *a, int size) - prints the sum of the two diagonals of a square matrix of integers
 * 8. void set_string(char **s, char *to) - sets the value of a pointer to a char.
 */

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
int _putchar(char c);

#endif /* _HOLBERTON_H */
