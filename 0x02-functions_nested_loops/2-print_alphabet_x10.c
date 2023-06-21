#include "main.h"

/**
 * print_alphabet_x10 - priting the alphabet 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char al;
	int i;

	i = 0;
	while (i < 10)
	{
		al = 'a';
		while (al <= 'z')
		{
			_putchar(al);
			al++;
		}

		_putchar('\n');
		i++;
	}
}
