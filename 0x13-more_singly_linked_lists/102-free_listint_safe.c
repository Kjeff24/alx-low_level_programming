#include "lists.h"

size_t free_listint_safe(listint_t **h)
{
	size_t len_size = 0;
	int diff_size;
	listint_t *temp_node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff_size = *h - (*h)->next;
		if (diff_size > 0)
		{
			temp_node = (*h)->next;
			free(*h);
			*h = temp_node;
			len_size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len_size++;
			break;
		}
	}

	*h = NULL;

	return (len_size);
}
