#include "main.h"

/**
 * times_table - printing the 9 times table
 * Return: 1 for poitive, 0 for zero and -1 for negative
 */
void times_table(void)
{
	int num, dig, out;

	for (num = 0; num <= 9; num++)
	{
		for (dig = 0; dig <= 9; dig++)
		{

			out = (num * dig);
			if (dig != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (out  >= 10)
			{
				_putchar((out / 10) + '0');
				_putchar((out % 10) + '0');
			}
			else if (out < 10 && dig != 0)
			{
				_putchar(' ');
				_putchar((out % 10) + '0');
			}
			else
				_putchar((out % 10) + '0');
		}
		putchar('\n');

	}
}

