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
	char temp;

	while (*(s + len) != '\0')
	{
		temp = *(s + len);
		*(s + len) = *(s + len - 1);
		*(s + len - 1) = temp;
		len++;
	}
}
