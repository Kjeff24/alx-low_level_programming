#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *temp_node = head;

	while (temp_node && m < index)
	{
		temp_node = temp_node->next;
		m++;
	}

	return (temp_node ? temp_node : NULL);
}
