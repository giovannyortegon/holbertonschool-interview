#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - Add a new node a the list
 * @head:	List to store nodes
 * @number: value to store at the node
 * Return: List with a new element
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node, *curr, *prev;

	prev = NULL;
	curr = (*head);

	node = new_node(number);

	while (curr != NULL && number > curr->n)
	{
		prev = curr;
		curr = curr->next;
	}

	if (prev == NULL)
	{
		node->next = (*head);
		(*head) = node;
	}
	else
	{
		node->next = curr;
		prev->next = node;
	}
	return (*head);
}
/**
 * new_node - create a new node
 * @number: value of a node;
 * Return:	new node
 */
listint_t *new_node(int number)
{
	listint_t *node;

	node = (listint_t *) malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = number;
	node->next = NULL;

	return (node);
}
