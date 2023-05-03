#include "lists.h"

size_t listint_len(const listint_t *h)
{
	size_t num_element = 0;

	while (h)
	{
		num_element++;
		h = h->next;
	}

	return (num_element);
}
