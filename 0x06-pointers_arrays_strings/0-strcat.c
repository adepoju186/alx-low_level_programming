#include "main.h"

/**
 * _strcat -  concatenating two strings
 *@dest: pointer to destinaion input
 *@src: pointer to source input
 *
 *Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b2;

	a = 0;
	while (dest[a])
	a++;


	for (b2 = 0; src[b2]; b2++)
		dest[a++] = src[b2];

	return (dest);
}

