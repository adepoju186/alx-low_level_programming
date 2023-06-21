#include "main.h"

/**
 * _islower - checks for lowercase letters
 * @c: checking for this character
 * Return: 1 if character is lowercse and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
