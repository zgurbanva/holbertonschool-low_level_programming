#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_s - singly linked list node
 * @str: string - malloc'ed string
 * @next: points to the next node
 */
typedef struct list_s
{
    char *str;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif 
