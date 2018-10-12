#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head, *temp;
	unsigned long int i;

	if (ht)
	{
		if (ht->size)
		{
			for (i = 0; i < ht->size; i++)
			{
				head = ht->array[i];
				while (head)
				{
					temp = head->next;
					free(head->key);
					free(head->value);
					free(head);
					head = temp;
				}
			}
			free(ht->array);
		}
	}
	free(ht);
}
