#include "lists.h"
/**
* delete_nodeint_at_index - deletes the node at index of a list
* @head: the items of the list
* @index: the indez of the node
* Return: 1 if succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *deletedNode = NULL, *temp = *head;

	if (index == 0)
	{
		if (*head)
		{
			*head = (*head)->next;
			free(temp);
			return (1);
		}
		return (-1);
	}
	while (i < index - 1)
	{
		if (temp == NULL && temp->next == NULL)
		{
			return (-1);
		}
		temp = temp->next;
		i++;
	}
	deletedNode = temp->next;
	temp->next = deletedNode->next;
	free(deletedNode);
	return (1);
}
