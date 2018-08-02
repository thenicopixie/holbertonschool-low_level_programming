#include "lists.h"
#include <string.h>

int _strlen(const char *s)
{
	int len = 0;

	while (*(s + len))
		len++;
	return (len);
}
/**
 * add_node - add a new node to the beginning of a list
 * @head: pointer pointing to head pointer
 * @str: pointer to string
 * Return: address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;


	new_head = malloc(sizeof(*head));
	if (!new_head)
		return (NULL);
	if (str == NULL)
	{
		new_head->str = NULL;
		new_head->len = 0;
	}
	else
	{
		new_head->str = strdup(str);
		new_head->len = _strlen(str);
	}
	new_head->next = *head;
	*head = new_head;
	return (*head);
}
