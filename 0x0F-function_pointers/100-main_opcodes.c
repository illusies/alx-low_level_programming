#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: int
 * @argv: char
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int i, own;
	int (*p)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	own = atoi(argv[1]);

	if (own < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < own; i++)
	{
		opcode = *(unsigned char *)p;
		printf("%.2x", opcode);

		if (i == own - 1)
			continue;
		printf(" ");

		p++;
	}
	printf("\n");
	return (0);
}

