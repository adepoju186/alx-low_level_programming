#include "main.h"

/**
 * puts2 - prints every other character in a string
 * @str: string parameter input
 * Return: Nothing
 */
void puts2(char *str)
{
	int d;

	for (d = 0; str[d] != '\0'; ++d)
	{
		if (d % 2 == 0)
			_putchar(str[d]);
	}

	_putchar('\n');
}

