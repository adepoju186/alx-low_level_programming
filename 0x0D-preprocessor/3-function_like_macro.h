#ifndef ABS_H
#define ABS_H

/**
 * ABS - Macro to compute value of a number
 * @x: the number to be computed
 *
 * Description:
 * this macro compuutes the absolute value of a
 * number
 *
 * Return: absolute value of number
 */

#define AB(x) (((x) < 0) ? ((x) * -1) : ((x) * 1))

#endif /* ABS_H */
