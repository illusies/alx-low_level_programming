#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - function that counts the number of unique numNodes
 * @head: pointer
 * Return: (0)
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *count1, *count2;
	size_t numNodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	count1 = head->next;
	count2 = (head->next)->next;

	while (count2)
	{
		if (count1 == count2)
		{
			count1 = head;
			while (count1 != count2)
			{
				numNodes++;
				count1 = count1->next;
				count2 = count2->next;
			}

			count1 = count1->next;
			while (count1 != count2)
			{
				numNodes++;
				count1 = count1->next;
			}

			return (numNodes);
		}

		count1 = count1->next;
		count2 = (count2->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: pointer
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t numNodes, i;

	numNodes = looped_listint_count(*h);

	if (numNodes == 0)
	{
		for (; h != NULL && *h != NULL; numNodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (i = 0; i < numNodes; i++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}

	h = NULL;

	return (numNodes);
}
