#include "lists.h"
/**
* *add_node_end - adds node to the end of the list
* @head: the list first item
* @str: the item to add
*Return: the list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	char *node;
	list_t *newNode, *isLast = *head;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	node = strdup(str);
	if (node == NULL)
	{
		free(newNode);
		free(node);
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	newNode->str = node;
	newNode->next = NULL;
	newNode->len = i;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (isLast != NULL && isLast->next != NULL)
		{
			isLast = isLast->next;
		}
		isLast->next = newNode;
	}
	return (*head);
}
