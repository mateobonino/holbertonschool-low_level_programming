#include "hash_tables.h"
/**
* key_index - gives you the index of a key
* @key: the key
* @size: the array size
* Return: the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int djb2_ret = hash_djb2(key);

	return (djb2_ret % size);
}
