#include "main.h"

/**
 * *_strcat - concantenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}

	return (dest);
}
