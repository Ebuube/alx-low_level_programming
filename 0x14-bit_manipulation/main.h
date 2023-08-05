#ifndef _MY_MAIN_H
#define _MY_MAIN_H

#include <stdio.h>


/* my bit manipulating macros: num is the number to work on */
/* pos is the required position of the bit in num */
/* val is the bit value to set at pos */
#define _getBit(num, pos)	((num) >> (pos) & 1)
#define _setBit(num, pos, val)	((num) | (1 << (pos)))
#define _clearBit(num, pos)	((num) & (~(1 << (pos))))

/**
 * data_t - Typedef for unsigned long int;
 */
typedef unsigned long int data_t;


int _putchar(char c);

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);


#endif	/* _MY_MAIN_H */
