#include "lists.h"

/**
 * get_nodeint_at_index - retur  nth node of a linked list
 * @head: pointer to struct
 * @index: index of the node starting at 0;
 * Return: nth node of a linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
		return (NULL);
	return (temp);
}
