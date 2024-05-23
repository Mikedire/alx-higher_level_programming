#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1.
 */
int check_cycle(listint_t *list)
{
	listint_t *fox, *hare;

	if (list == NULL || list->next == NULL)
		return (0);

	fox = list->next;
	hare = list->next->next;

	while (fox && hare && hare->next)
	{
		if (fox == hare)
			return (1);

		fox = fox->next;
		hare = hare->next->next;
	}

	return (0);
}
