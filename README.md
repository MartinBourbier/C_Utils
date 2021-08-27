# C_Utils
A C Library Implementing Basic Data Structures.

# Copyright
This library is entierely free to use. Feel free to add it to your project of any kind and don't hesitate to create a ticket if you'd like anything to be added.

# Utilities

## Lists

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
    * This function frees the list's ````list``` memory.
    * A function ```free_method``` can be passed in to free every item from the list.