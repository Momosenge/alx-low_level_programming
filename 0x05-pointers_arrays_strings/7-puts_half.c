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

	while (*(str + len) != '\0')
	{
		len++;
	}
	int start = (len - 1) / 2;

	if (len % 2 == 0)
	{
		start++;
	}
	for (int i = start; i < len; i++)
	{
		printf("%c", *(str + i));
	}
	printf("\n");
}
