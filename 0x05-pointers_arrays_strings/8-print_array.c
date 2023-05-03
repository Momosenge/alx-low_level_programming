#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elments of an array of int, followed by a new line.
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}
