#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t linked list
 * @head: Pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
