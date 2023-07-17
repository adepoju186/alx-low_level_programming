#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * the main function is to print the name
 * if rhe fle that was compiled using the
 *__FILE__ macro
 *
 * Return: 0 (success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
