#include "lists.h"

int sum_listint(listint_t *head)
{
	int sum_list = 0;
	listint_t *temp_node = head;

	while (temp_node)
	{
		sum_list += temp_node->n;
		temp_node = temp_node->next;
	}

	return (sum_list);
}
