#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello world";
    char *f = "world";
char *f1 = "rld";
char *f2 = "ld";
//char *f3 = "z";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
t = _strstr(s, f1);
    printf("%s\n", t);
t = _strstr(s, f2);
    printf("%s\n", t);
    //t = _strstr(s, f3);
    //printf("%s\n", t);
    return (0);
}
