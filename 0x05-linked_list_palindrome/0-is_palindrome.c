#include "lists.h"
/**
 * is_palindrome - find a palindrome in a list
 * @head: a list review
 * Return: 0 always palindrome
 */
int is_palindrome(listint_t **head)
{
	int pal;

	listint_t *right, *left;

	right = left = (*head);
	pal = palindrome(&left, right);
	return (pal);
}
/**
 * palindrome - recursive searcher
 * @left: list toward left
 * @right: list toward right
 * Return: 0 Always palindrome
 */
int palindrome(listint_t **left, listint_t *right)
{
	int pal = 0, pal1 = 0;

	if (right == NULL)
		return (1);

	pal = palindrome(left, right->next);
	if (pal == 0)
		return (0);

	if (right->n == (*left)->n)
		pal1 = 1;

	(*left) = (*left)->next;

	return (pal1);
}
