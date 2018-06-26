#include "holberton.h"
/**
* times_table - print 9x times table
*/
void times_table(void)
{
	int num1, num2, mult_num, dig1, dig2;

	num1 = 0;

	do {
	num2 = 0;

		do {
			mult_num = num1 * num2;
			if (mult_num <= 9)
			{
				_putchar(' ');
				_putchar(mult_num + '0');
			}
			else
			{
			dig1 = mult_num / 10;
			dig2 = mult_num % 10;
			_putchar(dig1 + '0');
			_putchar(dig2 + '0');
			}
			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			num2 = num2 + 1;
		} while (num2 <= 9);
		{
			_putchar('\n');
			num1 = num1 + 1;
		}
	} while (num1 <= 9);
		{
			_putchar(dig1 + '0');
			_putchar(dig2 + '0');
		}
}
