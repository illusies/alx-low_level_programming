#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *savepoin;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			savepoin = head->next;
			free(head);
			head = savepoin;
		}
	}
}
