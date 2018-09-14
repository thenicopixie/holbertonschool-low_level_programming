#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to struct
 * @idx: the index of the list where the new node should be added
 * @n: input number
 * Return: address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;

	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	if (!(*head))
		return (NULL);

	temp = *head;

	while (i < idx - 1)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
		i++;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
