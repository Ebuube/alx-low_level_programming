```
ONWUTA EBUBE GIDEON
```
## Description of the files in this directory

The file dog.h is a C header file that defines a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *

The file 1-init_dog.c is a C function that initialize a variable of type struct dog

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

The file 2-print_dog.c is a C function that prints a struct dog

Prototype: void print_dog(struct dog *d);
Format: see example bellow
You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.

The file 4-new_dog.c is a C function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails

