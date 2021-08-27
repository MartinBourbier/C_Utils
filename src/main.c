#include "include/data_structures/list.h"
#include "include/sorting_algorithms/sorting_algorithms.h"

#include <stdio.h>
#include <stdlib.h>

void print_array(list_T *list) {
    printf("{ ");
    for (size_t i = 0; i < list->length; i++)
    {
        printf("%d ", (int32_t *) list->items[i]);
    }

    printf("}\n");
}

int main() {
    printf("\033[0;32m"); // Makes the next printf's content Green.
    printf("[C_Utils]: Welcome!\n");

    list_T *list = init_list(sizeof (int32_t));

    list_append(list, (void *) 8);
    list_append(list, (void *) 5);
    list_append(list, (void *) 0);
    list_append(list, (void *) 2);

    printf("%d\n", list->length);

    print_array(list);

    selection_sort(list);

    print_array(list);

    return 0;
}