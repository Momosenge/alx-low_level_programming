#include <stdio.h>
#include <stdlib>
#include <time.h>

/**
 * main - main function to generate a random number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n:


	srand(time(0))
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("is positive\n");
	else if (n == 0)
		printf("is zero\n");
	else if (n > 0)
		printf("is negative\n");


		return (0);

}

