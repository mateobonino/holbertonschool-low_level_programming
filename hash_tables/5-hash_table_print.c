#include "hash_tables.h"
/**
* hash_table_print - prints a hash table
* @ht: the hash table
* Return: void func
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, comma = 0;
	hash_node_t *node = NULL;

	if (!ht)
		return;
	printf("{");
	node = ht->array[i];
	while (ht && i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			comma = 1;
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}
