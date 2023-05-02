#include "lists.h"

/**
 * print_listint - It prints all the elements of a linked list.
 * @h: Its a linked list of type listint_t to be printed.
 * Return: The number of nodes to be returned.
 */
size_t print_listint(const listint_t *h)
{
	size_t q = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		q++;
		h = h->next;
	}

	return (q);
}
