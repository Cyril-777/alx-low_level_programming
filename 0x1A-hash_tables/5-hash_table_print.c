#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	int hhh = 1;
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			if (!hhh)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			hhh = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
