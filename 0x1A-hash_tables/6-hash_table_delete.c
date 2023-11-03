#include "hash_tables.h"
/**
 * hash_table_delete - it deletes a hash table.
 * @ht: ptr to hash table.
 * Return: nothing.
*/
void hash_table_delete(hash_table_t *ht)
{unsigned long int i;
	hash_node_t *current, *temp;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			temp = current->next;
			free_node(current);
			current = temp;
		}
	}
	free(ht->array);
	free(ht);
}
