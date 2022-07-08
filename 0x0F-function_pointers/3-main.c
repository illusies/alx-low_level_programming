#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function that contains the main program
 * @argc: int
 * @argv: char
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", op);

	return (0);
}

