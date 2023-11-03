#include "hash_tables.h"

/**
 * hash_table_get - gets value of a key
 * @ht: the hash table
 * @key: the key.
 * Return: the value.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{hash_node_t *current;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	if (!ht->array[index])
		return (NULL);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);

}
