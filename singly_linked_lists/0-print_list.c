#include "lists.h"

size_t print_list(const list_t *h)
{
	int i, amount = 0;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", i, "(nil)");
		}
		else
		{
			i = strlen(h->str);
			printf("[%d] %s\n", i, h->str);
		}
		h = h->next;
		amount++;

	}
	return (amount);
}
