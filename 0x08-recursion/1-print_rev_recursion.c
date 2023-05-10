#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - It prints the string in reverse.
 * @s: This is a string to print.
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
