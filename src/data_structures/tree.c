#include "../include/data_structures/tree.h"
#include "../include/data_structures/queue.h"

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

uint32_t tree_size(tree_T *tree) {
    if (tree == NULL)
        return 0;
    
    return 1 + tree_size(tree->left) + tree_size(tree->right);
}

static inline int max(int32_t a, int32_t b) 
{
    return a > b ? a : b;
}

int32_t tree_height(tree_T *tree) {
    if (tree == NULL) 
        return -1;

    return 1 + max(tree_height(tree->left), 
                   tree_height(tree->right));
}

void tree_prefix_print(tree_T *tree) {
    if (tree) {
        printf("%d; ", tree->key);
        tree_prefix_print(tree->left);
        tree_prefix_print(tree->right);
    }
}

void tree_breadth_print(tree_T *tree) {
    if (tree) {
        queue_T *queue = queue_empty();
        queue          = queue_push(queue, tree);
        queue          = queue_push(queue, NULL);

        do
        {
            tree = queue_pop(&queue);

            if (tree == NULL) {
                printf("\n");

                if (!queue_is_empty(queue)) {
                    queue = queue_push(queue, NULL);
                }
            }
            else {
                printf("%d ", tree->key);

                if (tree->left) {
                    queue = queue_push(queue, tree->left);
                }

                if (tree->right) {
                    queue = queue_push(queue, tree->right);
                }
            }
        } while (!queue_is_empty(queue));
        
    }
}

void print2DUtil(tree_T *tree, int space) {
    if (tree == NULL) {
        return;
    }

    space += COUNT;

    print2DUtil(tree->right, space);

    printf("\n");
    
    for (int i = 10; i < space; i++) {
        printf(" ");
    }

    printf("%d\n", tree->key);

    print2DUtil(tree->left, space);
}

void print2D(tree_T *tree) {
    print2DUtil(tree, 0);
    printf("\n");
}