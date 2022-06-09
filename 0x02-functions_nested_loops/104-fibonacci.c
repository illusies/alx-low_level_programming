#include <stdio.h>

/**
 * main - program that finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 *
 * Return: (0)
 */
int main(void)
{
	unsigned long int i, one = 1, two = 2, one1, one2, two1, two2;
	unsigned long int check = 1000000000;

	printf("%lu", one);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", two);
		two += one;
		one = two - one;
	}

	one1 = (one / check);
	one2 = (one % check);
	two1 = (two / check);
	two2 = (two % check);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", two1 + (two2 / check));
		printf("%lu", two2 % check);
		two1 = two1 + one1;
		one1 = two1 - one1;
		two2 = two2 + one2;
		one2 = two2 - one2;
	}
	
	printf("\n");
	return (0);
}