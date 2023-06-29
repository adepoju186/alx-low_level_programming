#include "main.h"
/**
 * reverse_array -  a function to
 * reverse contents of an integer array
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 *Return: nothing
 */


void reverse_array(int *a, int *n)
{
	s = 0;
	e = n - 1;

	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}
