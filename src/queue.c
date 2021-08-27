#include "include/queue.h"

#include <stdlib.h>

queue_T *queue_empty(void) {
    return NULL;
}

int queue_is_empty(queue_T *queue) {
    return queue == NULL;
}

queue_T *queue_push(queue_T *queue, void *x) {
    queue_T *tmp = calloc(1, sizeof (struct QUEUE_STRUCT));
    tmp->value = x;

    if (queue) {
        tmp->next = queue->next;
        queue->next = tmp;
    }
    else {
        tmp->next = tmp;
    }

    return tmp;
}

void *queue_pop(queue_T **queue) {
    queue_T *tmp = (*queue)->next;
    void    *x   = tmp->value;

    if (tmp == tmp->next) {
        *queue = NULL;
    }
    else {
        (*queue)->next = tmp->next;
    }

    free(tmp);
    return x;
}