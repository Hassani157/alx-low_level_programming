#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	/* Traverse the linked list until the end (h points to NULL) */
	while (h)
	{
		/* Increment the counter for each node encountered */
		num++;
		/* Move to the next node in the linked list */
		h = h->next;
	}

	/* Return the total number of nodes encountered */
	return (num);
}
