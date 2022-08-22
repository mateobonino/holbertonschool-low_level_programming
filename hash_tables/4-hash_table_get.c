#include "hash_tables.h"
/**
* hash_table_get - retrieves a value associated with a key
* @ht: the hash table to look into
* @key: key you are looking for
* Return: NULL if it failed, otherwise, the key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *newNode = NULL;
	unsigned long int k = key_index((const unsigned char *)key, ht->size);

	if (!ht || !key || !ht->array || k > ht->size)
		return (NULL);
	newNode = ht->array[k];
	for (; newNode; newNode = newNode->next)
	{
		if (strcmp(key, newNode->key) == 0)
			return (newNode->value);
	}
	return (NULL);

}
