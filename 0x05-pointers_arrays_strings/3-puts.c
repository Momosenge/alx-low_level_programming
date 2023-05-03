#include "main.h"
/**
 * _puts - This fuction takes a pointer to a char as a parameter.
 * and prints a screen followed by a new line to stdout.
 *
 * Retuen: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
