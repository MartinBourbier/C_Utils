#ifndef TREE_H
#define TREE_H

#include <stdint.h>

typedef struct TREE_STRUCT {
    struct TREE_STRUCT *left;
    struct TREE_STRUCT *right;
    int                 key;
} tree_T;

uint32_t tree_size(tree_T *tree);

int32_t tree_height(tree_T *tree);

void tree_prefix_print(tree_T *tree);

void tree_breadth_print(tree_T *tree);

#endif