#include "lists.h"
/**
  *add_node-works betty
  *@head:-data
  *@str:- work too
  *Return: alwys 0 (succces)
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = 0;

	while (str[new_node->len] != '\0')
	{
		new_node->len++;
	}
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}
