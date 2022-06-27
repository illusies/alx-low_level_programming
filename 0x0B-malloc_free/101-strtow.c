#include "main.h"
#include <stdlib.h>

/**
 * **strtow - function that splits a string into words
 * @str: char
 * Return: pointer or NULL
 */

char **strtow(char *str)
{
	char **s_split, *w_split;
	int i, k = 0, count = 0, words, check = 0, start, end;

	while (*(str + count))
		count++;
	words = count_w(str);
	if (words == 0)
		return (NULL);

	s_split = (char **) malloc(sizeof(char *) * (words + 1));
	if (s_split == NULL)
		return (NULL);

	for (i = 0; i <= count; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (check)
			{
				end = i;
				w_split = (char *) malloc(sizeof(char) * (check + 1));
				if (w_split == NULL)
					return (NULL);
				while (start < end)
					*w_split++ = str[start++];
				*w_split = '\0';
				s_split[k] = w_split - check;
				k++;
				check = 0;
			}
		}
		else if (check++ == 0)
			start = i;
	}

	s_split[k] = NULL;

	return (s_split);
}

/**
 * count_w - function that counts the strings
 * @s: char
 * Return: int
 */

int count_w(char *s)
{
	int i, check = 0, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			check = 0;
		else if (check == 0)
		{
			check = 1;
			count++;
		}
	}

	return (count);
}

