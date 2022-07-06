#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: int
 * @size: int
 * @cmp: int
 * Return: (0)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp && size && array)
		for (i = 0; i <= size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}

