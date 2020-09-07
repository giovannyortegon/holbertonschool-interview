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

	if (list == NULL)
		return (NULL);

	tmp = list;
	tmp = tmp->next;

	while (tmp->next != NULL)
	{
		if (tmp->n == list->n)
		{
			cycle = 1;
			break;
		}
		tmp = tmp->next;
	}

	return (cycle);
}
