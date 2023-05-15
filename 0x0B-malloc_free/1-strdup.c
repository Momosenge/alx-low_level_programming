#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - It returns a pointer to a newly allocated space in memory.
 * which contains a copy of the string given given as a parameter.
 * @str: It is string to duplicate.
 *
 * Retrn: a pointer to a duplicated string,
 *or NULL if insufficient memory was avalable.
 */
char *_strdup(char *str)
{
	int len;
	char *ptr;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;
	ptr = malloc(len * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	strcpy(ptr, str);

	return (ptr);
}
