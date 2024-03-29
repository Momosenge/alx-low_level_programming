#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - It allocates memory using malloc.
 * @b: the amount of memory to allocate.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
