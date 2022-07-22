#include "lists.h"
/**
* free_dlistint - frees a dlistint_t list
* @head: first node of the list
* Return: void function
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	while (head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
