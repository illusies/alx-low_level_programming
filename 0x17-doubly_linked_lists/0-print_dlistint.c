#include "lists.h"

/**
 * print_dlistint - function that prints all the elements
 * of a dlistint_t list
 * @h: const
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	int iniprint = 0;

	for (i = 0; h != NULL; i++)
	{
		if (h->prev != NULL && iniprint == 0)
		{
			h = h->prev;
			continue;
		}
		else if (h->prev == NULL)
		{
			iniprint = 1;
			i = 0;
		}
		printf("%i\n", h->n);
		h = h->next;
	}

	return (i);
}
