#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as
 * a parameter
 * @str: pointer to string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *given;
	int i = 0, j;

	if (!str)
		return (NULL);

	while (*(str + 1))
		i++;
	i++;
	given = malloc(sizeof(char) * i);

	if (given == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		given[j] = str[j];
	}
	return (given);
}

