#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen - returns length of a string
 * @s: input string
 * Return: length of string
 */
unsigned int _strlen(const char *s)
{
    unsigned int i = 0;

    while (s && s[i])
        i++;
    return (i);
}

/**
 * add_node - adds a new node at the beginning of list_t
 * @head: pointer to pointer to head
 * @str: string to store in node
 * Return: pointer to new node
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

    new->len = _strlen(str);
    new->next = *head;
    *head = new;

    return (new);
}

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h)
    {
        if (h->str)
            printf("[%u] %s\n", h->len, h->str);
        else
            printf("[0] (nil)\n");

        h = h->next;
        count++;
    }

    return (count);
}
