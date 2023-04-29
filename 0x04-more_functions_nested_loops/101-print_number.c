#include "main.h"
/**
 * print_number - prints an integer
 *
 * @n: the integer to be printed
 */
void print_number(int n)
{
	int div = 1;
	int num;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	else
		num = n;

	while (num / div > 9)
		div *= 10;

	while (div != 0)
	{
		_putchar(num / div + '0');
		num %= div;
		div /= 10;
	}
}
