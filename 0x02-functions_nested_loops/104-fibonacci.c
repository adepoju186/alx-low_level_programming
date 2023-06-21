#include <stdio.h>
/**
 * main -A program to print the first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int fibonacci;
	unsigned long digit1, digit2, digit3;
	unsigned long a, b, c, under;

	fibonacci = 0;
	digit1 = 0;
	digit2 = 1;
	for (fibonacci = 1; fibonacci <= 91; fibonacci++)
	{
		digit3 = digit1 + digit2;
		digit1 = digit2;
		digit2 = digit3;
		printf("%lu, ", digit3);
	}
	a = digit1 % 1000;
	digit1 = digit1 / 1000;
	b = digit2 % 1000;
	digit2 = digit2 / 1000;

	while (fibonacci <= 98)

	{

		under = (a + b) / 1000;
		c = (a + b) - under * 1000;
		digit3 = (digit1 + digit2) + under;
		a = b;
		b = c;
		digit1 = digit2;
		digit2 = digit3;
		if (c >= 100)
			printf("%lu%lu", digit3, c);
		else
			printf("%lu0%lu", digit3, c);
		if (fibonacci != 98)
			printf(", ");
		fibonacci++;
	}
	putchar('\n');
	return (0);
}


