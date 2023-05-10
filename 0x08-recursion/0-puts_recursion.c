#include "main.h"
#include <stdio.h>
/**
 * _puts_reursion - It prints a string followd by a new line.
 * @s: thats the string to print.
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
