#include <stdio.h>
/**
 * Main - Entry point
 *
 * Return; Always 0 (Success)
 */
int main(void)
{
	int momo;

	for (momo = 0; momo <= 9; momo++)
	{
		putchar(momo + '0');
	}
	putchar('\n');
	return (0);
}
