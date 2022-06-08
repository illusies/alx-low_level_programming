#include "main.h"
#include <stdio.h>

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;
	int total;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			total = i * j;
			printf("%3d,", total);
		}
		printf("3%d", i * 9);

		printf("\n");
	}
}