#include "holberton.h"
/**
* times_table - print 9x table
*
*/
void times_table(void)
{
	int num1, num2, mult_num, dig1, dig2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			mult_num = num1 * num2;
			dig1 = mult_num / 10;
			dig2 = mult_num % 10;
			if (mult_num == 0)
			{
				if (num1 == 0 && num2 > 0)
				{
					_putchar(' ');
				}
				_putchar(dig2 + '0');
				if (num2 < 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
			else if (mult_num <= 9)
			{
				_putchar(' ');
				_putchar(dig2 + '0');
			}
			else if (mult_num > 9)
			{
				_putchar(dig1 + '0');
				_putchar(dig2 + '0');
			}
			if (num2 < 9 && mult_num > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
