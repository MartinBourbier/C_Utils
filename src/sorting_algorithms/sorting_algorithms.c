#include "../include/sorting_algorithms/sorting_algorithms.h"
#include "../include/data_structures/list.h"

#include <stdlib.h>

void selection_sort(list_T *list) {
    // n = length

    int32_t min_idx;

    for (int32_t i = 0; i < list->length; i++)
    {
        min_idx = i;

        for (int32_t j = i + 1; j < list->length; j++) {
            if (list->items[j] < list->items[min_idx]){
                min_idx = j;
            }
        }

        list_swap_values(list, min_idx, i);
    }
}

void bubble_sort(list_T *list) {
    for (int32_t i = 0; i < list->length - 1; i++)
    {
        for (int32_t j = 0; j < list->length - i - 1; j++) {
            if ((int32_t *)list->items[j] > (int32_t *)list->items[j + 1]) {
                list_swap_values(list, j, j + 1);
            }
        }
    }
    
}

void insertion_sort(list_T *list);

void merge_sort(list_T *list);

void quick_sort(list_T *list);

void heap_sort(list_T *list);
