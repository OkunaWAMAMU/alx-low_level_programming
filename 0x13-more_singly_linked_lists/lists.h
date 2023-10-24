#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* Function prototype for reversing a linked list */
size_t print_listint(const listint_t *h);
/*Function prototype for Returns the number of elements in a listint_t list.*/
size_t listint_len(const listint_t *h);
/*Function prototype for  adding a new node at the beginning of a listint_t list.*/
listint_t *add_nodeint(listint_t **head, const int n);
#endif
