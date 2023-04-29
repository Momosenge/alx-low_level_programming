#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largets prime factor of the number 612852475143.
 *
 * Return: 0 success
 */
int main(void)
{
	long n = 612852475143;
	int i;

	for (i = 2; i <= sqrt(n); i++)
	{
		while (n % i == 0)
			n /= i;
	}
	printf("%d\n", n);
	return (0);
}
