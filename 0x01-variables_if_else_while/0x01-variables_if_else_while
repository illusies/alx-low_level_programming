#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * This program assigns a random number to the variable "n"
 * then print whether it is zeiro or positive (greater than zero)
 * or negative (less than zero)
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
