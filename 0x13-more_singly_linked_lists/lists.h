#ifndef _LISTS_H
#define _LISTS_H


#include <stdio.h>


int _putchar(char c);

/**
 * struct listint_t - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


size_t print_listint(const listint_t *h);


#endif	/* _LISTS_H */
