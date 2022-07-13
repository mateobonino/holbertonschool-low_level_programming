#include "lists.h"
/**
* list_len - returns the length of a list
* @h: the length
*Return: the length of the list
*
*/
size_t list_len(const list_t *h)
{
	int i, len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
