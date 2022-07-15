#include "lists.h"
/**
* insert_nodeint_at_index - inserts a node at a given position
* @head: the items of the list
* @idx: the index to find the position
* @n: the node data
* Return: the adress of the node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp = *head;
	unsigned int cnt = 0;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = temp;
		*head = newNode;
		return (newNode);
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
	temp->next = newNode;
	return (newNode);

}
