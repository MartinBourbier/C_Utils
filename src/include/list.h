#ifndef LIST_H
#define LIST_H

#include <stdint.h>

typedef struct LIST_STRUCT {
    struct LIST_STRUCT *next;
    void               *value;
} list;

list *empty_list();

int list_is_empty(list *list);

void list_add(list *list, void *elmt);

uint32_t list_len(list *list);

void list_remove(list **list, struct LIST_STRUCT *elm);

#endif