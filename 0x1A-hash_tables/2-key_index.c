#include "hash_tables.h"
/**
 * key_index- A function that uses the hash_djb2 function.
 * @key: key to hash.
 * @size: size of the array of the hash table.
 *
 * Return: converted index.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ans;

	ans = hash_djb2(key);
	return (ans % size);
}
