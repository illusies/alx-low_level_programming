#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - function that initializes n bytes of memory to x
 * @ptr: char
 * @x: int
 * @n: int
 * Return: pointer
 */

char *_memset(char *ptr, int x, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		ptr[i] = x;

	return (ptr);
}

/**
 * _calloc - function that allocates memory for an array,
 * using malloc
 * @nmemb: int
 * @size: int
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (0);

	p = malloc(nmemb * size);
	if (p == 0)
		return (0);
	_memset(p, 0, size * nmemb);

	return (p);
}

