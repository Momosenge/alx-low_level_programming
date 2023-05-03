#include "main.h"
/**
 * swap_int - This functions takes two pointers as parameters.
 * and swaps the values of two integers
 *
 *Return: 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
