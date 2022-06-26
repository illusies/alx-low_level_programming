#include  "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: int
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *create;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	create = (char *) malloc(size * sizeof(c));

	if (create == 0)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			*(create + i) = c;
			i++;
		}
		return (create);
	}
}

