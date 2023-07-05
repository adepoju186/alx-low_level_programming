#include "main.h"
#include <math.h>

/**
 * _pow_recursion - printing a number
 * raised to the power of another number
 *
 * @x: first digit input
 * @y: number to raise digit by
 *
 * Return: @x raised to power of @y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
