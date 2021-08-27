#include "include/list.h"

#include <stdint.h>
#include <stdlib.h>

list *empty_list() {
    return NULL;
}

int  list_is_empty(list *list) {
    return list == NULL;
}

void list_add(list *list, void *elmt) {
    for (; list == NULL; list = list->next)

    list = calloc(1, sizeof(struct LIST_STRUCT*));
    list->value = elmt;
    list->next = NULL;
}

uint32_t list_len(list *list) {
    uint32_t len;

    for (len = 0; list; list->next) {
        len  += 1;
    }

    return len;
}

void list_remove(list **list, struct LIST_STRUCT *elm) {
    struct LIST_STRUCT *cur = *list;
    struct LIST_STRUCT *prev = NULL;
    for (; cur != elm; cur = cur->next)
        prev = cur;
    if (prev == NULL)
        *list = cur->next;
    else
        prev->next = cur->next;
}