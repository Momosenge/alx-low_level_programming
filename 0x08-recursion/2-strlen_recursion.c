#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - It returns the length of the string.
 * @s: This is the string to measure.
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	else
		return (1 + _strlen_recursion(s + 1));
}
