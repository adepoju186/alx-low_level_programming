#include <stdio.h>
/**
 * main - printing the first 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long fibonacci, digit1, digit2, digit3;

	digit1 = 0;
	digit2 = 1;
	for (fibonacci = 0; fibonacci < 50; fibonacci++)
	{
		digit3 = digit1 + digit2;
		digit1 = digit2;
		digit2 = digit3;
		printf("%lu", digit3);
		if (fibonacci == 49)
			putchar('\n');
		else
			printf(", ");
	}
	return (0);
}
