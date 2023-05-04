#include "main.h"
/**
 * _strncpy - copies the string pointed to src, including the
 * terminating null ('\0') to buffer pointed to by the dest
 * Up to n bytes of src are copied
 * @dest: pointer to destination srtring
 * @src: pointer to the source string
 * @n: the number of bytes to copy from src to dest
 *
 * Return: to the resulting dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
