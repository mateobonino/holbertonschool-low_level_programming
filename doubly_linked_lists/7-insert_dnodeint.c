#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a node at a given position
* @h: the list items
* @idx: the index
* @n: the node data
* Return: the address of the node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp = *h;
	unsigned int cnt = 0, len = list_len(*h);

	if (*h == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	if (idx > len)
	{
		free(newNode);
		return (NULL);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == len)
		return (add_dnodeint_end(h, n));
	while (cnt != idx - 1)
	{
		temp = temp->next;
		cnt++;
	}
	newNode->prev = temp;
	newNode->n = n;
	newNode->next = temp->next;
	temp->next->prev = newNode;
	temp->next = newNode;
	return (newNode);
}
/**
* list_len - gets the length of a list
* @h: the list
* Return: the length
*/
size_t list_len(const dlistint_t *h)
{
	int count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
