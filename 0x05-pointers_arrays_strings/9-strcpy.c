#include "main.h"
#include <stdio.h>
/**
 * _strcpy - cpoies the string pointed to by src, including the terminating null byt(\O),
 * to the buffer pointed to be the dest.
 * returns a pointer to dest
 *
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + 1) != '\0')
	{
		*(dest + i) = *(src + 1);
		i++;
	}
	*(dest + 1) = '\0';
	return (dest);
}
