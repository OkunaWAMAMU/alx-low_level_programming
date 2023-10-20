#include "lists.h"
/**
  *list_len-connected
  *@h: member
  *Return: always 0
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		count++;
	}
	return (count);
}
