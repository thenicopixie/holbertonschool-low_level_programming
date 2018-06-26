#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * 0. _putchar - print text
 * 1. print_alphabet - print alphabet in lowercase
 * 2. print_alphabet_x10 - print alphabet 10x
 * 3. _islower - check for lowercase character
 * 4. _isalpha - check for alphabetic character
 * 5. print_sign - print sign of number
 * 6. _abs - compute absolute value of integer
 * 7. print_last_digit - print last digit of number
 * 8. jack_bauer - print every minute of the day
 * 9. times_table - print a 9 times table
 * 10. add - add two integers
 * 11. print_to_98 - print all natural numbers from n-98
 */
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);

#endif /* _HOLBERTON_H_ */
