#include "main.h"
#include <stdio.h>
/**
 * factorial - It returns the factorial of the given number.
 * @n: It is the number to calculate.
 *
 * Return: -1 if n is lower than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
