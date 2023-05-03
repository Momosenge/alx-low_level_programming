#include "main.h"
#include <stdio.h>
/**
 * rev_string - The function reverses a string.
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	char temp;

	for (int i = 0; i < len / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = temp;
	}
}
