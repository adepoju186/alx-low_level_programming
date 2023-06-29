#include "main.h"

/**
 * _strcmp - comparism between two strings
 *
 * @s1: string 1 to compare
 * @s2: against this string 2
 *
 * Return: 0 if @s1 and @s2 are equal
 *		negative integer if the
 *		stopping character in @s1 is
 *		less than the one in @s2
 *		positive integer if
 *		the stopping character in @s1 is
 *		greater than @s2
 *
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, i;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			i =  s1[a] - s2[a];
		break;
		}

		else
		{
			i = s1[a] - s2[a];
		}
		i++;

	}

	return (i);
}

