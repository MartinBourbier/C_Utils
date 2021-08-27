#ifndef QUEUE_H
#define QUEUE_H

typedef struct QUEUE_STRUCT {
    struct QUEUE_STRUCT *next;
    void                *value;
} queue_T;

queue_T *queue_empty(void);

int queue_is_empty(queue_T *queue);

queue_T *queue_push(queue_T *queue, void *x);

void *queue_pop(queue_T **queue);

#endif