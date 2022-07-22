#include "lists.h"
/**
* add_dnodeint - adds a new node at the beggining of a dlistint_t list
* @head: the head of the node
* @n: the node nada
* Return: the adress of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
		(*head)->prev = newNode;
	*head = newNode;
	return (newNode);
}
