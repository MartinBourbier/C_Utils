#ifndef LIST_H
#define LIST_H

#include <stdint.h>

typedef struct DYNAMIC_LIST_STRUCT {
	int32_t item_size;
	int32_t length;
	void **items;
} list_T;

list_T *init_list(int32_t item_size);

void *list_append(list_T *list, void *item);

void list_shift_left(list_T *list, int32_t index);

void list_remove(list_T *list, void *item, void (*free_method)(void *x));

void list_free(list_T *list, void (*free_method)(void *x));

void list_swap_values(list_T *list, int32_t i, int32_t j);

#endif
