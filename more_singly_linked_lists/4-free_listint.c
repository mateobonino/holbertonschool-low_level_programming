#include "lists.h"
/**
* free_listint - frees a list
* @head: the head of each element
*/
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
