#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

/* STANDARD LIBRARIES */
#include <stdio.h>


/* PROTOYPES */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* AUXILLARY FUNCTIONS */
int roundup(float num);
int print_array(int *array, size_t size);
int isodd(int num);

#endif	/* _SEARCH_ALGOS_H_ */
