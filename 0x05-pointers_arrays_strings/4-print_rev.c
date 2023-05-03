#include "main.h"
#include <stdio.h>
/**
 * print_rev - the function prints the string in reverse.
 * followed by a  new line.
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	while (len >= 0)
	{
		printf("%c", *(s + len));
	}
	printf("\n");
}
