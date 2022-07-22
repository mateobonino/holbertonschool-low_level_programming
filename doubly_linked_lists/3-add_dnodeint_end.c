#include "lists.h"
/**
* add_dnodeint_end - adds a node at the end of a dlistint_t list
* @head: the first item of the list
* @n: the data of the node
* Return: the address of the element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *lastNode = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		while (lastNode != NULL && lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		newNode->prev = lastNode;
		lastNode->next = newNode;
	}
	return (newNode);
}
