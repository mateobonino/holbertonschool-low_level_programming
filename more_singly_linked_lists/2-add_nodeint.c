#include "lists.h"
/**
* add_nodeint - adds a node of type int to a list
* @head: the first item of the list
* @n: the int node
*Return: the address of the new elements
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);

}
