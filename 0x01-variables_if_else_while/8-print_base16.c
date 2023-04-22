#include <stdio.h>
/**
 * Main - Entry point
 * author: momo
 * Return: Always 0 (success)
 */
int main(void)
{
	char numbers[] = "0123456789abcdef";

		int i = 0;

		while (i < 16)
		{
			putchar(numbers[i]);
			i++;
		}
		putchar('\n');
		return (0);
}
