#include "lists.h"
/**
* delete_dnodeint_at_index - deletes the node at index of a linked list
* @head: the first item of the list
* @index: the index of the node that should be deleted
* Return: 1 if succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;
	if (*head == NULL)
		return (-1);
	if (!index)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		if (!temp)
			temp->prev = NULL;
		return (1);
	}
	while (count < index - 1)
	{
		temp = temp->next;
		count++;
	}
	if (!temp || !temp->next)
		return (-1);
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
