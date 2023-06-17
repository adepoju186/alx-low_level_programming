#include <stdio.h>

/**
 * main - Listing the hexadecimals
 * Description: All in lowercase
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char alphaDigit;

	for (alphaDigit = '0'; alphaDigit <= '9'; alphaDigit++)
	{
		putchar(alphaDigit);
	}

	for (alphaDigit = 'a'; alphaDigit <= 'f'; alphaDigit++)
	{
		putchar(alphaDigit);
	}

	putchar('\n');

	return (0);
}
