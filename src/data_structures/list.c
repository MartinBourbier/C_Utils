#include "../include/data_structures/list.h"

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

list_T *init_list(int32_t item_size) {
    list_T *list    = calloc(1, sizeof(struct DYNAMIC_LIST_STRUCT));
    list->item_size = item_size;
    list->length    = 0;
    list->items     = (void *) 0;

    return list;
}

void *list_append(list_T *list, void *item) {
	list->length += 1;

	if (list->items == (void *) 0) {
		list->items = calloc(list->length, list->item_size);
	}
	else {
		list->items = realloc(list->items, list->length * list->item_size);
	}

	list->items[list->length - 1] = item;

	return item;
}

void list_shift_left(list_T *list, int index) {
	for (int32_t i = index; i < list->length - 1; ++i)
	{
		list->items[i] = list->items[i + 1];
	}
}

void list_remove(list_T *list, void *item, void (*free_method)(void *x)) {
	int32_t index = -1;

	for (int32_t i = 0; i < list->length; ++i)
	{
		if (list->items[i] == item) {
			index = i;
			break;
		}
	}

	if (index == -1) {
		printf("[List remove]: Could not find specified item.\n");
		return;
	}

	list_shift_left(list, index);

	if (free_method) free_method(item);

	list->length -= 1;
	list->items = realloc(list->items, list->length * list->item_size);
}

void list_free(list_T *list, void (*free_method)(void *x)) {
	if (free_method) {
        for (int32_t i = 0; i < list->length; ++i) {
		free_method(list->items[i]);
	    }
    }

	free(list->items);
	free(list);
}
