#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: char
 * @s2: char
 * @n: int
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int check1, check2, i, j;
	char *str_join;
	char *nul = "";

	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;

	check1 = 0, check2 = 0;
	while (*(s1 + check1))
		check1++;
	while (*(s2 + check2))
		check2++;

	if (n < check2)
		check2 = n;

	str_join = malloc(sizeof(char) * (check1 + check2 + 1));

	if (str_join == 0)
		return (0);

	for (i = 0; i < check1; i++)
		*(str_join + i) = *(s2 + i);

	for (i = 0, j = check1; i < check2; i++, j++)
		*(str_join + j) = *(s2 + i);

	*(str_join + j) = '\0';

	return (str_join);
}

