#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked
 * list
 * @h: pointer to a doubly linked list
 * Return: number of elements in a doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
