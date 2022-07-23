#include "lists.h"
#include "1-dlistint_len.c"
/**
* delete_dnodeint_at_index - deletes the node at index of a linked list
* @head: the first item of the list
* @index: the index of the node that should be deleted
* Return: 1 if succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0, len = dlistint_len(*head);

	if (!*head || len > index)
		return (-1);
	while (count < index)
	{
		temp = temp->next;
	}

	if (index == 0)
	{
		*head = temp->next;
		if (!*head)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (!temp->next)
			temp->next->prev = temp->prev;
	}
	return (1);
}
