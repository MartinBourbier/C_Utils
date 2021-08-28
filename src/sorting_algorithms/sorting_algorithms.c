#include "../include/sorting_algorithms/sorting_algorithms.h"
#include "../include/data_structures/list.h"

#include <stdlib.h>

// HELPERS

static inline void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) 
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
 
        heapify(arr, n, largest);
    }
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    int L[n1], R[n2];
 
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// HELPERS END

void selection_sort(int list[], int len) {
    int min_idx;

    for (int i = 0; i < len - 1; i++) {
        min_idx = i;

        for (int j = i + 1; j < len; j++) {
            if (list[j] < list[min_idx]) {
                min_idx = j;
            }
        }

        swap(&list[min_idx], &list[i]);
    }
}

void bubble_sort(int list[], int len) {
    int swapped;

    for (int i = 0; i < len - 1; i++) {
        swapped = 0;

        for (int j = 0; j < len - i - 1; j++) {
            if (list[j] > list[j + 1]) {
                swap(&list[j], &list[j + 1]);
                swapped = 1;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

void insertion_sort(int list[], int len) {
    int key, j;

    for (int i = 1; i < len; i++) {
        key = list[i];
        j = i - 1;

        while (j >= 0 && list[j] > key) {
            list[j + 1] = list[j];
            j -= 1;
        }

        list[j + 1] = key;
    }
}

void merge_sort(int list[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
 
        merge_sort(list, l, m);
        merge_sort(list, m + 1, r);
 
        merge(list, l, m, r);
    }
}

void quick_sort(int list[], int low, int high) {
    if (low < high) {
        int pi = partition(list, low, high);

        quick_sort(list, low, pi - 1);
        quick_sort(list, pi + 1, high);
    }
}

void heap_sort(int list[], int len) {
    for (int i = len / 2 - 1; i >= 0; i--) {
        heapify(list, len, i);
    }

    for (int i = len - 1; i > 0; i--) {
        swap(&list[0], &list[i]);

        heapify(list, i, 0);
    }
}
