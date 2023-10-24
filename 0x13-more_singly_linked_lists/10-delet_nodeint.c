#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a specific index.
 * @head: A pointer to a pointer to the head of the linked list.
 * @index: The index of the node to delete. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	current = *head;
	while (i < index - 1)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
		i++;
	}

	if (current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
