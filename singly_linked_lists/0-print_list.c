#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to head of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h)
    {
        if (h->str)
            printf("%s\n", h->str);
        else
            printf("(nil)\n");

        h = h->next;
        count++;
    }

    return (count);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to store in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new;

    new = malloc(sizeof(list_t));
    if (!new)
        return (NULL);

    new->str = strdup(str);
    if (!new->str)
    {
        free(new);
        return (NULL);
    }

    new->next = *head;
    *head = new;

    return (new);
}
