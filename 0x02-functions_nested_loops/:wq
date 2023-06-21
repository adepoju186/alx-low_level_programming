#include "main.h"
/**
 * print_times_table - computing the time table for n
 * @n: the integer's multiplication table
 */

void print_times_table(int n)
{
	int dig1, dig2, output;

	if (!(n > 15 || n < 0))
	{
		for (dig1 = 0; dig1 <= n; dig1++)
		{
			for (dig2 = 0; dig2 <= n; dig2++)
			{
			output = (dig1 * dig2);
				if (dig2 != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (output < 10 && dig2 != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((output % 10) + '0');
				}
				else if (output >= 10 && output < 100)
				{
					_putchar(' ');
					_putchar((output / 10) + '0');
					_putchar((output % 10) + '0');
				}
				else if (output >= 100 && dig2 != 0)
				{
					_putchar((output / 100) + '0');
					_putchar((output / 10) % 10 + '0');
					_putchar((output % 10) + '0');
				}
				else
					_putchar((output % 10) + '0');
			}
			_putchar('\n');
		}
	}
}


