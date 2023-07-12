#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to newly allocated space
 * whicch contains a copy of the string given as a parameter
 * @str: string to be copied
 * Return: pointer to copied string (Succes), null (error)
 */
char *_strdup(char *str)
{
	char *second;
	unsigned int i, len;

	i = 0;

	if (str == 0)
		return (NULL);

	for (len = 0; str[len]; len++)
	{
	}

	second = malloc((len + i) * sizeof(char));

	if (second == NULL)
		return (NULL);

	for (; second[i] = str[i] != '\0'; i++)
	{

	}

	return (second);
}


