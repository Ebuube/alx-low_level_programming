```
ONWUTA EBUBE GIDEON
```
# Description of the files and functions in this directory

The file lists.h is the header file and contains the data structure (s) and function prototypes required for this project


The file 0-print_listint.c contains a C that prints all the elements of a listint_t list.

Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes
Format: see example
You are allowed to use printf

The file 1-listint_len.c contains a C function that returns the number of elements in a linked listint_t list.

Prototype: size_t listint_len(const listint_t *h);

The file 2-add_nodeint.c contains a C function that adds a new node at the beginning of a listint_t list.

Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

The file 3-add_nodeint_end.c contains a C function that adds a new node at the end of a listint_t list.

Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

The file 4-free_listint.c contains a C function that frees a listint_t list.

Prototype: void free_listint(listint_t *head);

