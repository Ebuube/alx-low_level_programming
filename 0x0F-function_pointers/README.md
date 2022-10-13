```
ONWUTA EBUBE GIDEON
```
## Description of the files in the this directory

The file 0-print_name contains a C function that prints a name.

Prototype: void print_name(char *name, void (*f)(char *));

The file 1-array_iterator.c contains a C function that executes a function given as a parameter on each element of an array.

Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
where size is the size of the array
and action is a pointer to the function you need to use

The file 2-int_index.c contains a C function that searches for an integer.

Prototype: int int_index(int *array, int size, int (*cmp)(int));
where size is the number of elements in the array array
cmp is a pointer to the function to be used to compare values
int_index returns the index of the first element for which the cmp function does not return 0
If no element matches, return -1
If size <= 0, return -1

