#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - It concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer to newly allocated space in memorywhich contains contents.
 * of s1 followed by contents of s2 and null terminated.
 */
char *str_concat(char *s1, char *s2)
{
	int length;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length = strlen(s1) + strlen(s2);
	char *result = (char *)malloc(length + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
