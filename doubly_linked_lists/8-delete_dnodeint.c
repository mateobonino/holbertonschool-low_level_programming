#include "lists.h"
/**
* delete_dnodeint_at_index - deletes the node at index of a linked list
* @head: the first item of the list
* @index: the index of the node that should be deleted
* Return: 1 if succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *aux;
	unsigned int count = 0;
	if (*head == NULL)
		return (-1);
	if (!index)
	{
		*head = temp->next;
		temp->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp && count < index - 1)
	{
		temp = temp->next;
		count++;
	}
	if (!temp || !temp->next)
		return (-1);
	aux = temp->next->next;
	free(temp->next);
	temp->next = aux;
	return (1);
}
