#include <stdio.h>

/**
 * main - prrints all possible combination for digits
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
			{
			putchar(',');
			putchar(' ');
			}
	}

	putchar('\n');

	return (0);
}
