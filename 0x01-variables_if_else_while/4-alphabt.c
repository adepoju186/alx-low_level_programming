#include <stdio.h>
#include <ctype.h>

/**
 * main - Lists the alphabet
 * Description: without the letters 'q' and 'e'
 * All in lowercase
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	if (alphabet != 'e' && alphabet != 'q')
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
