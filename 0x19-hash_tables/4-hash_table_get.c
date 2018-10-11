#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves the value associated with a key
 * @ht: hash table to search in
 * @key: key of value to find
 * Return: the value associated with the element, or NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *head;

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			return (head->value);
		}
		head = head->next;
	}
	return (NULL);
}
