#include "main.h"
/**
 * reverse_ array - this function takes an array of integers (a).
 * and size of of  the arrat (n).
 * as parameters and reverses the content of the array.
 * int n: is the size of the array.
 * int a: is a pointer to the array of integers.
 *
 * Return: always 0.
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
