
#include "main.h"

/**
 *print_sign - Checks if integer is positive or negative or zero
 *@n: integer(s) to be checked
 *Return: 1 if positive, 0 if negative, and -1 if not an integer
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
