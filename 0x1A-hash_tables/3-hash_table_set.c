#include "hash_tables.h"
/**
 * free_node - it frees a node
 * @node: node will be freed
 * Return: nothing
*/

void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
/**
 * hash_table_set - set a key.
 * @ht: ptr to hash table.
 * @key: key str.
 * @value: value str
 * Return: int
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (!ht || !key || strcmp(key, "") == 0)
		return (0);
	hash_node_t *node, *current;
	unsigned long int index;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup((char *)key);
	node->value = strdup((char *)value);
	node->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);

	if (!ht->array[index])
		ht->array[index] = node;
	else
	{
		current = ht->array[index];
		if (strcmp(current->key, key) == 0)
		{
			node->next = current->next;
			ht->array[index] = node;
			free_node(current);
			return (1);
		}
		while (current->next && strcmp(current->next->key, key))
			current = current->next;
		if (strcmp(current->next->key, key) == 0)
		{
			node->next = current->next->next;
			current->next = node;
			free_node(current->next);
		}
		else
		{
			node->next = ht->array[index];
			ht->array[index] = node;
		}
	}
	return (1);
}
