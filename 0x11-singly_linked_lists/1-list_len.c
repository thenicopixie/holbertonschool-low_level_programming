#include "lists.h"
/**
 * list_len - list of nodes
 * @h: pointer to node
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t node_num = 0;

	while (h)
	{
		h = h->next;
		node_num++;
	}
	return (node_num);
}
