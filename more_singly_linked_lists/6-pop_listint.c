#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t,
* and return the hean node's data (n)
* @head: the head node
* Return: the head node's data, if is empty, returns 0 (zero)
*/
int pop_listint(listint_t **head)
{
	listint_t *p;
	int nodeData;

	if (head == NULL)
	{
		return (0);
	}
	p = *head;
	nodeData = (*head)->n;
	*head = (*head)->next;
	return (nodeData);
}
