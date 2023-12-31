#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of char
 * and initializes it with a specific char
 * @size: size of array
 * @c: initialized character of array c
 *
 * Return: pointer to the array(Success), NULL(error)
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
