#include "include/list.h"

#include <stdio.h>

int main() {
    list *list = empty_list();

    list_add(list, (void *) "Hello");
    //list_add(list, (void *) "World");

    printf("%d\n", list_len(list));
    return 0;
}