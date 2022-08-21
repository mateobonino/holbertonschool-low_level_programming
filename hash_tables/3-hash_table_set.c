#include "hash_tables.h"
/**
* hash_table_set - adds an element to the hash table
* @ht: the hash table element to add or update the key/value to
* @key: the key
* @value: the value associated with key
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode = NULL;
	char *keyDup = NULL, *valDup = NULL;
	unsigned int k = key_index((const unsigned char *)key, ht->size), i = 0;

	if (ht != NULL && key != NULL)
	{
		newNode = malloc(sizeof(hash_node_t));
		if (!newNode)
			return (0);
		keyDup = strdup(key);
		valDup = strdup(value);
		if (!keyDup || !valDup)
		{
			if (keyDup)
				free(keyDup);
			if (valDup)
				free(valDup);
			free(newNode);
			return (0);
		}
		newNode->value = valDup;
		newNode->key = keyDup;
		i = k;
		while (ht->array[i])
		{
			if (strcmp(ht->array[i]->key, keyDup) == 0)
			{
				free(ht->array[i]->value);
				free(newNode->key);
				ht->array[i]->value = valDup;
				free(newNode);
				return (1);
			}
			i++;
		}
		newNode->next = ht->array[k];
		ht->array[k] = newNode;
		return (1);
	}
	return (0);
}
