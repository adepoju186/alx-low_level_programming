#include "main.h"

/**
 * rev_string -  reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int a, b;
	char al;

	for (a = 0; s[a] != '\0'; ++a)
		;
	for (b = 0; b < a / 2; ++b)
	{
		al = s[b];
		s[b] = s[a - 1 - b];
		s[a - 1 - b] = al;
	}
}


