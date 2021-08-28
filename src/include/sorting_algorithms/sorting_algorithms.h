#ifndef SORTING_ALGORITHMS_H
#define SORTING_ALGORITHMS_H

#include "../data_structures/list.h"

void selection_sort(int list[], int len);

void bubble_sort(int list[], int len);

void insertion_sort(int list[], int len);

void merge_sort(int list[], int l, int r);

void quick_sort(int list[], int low, int high);

void heap_sort(int list[], int len);

#endif