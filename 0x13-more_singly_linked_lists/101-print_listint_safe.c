#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - function that prints a listint_t linked list.
 * @head: pointer
 * Return: (0)
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *count1, *count2;
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
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer
 * Return: nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t numNodes, check = 0;

	numNodes = looped_listint_len(head);

	if (numNodes == 0)
	{
		for (; head != NULL; numNodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (check = 0; check < numNodes; check++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (numNodes);
}
