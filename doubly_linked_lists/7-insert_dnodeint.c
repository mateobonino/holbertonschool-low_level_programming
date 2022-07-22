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
	unsigned int cnt = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h , n));
	}
	while (cnt < idx - 1)
	{
		if (temp == NULL || temp->next == NULL)
		{
			free(newNode);
			return (NULL);
		}
		temp = temp->next;
		cnt++;
	}
	newNode->next = temp->next;
	newNode->prev = temp;
	if (temp ->next == NULL)
		temp->next = newNode;
	else
		temp->next->prev = newNode;
	return (newNode);
}
