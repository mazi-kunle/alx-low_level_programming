#include "hash_tables.h"
/**
 * hash_table_delete- a function that deletes a hash table.
 * @ht: hash table.
 *
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *current;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			current = ptr;
			free(current->key);
			free(current->value);
			ptr = ptr->next;
			free(current);
		}
	}
	free(ht->array);
	free(ht);
}
