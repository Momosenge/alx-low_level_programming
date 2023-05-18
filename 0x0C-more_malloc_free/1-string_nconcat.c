#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - It takes two strings s1 and s2, and a number and
 * creates a new string by combining s1 and the firsdt n bytes of s2
 * @s1: the first string to be concatenated.
 * @s2: the second string to be concatenated.
 * @n: the number of bytes of s2 toconcatenate.
 *
 * Return: A pointer to the newly allocated spacein memory which
 * contains the concatenated string, or NULL if the function fails.
 */
char *string_nconcate(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int s1_len = s1 ? strlen(s1) : 0;
	int s2_len = s2 ? strlen(s2) : 0;
	int concat_len = s2_len > n ? n : s2_len;

	ptr = malloc(s1_len + concat_len + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memcpy(ptr, s1, s1_len);
	memcpy(ptr + s1_len, s2, concat_len);
	ptr[s1_len + concat_len] = '\0';

	return (ptr);
}
