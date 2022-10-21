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

The file 1-list\_len.c contains a C function that returns the number of elements in a linked list\_t list.

Prototype: size\_t list\_len(const list\_t \*h);

The file 2-add\_node.c contains a C function that adds a new node at the beginning of a list\_t list.

Prototype: list\_t \*add\_node(list\_t \*\*head, const char \*str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

The file 3-add\_node\_end.c is a C function that adds a new node at the end of a list\_t list.

Prototype: list\_t \*add\_node\_end(list\_t \*\*head, const char \*str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

The file 4-free\_list.c contains a C function that frees a list\_t list.

Prototype: void free\_list(list\_t \*head);

The file 100-first.c contains a C function that prints "You're beat! and yet, you must allow,\nI bore my house upon my back!\n" before the main function is executed.
* You are allowed to use the printf function.

The file 101-hello\_holberton.asm is a 64\-bit program in assembly that prints "Hello, Holberton", followed by a new line.
* You are only allowed to use the printf function
* You are not allowed to use interrupts
* Your program will be compiled using nasm and gcc

