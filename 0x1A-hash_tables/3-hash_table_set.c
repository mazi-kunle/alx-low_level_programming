#include "hash_tables.h"
/**
 * hash_table_set- A function that adds an element to the hash table.
 * @ht: hash table to add key/value to.
 * @key: key.
 * @value: value.
 *
 * Return: int.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (strcmp(key, "") == 0)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = (char *)key;
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		return (0);
	}
	if (ht->array[index])
	{
		new_node->next = ht->array[index];
	}
	else
	{
		new_node->next = NULL;
	}
	ht->array[index] = new_node;
	return (1);
}
