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
	unsigned int cnt = 0, len = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL || *h == NULL)
	{
		free(newNode);
		return (NULL);
	}
	while (h != NULL)
	{
		*h = (*h)->next;
		len++;
	}

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == len)
		return (add_dnodeint_end(h, n));
	while (cnt != idx - 1)
	{
		if (temp == NULL || temp->next == NULL)
		{
			free(newNode);
			return (NULL);
		}
		temp = temp->next;
		cnt++;
	}
	temp->next->prev = newNode;
	temp->next = newNode;
	newNode->prev = temp;
	newNode->n = n;
	newNode->next = temp->next;
	return (newNode);
}
