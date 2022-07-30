#include "hash_tables.h"
/**
 * hash_table_get- a function that retrieves a value associated with a key.
 * @ht: hash table
 * @key: key.
 *
 * Return: value.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;

	if (ht == NULL)
	{
		return (NULL);
	}
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		ptr = ht->array[index];
		while (ptr != NULL)
		{
			if (strcmp(ptr->key, key) == 0)
			{
				return (ptr->value);
			}
			ptr = ptr->next;
		}
		return (NULL);
	}
	return (NULL);
}
