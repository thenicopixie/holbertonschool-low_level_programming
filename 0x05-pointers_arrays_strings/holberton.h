#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * 0. char *_strcat(char *dest, char *src) - concatenate two strings
 * 1. char *_strncat(char *dest, char *src, int n) - concatenate two strings. Will use n bytes from string
 * 2. char *_strncpy(char *dest, char *src, int n) - copy a string
 * 3. int _strcmp(char *s1, char *s2) - compare two strings
 * 4. void reverse_array(int *a, int n) - reverse content of an array of integers
 * 5. char *string_toupper(char *) - change lowercase letters to uppercase
 * 6. char *cap_string(char *) - capitalize all words of a string
 * 7. 
 * 8. char *rot13(char *) - encode string using rot13
 */

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);

char *rot13(char *);

#endif /* _HOLBERTON_H_ */
