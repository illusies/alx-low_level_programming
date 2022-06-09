#include <stdio.h>

/**
 * main - Program that finds and prints the sum of the even-valued terms
 * in the Fibonacci series whose values do not exceed 4,000,000
 *
 * Return: (0)
 */
int main(void)
	{
		unsigned long int check = 4000000, one = 0, two = 1, even = 0, sum = 0;

		while (check > even)
		{
			even = one + two;

			if ((even % 2) == 0)
			{
				sum += even;
			}

			one = two;
			two = even;
		}
		
		printf("%li\n", sum);
		return (0);
}