#include "lists.h"
/**
* dlistint_len - gets the length of a linked dlistint_t list
* @h: the head of the list
* Return: the length
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
