#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table to add element to
 * @key: key of new element
 * @value: value associated with the key
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;

	if (!key || strlen(key) == 0)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	add_node(&ht->array[i], key, value);

	return (1);
}

/**
 * add_node - add a new node to the beginning of a list
 * @head: pointer to head or linked list
 * @key: key of element
 * @value: value of element associated with key
 * Return: address of new element or NULL
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_head;

	new_head = malloc(sizeof(head));
	if (!new_head)
		return (NULL);
	if (value == NULL)
	{
		new_head->value = NULL;
		new_head->key = strdup(key);
	}
	else
	{
		new_head->value = strdup(value);
		new_head->key = strdup(key);
	}
	new_head->next = *head;
	*head = new_head;
	return (*head);
}
