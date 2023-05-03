#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int num_node;

	if (!head || !*head)
		return (0);

	num_node = (*head)->n;
	temp_node = (*head)->next;
	free(*head);
	*head = temp_node;

	return (num_node);
}
