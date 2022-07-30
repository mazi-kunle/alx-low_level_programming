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
	hash_node_t *new_node, *node;

	if (strcmp(key, "") == 0 || ht == NULL)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	new_node = create_node(key, value);

	if (new_node == NULL)
	{
		return (0);
	}
	node = ht->array[index];

	/*if new_node is the first, create a linked list*/
	if (node == NULL)
	{
		ht->array[index] = new_node;
		printf("%s : %s\n", new_node->key, new_node->value);
		return (1);
	}
	/*if key exists, replace it*/
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	/*handle collison*/
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	printf("%s: %s\n", new_node->value, new_node->next->value);
	return (1);
}

/**
 * create_node- create new node.
 * @key: key cannot be an empty string.
 * @value: value associated with Key, value must be duplicated.
 *
 * Return: new_node.
*/
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *ptr;

	ptr = malloc(sizeof(hash_node_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->key = (char *)strdup(key);
	ptr->value = strdup(value);
	ptr->next = NULL;
	return (ptr);
}
