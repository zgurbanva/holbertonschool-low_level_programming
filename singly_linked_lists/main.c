#include "lists.h"
#include <stdio.h>

/**
 * main - test add_node function
 *
 * Return: Always 0
 */
int main(void)
{
	list_t *head = NULL;

	add_node(&head, "Hello");
	add_node(&head, "World");

	while (head)
	{
		printf("%s [%u]\n", head->str, head->len);
		head = head->next;
	}

	return (0);
}
