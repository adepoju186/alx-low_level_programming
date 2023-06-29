#include "main.h"

/**
 * _strncat - concatenates two string
 * with limited number of characters
 *
 * @dest: the pointer destinnation string
 * @src: the pointer source string
 * @n: maximum number of character to be concatenated
 *
 * Return: pointer to resulting string @dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int arraynum, srcindex;

	arraynum = 0;

	while (dest[arraynum])
		arraynum++;

	for (srcindex = 0; srcindex < n && src[srcindex] != '\0'; srcindex++)
		dest[arraynum + srcindex] = src[srcindex];

	dest[arraynum + srcindex] = '\0';

	return (dest);
}

