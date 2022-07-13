#include "lists.h"
/**
* free_list - frees a list
* @head: the list
*Return: void function
*/
void free_list(list_t *head)
{
	list_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p->str);
		free(p);
	}
}
