#include "main.h"
/**
 * int _strlen - This function takes a pointer to a char as a parameter.
 * and returns the length of the string
 *
 * Return: 0.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return len;
}
