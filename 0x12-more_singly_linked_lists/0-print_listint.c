#include "lists.h"

/**
 * print_listint - print all elements in list
 * @h: pointer to struct
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_num = 0;
	const listint_t *temp;

	if (!h)
	{
		return (0);
	}
	temp = h;
	while (temp)
	{
		printf("%i\n", temp->n);
		temp = temp->next;
		node_num++;
	}
	return (node_num);
}
