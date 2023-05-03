#include "main.h"
#include <stdio.h>
/**
 * puts2 - this function prints every other character of the string.
 * starting with the first char followed by a new line.
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		printf("%c", *(str + i));
		i += 2;
	}
	printf("\n");
}
