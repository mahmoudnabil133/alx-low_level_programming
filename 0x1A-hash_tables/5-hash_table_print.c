#include "hash_tables.h"
/**
 * hash_table_print - it print a HT.
 * @ht: ptr to hash.
*/
void hash_table_print(const hash_table_t *ht)
{unsigned long int i, x = 0;
    hash_node_t *current;

    if (!ht)
        return;
    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];
        while(current)
        {
            if (x == 1)
                printf(", ");
            printf("\'%s\': \'%s\'", current->key, current->value);
            current = current->next;
            x = 1;
        }
    }
    printf("}\n");

}
