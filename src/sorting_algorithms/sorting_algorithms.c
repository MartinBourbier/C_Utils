#include "../include/sorting_algorithms/sorting_algorithms.h"
#include "../include/data_structures/list.h"

#include <stdlib.h>

int minimum(list_T *list, int d, int f) {
    int *min1 = (int *)list->items[d];
    int min2 = d;

    for (int i = d + 1; i < f + 1; i++) {
        if (min1 >= min2) {
            min2 = i;
            min1 = list->items[i];
        }
    }

    return min2;
}

void selection_sort(list_T *list) {
    for (int i = 0; i < list->length; i++) {
        int min = minimum(list, i, list->length - 1);
        int tmp = list->items[i];
        list->items[i] = list->items[min];
        list->items[min] = tmp;
    }
}

/*void selection_sort(list_T *list) {
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
}*/

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
