#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: types of arguments passed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, mark = 0;
	char *ptr;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				mark = 1;
					break;
			case 'i':
				printf("%d", va_arg(args, int));
				mark = 1;
				break;
			case 'f':
				printf("%f", (float) va_arg(args, double));
				mark = 1;
				break;
			case 's':
				ptr = va_arg(args, char *);
				if (!ptr)
				{
					mark = 1;
					printf("(nil)");
					break;
				}
				printf("%s", ptr);
				mark = 1;
				break;
		}
		if (format[i + 1] != 0 && mark == 1)
			printf(", ");
		i++;
		mark = 0;
	}
	printf("\n");
	va_end(args);
}
