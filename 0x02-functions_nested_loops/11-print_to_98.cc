#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - printing all natural numbers from n to 98
 *@n: the number to startcounting from
 *Return: Always 1 for success -1 for failure
 */

void print_to_98(int n)
{
	int  a, b;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d, ", i);
		}
	} else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}

	}
}

