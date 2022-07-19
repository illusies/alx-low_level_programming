#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a 
 * listint_t linked list, and returns the head node’s data (n).
 * @head: pointer
 * Return: (0 or n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
