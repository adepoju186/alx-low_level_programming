#include "main.h"

/**
 * _isalpha - checking an alphabetic character
 * @c: character to be cchecked
 * Return: 1 if character is a letter upper or lowercase 0  if otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

