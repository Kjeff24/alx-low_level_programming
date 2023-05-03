#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_tor = head;
	listint_t *fast_har = head;

	if (!head)
		return (NULL);

	while (slow_tor && fast_har && fast_har->next)
	{
		fast_har = fast_har->next->next;
		slow_tor = slow_tor->next;
		if (fast_har == slow_tor)
		{
			slow_tor = head;
			while (slow_tor != fast_har)
			{
				slow_tor = slow_tor->next;
				fast_har = fast_har->next;
			}
			return (fast_har);
		}
	}

	return (NULL);
}
