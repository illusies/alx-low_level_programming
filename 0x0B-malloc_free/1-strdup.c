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
	int i;
	char *str1;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;
	i++;
	str1 = malloc(sizeof(char) * i);

	if (str1 == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		str1[i] = str[i];
	str1[i] = '\0';
	return (str1);
}

