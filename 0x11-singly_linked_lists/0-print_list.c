#include "lists.h"
#include <stdlib.h>
/**
 * print_list - print the strings in the node list
 * @h: pointer to node structure
 * Return: number of nodes in list
 */
size_t print_list(const list_t *h)
{
	size_t node_num = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == 0)
			printf("[0] (nil)\n");
		else
			printf("[%x] %s\n", h->len, h->str);
		node_num++;
		h = h->next;
	}
	return (node_num);
}
