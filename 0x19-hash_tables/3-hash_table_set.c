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

	if (!ht || !key || strlen(key) == 0 || !value)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	if ((add_node(&ht->array[i], key, value)) == NULL)
		return (0);

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
	hash_node_t *new_head, *temp = *head;

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (*head);
		}
		temp = temp->next;
	}
	new_head = malloc(sizeof(hash_node_t));
	if (!new_head)
		return (NULL);
	new_head->value = strdup(value);
	new_head->key = strdup(key);
	new_head->next = *head;
	*head = new_head;
	return (*head);
}
