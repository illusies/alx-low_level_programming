#include "function_pointers.h"

/**
 * main - program that prints the opcodes of its own
 * main function
 * @argc: int
 * @argv: char
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	register int i, num;
	char *ptr = (char *)main;

	if (argc != 2)
		printf("Error\n"), exit(1);
	num = atoi(arv[1]);
	if (num < 0)
		printf("Error\n"), exit(2);
	for (i = 0; i < num - 1; i++)
		printf("%02hhx\n", ptr[i];
	printf("%02hhx\n", ptr[i]);
	return (0);
}

