#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - It return the natural square root.
 * @n: It is the number whose natural square root is to be returned.
 *
 * Return: It returns the natural square root of the number if it exist.
 * otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);

	int i = _sqrt_recursion(n >> 2) << 1;
	int x = i + 1;

	if (x * x == n)
		return (x);
	if (i * i == n)
		return (i);

	return (-1);
}
