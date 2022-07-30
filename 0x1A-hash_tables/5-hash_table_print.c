#include "hash_tables.h"
/**
 * hash_table_print- a function that prints a hash table.
 * @ht: hash table.
 *
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;
	short int flag;

	flag = 0;
	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				ptr = ht->array[i];
				while (ptr != NULL)
				{
					if (flag)
					{
						printf(", ");
					}
			 printf("'%s': '%s'", ptr->key, ptr->value);
					if (flag == 0)
					{
						flag = 1;
					}
					ptr = ptr->next;
				}
			}
		}
		printf("}\n");
	}
}
