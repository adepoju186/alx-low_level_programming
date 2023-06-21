#include <stdio.h>
/**
 *main - A program to compute the sum of even fibonacci numbers
 *Return: 0
 */
int main(void)
{
	unsigned long fibonacci dig1, dig2, dig3, result;

	dig1 = result = 0;
	dig2 = 1;
	for (fibonacci = 0; fibonacci < 50; fibonacci++)
	{
		dig3 = dig1 + dig2;
		dig1 = dig2;
		dig2 = dig3;
		if (dig3 % 2 == 0 && dig3 < 4000000)
			result += dig3;
	}
	printf("%lu\n", result);
	return (0);
}

