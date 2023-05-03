#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise_slow, *hare_fast;
	size_t all_nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise_slow = head->next;
	hare_fast = (head->next)->next;

	while (hare_fast)
	{
		if (tortoise_slow == hare_fast)
		{
			tortoise_slow = head;
			while (tortoise_slow != hare_fast)
			{
				all_nodes++;
				tortoise_slow = tortoise_slow->next;
				hare_fast = hare_fast->next;
			}

			tortoise_slow = tortoise_slow->next;
			while (tortoise_slow != hare_fast)
			{
				all_nodes++;
				tortoise_slow = tortoise_slow->next;
			}

			return (all_nodes);
		}

		tortoise_slow = tortoise_slow->next;
		hare_fast = (hare_fast->next)->next;
	}

	return (0);
}

size_t print_listint_safe(const listint_t *head)
{
	size_t all_nodes, index = 0;

	all_nodes = looped_listint_len(head);

	if (all_nodes == 0)
	{
		for (; head != NULL; all_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < all_nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (all_nodes);
}
