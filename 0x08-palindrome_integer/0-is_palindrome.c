#include "palindrome.h"
/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	unsigned int n; /* number of nodes */

	current = h;
	n = 0;
	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		n++;
	}

	return (n);
}

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer of first node of listint_t list
 * @n: integer to be included in new node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}

	return (new);
}


/**
 * is_palindrome - find a palindrome in a list
 * @head: a list review
 * Return: 0 always palindrome
 */
int __is_palindrome(listint_t **head)
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
/**
 * is_palindrome - create a list and searching
 * @n: list toward left
 * Return: 1 Always palindrome
 */
int is_palindrome(unsigned long n)
{
	unsigned long dig, temp, factor = 1;
	listint_t *head, *current;

	head = NULL;
	temp = n;

	while (temp)
	{
		temp /= 10;
		factor *= 10;
	}

	while (factor > 1)
	{
		factor /= 10;
		dig = n / factor;
		add_nodeint_end(&head, dig);
		n = n % factor;
	}
	if (__is_palindrome(&head) == 1)
		return (1);
	else
		return (0);

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
