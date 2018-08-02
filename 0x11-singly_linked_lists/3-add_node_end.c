#include "lists.h"
#include <string.h>

/**
 * _strlen - find length of string
 * @s: string
 * Return: length of string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*(s + len))
		len++;
	return (len);
}
/**
 * add_node_end - add a new node to the end of a list of structs
 * @head: pointer pointing to head pointer
 * @str: pointer to string
 * Return: address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *end;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	if (!*head)
		*head = new_node;
	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = new_node;
	if (str == NULL)
	{
		new_node->str = NULL;
		new_node->len = 0;
	}
	else
	{
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
	}
	new_node->next = NULL;
	return (new_node);
}
