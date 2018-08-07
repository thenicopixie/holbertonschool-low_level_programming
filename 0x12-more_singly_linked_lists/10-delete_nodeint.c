#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at given index
 * @head: double pointer to struct
 * @index: index to delete node
 * Return: 1 if success, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *next_temp;

	if (!*head)
	{
		return (-1);
	}
	temp = *head;
	next_temp = *head;
	if (index == 0)
	{
		free(temp);
		*head = temp->next;
	}
	while (i < (index - 1))
	{
		if (!temp)
			return (-1);
		next_temp = next_temp->next;
		temp = temp->next;
		i++;
	}
	next_temp = next_temp->next;
	temp->next = next_temp->next;
	free(next_temp);
	return (1);
}
