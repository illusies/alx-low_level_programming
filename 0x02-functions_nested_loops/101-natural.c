#include <stdio.h>

/**
 * main - program that computes and prints the sum
 * of all the multiples of 3 or 5 below 1024
 *
 * Return: (0)
 */
int main(void)
{
	int i = 0, check = 1024, threes = 3, fives = 5, sum = 0;

	while (i == 0)
	{
		if (threes < check)
		{
			sum += threes;
			threes += 3;
		}

		if (fives < check && (fives % 3) != 0)
		{
			sum += fives;
			fives += 5;
		}
		else if (fives % 3 == 0)
		{
			fives += 5;
		}

		if (threes >= check && fives >= check)
		{
			i = 1;
		}
	}
	printf("%d\n", sum);
	return (0);
}