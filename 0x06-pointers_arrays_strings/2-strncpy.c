#include "main.h"

/**
 * _strncpy - a function to copy strings
 * @dest: pointer to destinaation to input buffer
 * @src: pointer to source input buffer
 * @n: bytes of src
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
