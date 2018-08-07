#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked list
 * @h: pointer to struct
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;
	const listint_t *temp;

	if (!h)
	{
		return (0);
	}
	temp = h;
	while (temp)
	{
		elements++;
		temp = temp->next;
	}
	return (elements);
}
