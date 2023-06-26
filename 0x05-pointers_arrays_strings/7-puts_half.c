#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string input parameter
 * Return: Nothing
 */
void puts_half(char *str)
{
	int c, d;

	for (c =  0; str[c] != '\0'; ++c)
		;

	if (c % 2 == 0)
	{
		for (d = c / 2; str[d] != '\0'; ++d)
		_putchar(str[d]);
	}
	else
	{
		for (d = ((c - 1) / 2) + 1; str[d] != '\0'; ++d)
			_putchar(str[d]);
	}
	_putchar('\n');
}
