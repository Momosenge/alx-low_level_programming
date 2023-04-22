#include <stdio.h>
/**
 * Main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char momo;

	for (momo = 'a'; momo <= 'z'; momo++)
	{
		if (momo != 'q' && momo != 'e')
			putchar(momo);
	}
	putchar('\n');
	return (0);
}
