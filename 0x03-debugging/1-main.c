#include <stdio.h>
/**
 * main - causes infinte loop
 *
 * Return: 0
 */
int main(void)
{
	int i;

	printf("Infinte loop  incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(0);
	}
	printf("Infinite loop avoided! \\o/\n");
	
	return (0);
}
