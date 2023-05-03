#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t num_element = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_element++;
		h = h->next;
	}

	return (num_element);
}
