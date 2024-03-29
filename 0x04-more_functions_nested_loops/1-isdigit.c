#include "main.h"
/**
 * _isdigit - checks for digits (0-9).
 * @c: it is the number to be checked.
 *
 * Return: 1 if c is digit, 0 otherwise.
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
