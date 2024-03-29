#include "hash_tables.h"
/**
* hash_table_create - creates a hash table
* @size: the size of the table
* Return: a pointer to the table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr = 0;

	ptr = malloc(sizeof(hash_table_t));
	if (!ptr)
		return (NULL);
	ptr->size = size;
	ptr->array = malloc(sizeof(hash_node_t *) * size);
	if (!ptr->array)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
