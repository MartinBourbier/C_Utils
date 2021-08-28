#include "../include/sorting_algorithms/sorting_algorithms.h"
#include "../include/data_structures/list.h"

#include <stdlib.h>

int minimum (int list[], int d, int f) {
    int min1 = list[d];
    int min2 = d;
    for (int i = d+1; i < f+1; i++){
        if (min1 >= list[i]){
            min2 = i;
            min1 = list[i];
        }
    }
    return min2;
}

void selection_sort(int list[], int len) {
    int tmp;
    for (int i = 0; i < len; i++){
        int min = minimum(list, i, len - 1);
        int tmp = list[i];
        list[i] = list[min];
        list[min] = tmp;
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
