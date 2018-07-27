#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    print_strings(", ", 4, "Jay", "Django", "hello", "chewy");
    print_strings(NULL, 2, "Jay", "Django");
    print_strings(", ", 2, "Jay", NULL);
    print_strings(", ", 2, NULL, "Django");
    print_strings(", ", 2, NULL, NULL);
    return (0);
}
