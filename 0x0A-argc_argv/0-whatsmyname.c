#include <stdio.h>

/**
 * main - prints its name
 * @argc: number of command line arguments
 * @argv: array that contains string of the program
 * Return: 0 - success
 */
int main(argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
