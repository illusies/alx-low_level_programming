#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money
 * @argc: int
 * @arcv: char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int coins, total = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	coins = atoi(argv[1]);

	while (coins > 0)
	{
		if (coins >= 25)
			coins -= 25;
		else if (coins >= 10)
			coins -= 10;
		else if (coins >=5)
			coins -= 5;
		else if (coins >= 2)
			coins -= 2;
		else if (coins >= 1)
			coins -= 1;
		total += 1;
	}
	printf("%d\n", total);
	return (0);
}

