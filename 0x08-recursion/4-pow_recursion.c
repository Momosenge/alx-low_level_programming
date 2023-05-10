#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - It returns the value of x raised to the value of y.
 * @x: It is the base.
 * @y: It is the exponent.
 *
 * Return: -1 if y is lower than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (0);

	return (x * _pow_recursion(x, y - 1));
}
