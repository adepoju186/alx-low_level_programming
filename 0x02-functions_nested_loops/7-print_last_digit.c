#include "main.h"
/**
 * print_last_digit - computing the last digit of a number
 * @n: the number to be checked for last digit
 * Return: the last digit of the number
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;

	if (a < 0)
		a = -a;
	_putchar(a + '0');

	return (a);
}
