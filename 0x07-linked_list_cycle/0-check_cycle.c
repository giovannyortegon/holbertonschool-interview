#include"lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it.
 * @list: singly linked list
 * Return: 1 if there is no cycle or 0 if it is not.
 */
int check_cycle(listint_t *list)
{
	listint_t *tmp;
	int cycle = 0;

	if (list == NULL || list->next == NULL)
		return (cycle);

	tmp = list;

	while (tmp && tmp->next != NULL)
	{
		tmp = tmp->next;
		if (tmp->n == list->n)
		{
			cycle = 1;
			return (cycle);
		}
	}
	return (cycle);
}
