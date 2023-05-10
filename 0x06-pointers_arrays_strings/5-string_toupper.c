#include "main.h"
#include <stdio.h>
/**
 * *string_toupper - this function takes astring (str) as a parameter.
 * and changes all lowercase and uppercase.
 * @str: is a char to pointer that points to the first character of the character of string.
 *
 * Return: str.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
