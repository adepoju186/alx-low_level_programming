#include "main.h"


/**
 * _strlen_recursion - printing the length of a string
 * @s: string to be counted
 *
 * Return: length of string
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s = s + 1;
	return (1 + _strlen_recursion(s));
}
