#include "main.h"
/**
 * main - Printing the alphabet in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	char al;

	al = 'a';
	while (al <= 'z')
	{
		_puthcar(al);
		al++;
		_putchar('\n');
	}
}
