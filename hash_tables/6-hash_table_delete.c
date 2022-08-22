#include "hash_tables.h"
/**
* hash_table_delete - deletes a hash table
* @ht: the hash table
* Return: void func
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int k = 0;
	hash_node_t *node = NULL, *temp = NULL;

	if (!ht)
		return;
	for (k = 0; k < ht->size; k++)
	{
		node = ht->array[k];
		while (node)
		{
			temp = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			node = temp;
		}
	}
	free(ht->array);
	free(ht);
}
