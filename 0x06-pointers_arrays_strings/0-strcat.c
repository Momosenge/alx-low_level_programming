#include "main.h"
/**
 * *_strcat - it appends the str string to the dest string, overwriting
 * the terminationg null byte(\0)
 * and then adds a terminating null byte
 * @dest: pointer to the destination string
 * @src: pointe to source string
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[i] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
