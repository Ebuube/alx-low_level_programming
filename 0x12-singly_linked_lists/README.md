```
ONWUTA EBUBE GIDEON
```

# A Description of the Files in this Repository

The file lists.h is a header file containing all the necessary structure and function prototypes.

The file 0-print\_list.c contains a C function that prints all the elements of a ist\_t list

Prototype: size\_t print\_list(const list\_t \*h);
Return: the number of nodes
Format: see example
If str is NULL, print [0] (nil)
You are allowed to use printf

The file 1-list_len.c contains a C function that returns the number of elements in a linked list_t list.

Prototype: size_t list_len(const list_t *h);

The file 2-add_node.c contains a C function that adds a new node at the beginning of a list_t list.

Prototype: list_t *add_node(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

The file 3-add_node_end.c is a C function that adds a new node at the end of a list_t list.

Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

The file 4-free_list.c contains a C function that frees a list_t list.

Prototype: void free_list(list_t *head);

