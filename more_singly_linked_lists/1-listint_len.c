#include "lists.h"
/**
* listint_len - returns the length of a list
* @h: the list
*Return: the length
*
*/
size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
