#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t,
* and return the hean node's data (n)
* @head: the head node
* Return: the head node's data, if is empty, returns 0 (zero)
*/
int pop_listint(listint_t **head)
{
	listint_t ptrToFree;
	int nodeData;

	if (head == NULL)
	{
		return (0);
	}
	ptrToFree = *head;
	nodeData = (*head)->n;
	*head = (*head)->next;
	free(ptrToFree);
	return (nodeData);
}
