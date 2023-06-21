#include <stdio.h>
/**
 * main - printing the sums of multiples of threes and fives
 * Description: all below 1024 followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int mult, output;

	for (mult  = 0; mult < 1024; mult++)
		if (mutl % 3 == 0 || mult % 5 == 0)
			output += mult;
	printf("%d\n", output);
	return (0);
}
