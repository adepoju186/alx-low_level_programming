#include <stdio.h>

/**
 * main - Listing thr alphabet in reverse
 * Description: All in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters++)
	{
		putchar(letters);
	}

	putchar("\n");

	return (0);
}

