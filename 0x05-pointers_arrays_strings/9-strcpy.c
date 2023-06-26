#include "main.h"

/**
 * _strcpy - copes a string from one pointer to another
 * with the terminating null byte
 *
 * @src: source of parameter
 * @dest: deestination of string
 * Return: pointer to dest input parameter
 *
 *
 */
char *_strcpy(char *dest, char *src)
{

	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}
