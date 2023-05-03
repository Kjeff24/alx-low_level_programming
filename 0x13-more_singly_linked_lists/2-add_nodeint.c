
#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodeNew;

	nodeNew = malloc(sizeof(listint_t));
	if (!nodeNew)
		return (NULL);

	nodeNew->n = n;
	nodeNew->next = *head;
	*head = nodeNew;

	return (nodeNew);
}
