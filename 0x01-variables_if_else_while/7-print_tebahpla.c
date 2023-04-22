#include <stdio.h>
/**
 * Main - Emtry point
 * aurthor - momo
 * Return - Always 0 (Success)
 */
int main(void)
{
	char momo;

	for (momo = 'z'; momo >= 'a'; momo--)
		putchar(momo);

	putchar('\n');

	return (0);
}
