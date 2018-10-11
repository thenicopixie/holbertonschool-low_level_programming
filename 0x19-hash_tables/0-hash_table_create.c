#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: size of hash table
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t = NULL;

	if (size)
	{
		hash_t = malloc(sizeof(hash_table_t));
		if (!hash_t)
			return (NULL);
		hash_t->size = size;
		hash_t->array = NULL;
		hash_t->array = malloc(sizeof(unsigned long int) * size);
		if (!hash_t->array)
			return (NULL);
	}
	return (hash_t);
}
