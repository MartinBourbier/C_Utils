# C_Utils
A C Library Implementing Basic Data Structures.

# Copyright
This library is entierely free to use. Feel free to add it to your project of any kind and don't hesitate to create a ticket if you'd like anything to be added.

# Utilities

## Lists

Functions : 
    1. ```list_T *init_list(int32_t item_size)```
        1.1 This function is used to initialize a list. It returns a pointer to the newly created structure
        1.2 Allocates memory space for the structure.
        1.3 Sets the structure's parameters : 
            1.3.1 Base values : ```list->length = 0```
                                ```list->items = (void *) 0```
            1.3.2 The item size parameter is the size of the type of variables you want to store.