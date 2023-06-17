#include <stdio.h>
#include <ctype.h>

/**
 * main - Lists the alphabet
 * Description: without the letters 'q' and 'e'
 * All in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	if (alphabet != 'e' && alphabet != 'q')
	{
		putchar(alphabet);
	}
	alphabet = tolower(alphabet)`;
	putchar('\n');

	return (0);
}
