#include "main.h"

/**
 * _realloc - function that reallocates a memory block
 * using malloc and free
 * @ptr: void
 * @old_size: int
 * @new_size: int
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *check, *mem_reloc;
	unsigned int i;

	if (ptr != NULL)
		check = ptr;
	else
	{
		return (malloc(new_size));
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}

	mem_reloc = malloc(new_size);
	if (mem_reloc == NULL)
		return (0);

	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(mem_reloc + i) = check[i];
	}
	free(ptr);
	return (mem_reloc);
}

