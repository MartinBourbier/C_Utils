#include "include/data_structures/list.h"
#include "include/data_structures/tree.h"
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

    /*tree_T *tree = calloc(1, sizeof (struct TREE_STRUCT));
    tree->key = 0;

    tree->left = calloc(1, sizeof (struct TREE_STRUCT));
    tree->left->key = 1;

    tree->right = calloc(1, sizeof (struct TREE_STRUCT));
    tree->right->key = 2;

    tree->left->left = calloc(1, sizeof (struct TREE_STRUCT));
    tree->left->left->key = 3;

    tree->left->right = calloc(1, sizeof (struct TREE_STRUCT));
    tree->left->right->key = 4;

    tree->right->left = calloc(1, sizeof (struct TREE_STRUCT));
    tree->right->left->key = 5;

    tree->right->right = calloc(1, sizeof (struct TREE_STRUCT));
    tree->right->right->key = 6;

    print2D(tree);*/

    return EXIT_SUCCESS;
}