#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments
 * of your program
 * @ac: int
 * @av: char
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int check, con_cat, i, j, k;

	if (ac == 0 || av == NULL)
		return (0);
	check = 0, k = 0;
	for (i = 0; i < ac; i++)
	{
		con_cat = 0;
		while (av[i][con_cat])
			con_cat++;
		check += con_cat + 1;
	}

	all_args = malloc((check + 1) * sizeof(char));

	if (all_args == 0)
		return (0);

	for (j = 0; j < ac; j++)
	{
		con_cat = 0;
		while (av[j][con_cat])
		{
			*(all_args + k) = av[j][con_cat];
			k++;
			con_cat++;
		}
		*(all_args + k) = '\n';
		k++;
	}
	*(all_args + k) = '\0';

	return (all_args);
}

