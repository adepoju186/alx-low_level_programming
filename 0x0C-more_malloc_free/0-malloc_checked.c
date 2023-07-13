#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocating memory using malloc
 * @b: the size of the buffer
 * Return: the pointer to the buffer
 */

void *malloc_checked(unsigned int b)
{
	void *memSpace = malloc(b);

	if (memSpace == NULL)
		exit(98);
	return (memSpace);
}
