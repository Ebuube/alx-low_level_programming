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

The file 5-free_listint2.c contains a C function that frees a listint_t list.

Prototype: void free_listint2(listint_t **head);
The function sets the head to NULL

The file 6-pop_listint.c contains a C function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

Prototype: int pop_listint(listint_t **head);
if the linked list is empty return 0

The file 7-get_nodeint.c contains a C function that returns the nth node of a listint_t linked list.

Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
where index is the index of the node, starting at 0
if the node does not exist, return NULL

The file 8-sum_listint.c contains a C  function that returns the sum of all the data (n) of a listint_t linked list.

Prototype: int sum_listint(listint_t *head);
if the list is empty, return 0

The file 9-insert_nodeint.c contains a C function that inserts a new node at a given position.

Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node and return NULL

The file 10-delete_nodeint.c contains a C function that deletes the node at index index of a listint_t linked list.

Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed

