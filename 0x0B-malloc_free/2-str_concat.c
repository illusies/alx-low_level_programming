#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: char
 * @s2: char
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *join;
       	int i, index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i =0; s1[i] || s2[i]; i++)
		len++;

	join = malloc(sizeof(char) * len);

	if (join == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		join[index++] = s1[i];

	for (i = 0; s2[i]; i++)
		join[index++] = s2[i];

	return (join);
}

