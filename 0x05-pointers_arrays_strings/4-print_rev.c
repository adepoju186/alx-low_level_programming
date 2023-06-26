#include "main.h"

/**
 * print_rev -  prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: Nothing
 *
 */

void print_rev(char *s)
{
	int dent;

	for (dent = 0; s[dent] != '\0'; ++dent)
		;
	for (--dent; dent >= 0; --dent)
		_putchar(s[index]);
	_putchar('\n');
}

