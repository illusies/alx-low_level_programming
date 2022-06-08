#include <stdio.h>

/**
 * main - program that prints the first 50 Fibonacci numbers
 * starting with 1 and 2
 *
 * Return: (0)
 */
int main(void)
{
	unsigned long int i, one = 1, two = 2;

	printf("%lu", one);

	for (i = 1; i < 50; i++)
	{
		printf(", %lu", two);
		two += one;
		one = two - one;
	}
	
	printf("\n");
	return (0);
}