#include <stdio.h>

/**
 * main - Printing the single digits of base 10
 * Description: Without suing the printf function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digits;

	for (digits = 48; digits < 58; digits++)

	{
	putchar(digits);
	}

	putchar('\n');

	return (0);
}
