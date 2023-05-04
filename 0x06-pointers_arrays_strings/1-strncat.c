#include "main.h"
/**
 * *_strncat - appends the src string to the dest string, overwriting the
 * terminating null byte ('\0') at the end of dest then adds a
 * terminating nullbyte('\0')
 * @dest: pointer to destination string
 * @src: pointer to the source string
 * @n: number of bytes to copy from src to dest
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j]; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
