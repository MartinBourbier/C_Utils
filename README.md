# C_Utils
A C Library Implementing Basic Data Structures and several algorithms

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