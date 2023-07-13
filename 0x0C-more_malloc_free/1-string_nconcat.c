#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: maximum numbey of bytes to concatenate from s2
 *
 * Return: pointer to the concatenated string
 *	NULL if memory allocation failed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{char *strn;
	unsigned int countStrn1, countStrn2, bufferSize, i;

	/* Handle case if s1 or s2 is NULL */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	for (countStrn1 = 0; s1[countStrn1]; countStrn1++)
		;
	for (countStrn2 = 0; s2[countStrn2]; countStrn2++)
		;

	/* Adjust countStrn2 to maximum n bytes to concatenate */
	countStrn2 > n ? (countStrn2 = n) : (n = countStrn2);

	/* Calculate the size of the buffer to allocate */
	bufferSize = countStrn1 + countStrn2 + 1;

	strn = malloc(bufferSize * sizeof(char));
	if (strn == NULL)
		return (NULL);

	/* Copy characters from s1 and s2 into strn */
	for (i = 0; i < bufferSize - 1; i++)
		i < countStrn1 ? (strn[i] = s1[i]) : (strn[i] = s2[i - countStrn1]);

	/* Add null-terminating character to the end of the strn */
	strn[bufferSize - 1] = '\0';

	return (strn);
}