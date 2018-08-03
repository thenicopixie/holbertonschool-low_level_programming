#include "lists.h"

/**
 * free_list - function that frees list_t
 * @head: pointer, points to first byte in node structure
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
