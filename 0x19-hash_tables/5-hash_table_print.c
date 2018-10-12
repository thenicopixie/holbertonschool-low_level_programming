#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head;
	int flag = 0;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", head->key, head->value);
			flag = 1;
			head = head->next;
		}
	}
	printf("}\n");
}
