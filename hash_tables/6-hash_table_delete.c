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

	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k])
		{
			node = ht->array[k];
			while (node)
			{
				temp = node;
				node = node->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				node = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
