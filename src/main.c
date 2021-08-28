#include "include/data_structures/list.h"
#include "include/sorting_algorithms/sorting_algorithms.h"

#include <stdio.h>
#include <stdlib.h>

void print_array(int arr[], int n) {
    printf("{ ");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ",  arr[i]);
    }

    printf("}\n");
}

int main() {
    printf("\033[0;32m"); // Makes the next printf's content Green.
    printf("[C_Utils]: Welcome!\n");

    return EXIT_SUCCESS;
}