# C_Utils
A C Library Implementing Basic Data Structures And Several Algorithms.

# Copyright
This library is entierely free to use. Feel free to add it to your project of any kind and don't hesitate to create a ticket if you'd like anything to be added.

# Data Structures

## Lists
Header Path : ```#include "include/data_structures/list.h"```

Functions : 
* ```list_T *init_list(int32_t item_size)```
    * This function is used to initialize a list. It returns a pointer to the newly created structure.
    * Sets the structure's parameters : 
        * Base values : ```list->length = 0```
                            ```list->items = (void *) 0```
        * The item size parameter is the size of the type of variables you want to store.

* ```void *list_append(list_T *list, void *item)```
    * This function appends (add to the end of the list) the element ```item``` to the list ```list```. It returns the item ```item``` passed as argument.
    * It fully handles memory allocation and structure's parameters modification like incrementing the list length.

* ```void list_shift_left(list_T *list, int index)```
    * This function is used to shift the list ```list``` once to the left starting at index ```index```.

* ```void list_remove(list_T *list, void *item, void (*free_method)(void *x))```
    * This function frees the item ```item``` from the list ```list```. A ```free_method``` function can be passed if to free the allocated memory address of said item.
    * If the item ```item``` is not found in the list, an error message is printed. /!\ BE CAREFUL ! The message printed if the item is not in the list is a printed message followed by a retrun statement, it is not outputed in the error stream !

* ```void list_free(list_T *list, void (*free_method)(void *x))```
    * This function frees the list's ```list``` memory.
    * A function ```free_method``` can be passed in to free every items from the list.

* ```void list_swap_values(list_T *list, int32_t i, int32_t j)```
    * This function swaps values at index ```i``` and ```j```.
    * If one value is out of range, prints an error and returns. /!\ BE CAREFUL ! The error is printed in the standard output and not in the error stream.

## Queues
Header Path : ```#include "include/data_structures/queue.h"```

Functions :
* ```queue_T *queue_empty(void)```
    * This function return ```NULL```, the empty queue.

* ```int queue_is_empty(queue_T *queue)```
    * Returns ```1``` if the queue ```queue``` is empty, ```0``` otherwise.

* ```queue_T *queue_push(queue_T *queue, void *x)```
    * This function pushes the value ```x``` into the queue ```queue```.
    * The parameter ```x``` can be any value of any type.

* ```void *queue_pop(queue_T **queue)```
    * This function pops (remove and return) the first value of the queue ```queue```.
    * /!\ BE CAREFUL ! The returned value is a void pointer (```(void *)```), the value can be of any type so make sure to adapt your code depending on the type of the value you are storing.

## Binary Trees
Header Path : ```#include "include/data_structures/tree.h"```

Functions :
* ```uint32_t tree_size(tree_T *tree)```
    * This function returns the size of the tree ```tree``` passed as an argument. 
    * The size of a tree is the number of nodes of the tree.

* ```int32_t tree_height(tree_T *tree)```
    * This function returns the height of the tree ```tree``` passed in argument.
    * The height of an empty tree is ```-1```. The size of the tree is the depth of it's deepest child.

* ```void tree_prefix_print(tree_T *tree)```
    * This function prints the tree ```tree``` nodes value in prefix order.

* ```void tree_breadth_print(tree_T *tree)```
    * This function prints the tree ```tree``` depending on the depth of the node.
    * /!\ BE CAREFUL ! The printing is really not ideal, so don't relate on this function to visualize the different links between a node an it's parent.

# Sorting Algorithms
All of the algorithms are located in the same header : ```#include "include/sorting_algorithms/sorting_algorithms.h"```

## Selection Sort
* ```void selection_sort(int list[], int len)```
    * Takes a list of int ```list``` and it's length ```len```.