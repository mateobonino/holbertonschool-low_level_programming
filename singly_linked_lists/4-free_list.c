#include "lists.h"

void free_list(list_t *head)
{
	list_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
