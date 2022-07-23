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
	dlistint_t *temp = NULL, *aux = *head;
	unsigned int count = 0, len = dlistint_len(*head);

	if (*head == NULL || index > len)
		return (-1);
	if (!index)
	{
		temp = *head;
		*head = (*head)->next;
		if (len != 1)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (count <= index - 1)
	{
		aux = aux->next;
		count++;
	}
	aux->prev->next = aux->next;
	if (index != len - 1)
		aux->next->prev = aux->prev;
	free(aux);
	return (1);
}
