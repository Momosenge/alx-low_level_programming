#include "main.h"
#include <stdio.h>
/**
 * puts_half - The function prints half off the string, followed by a new line.
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	int mid = len / 2;

	if (len % 2 == 0)
	{
		printf("%.*s\n", mid, str + mid);
	}
	else
	{
		printf("%.*s\n", mid + 1, str + mid + 1);
	}
}
