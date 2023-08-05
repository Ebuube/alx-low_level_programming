#ifndef _BITS_H
#define _BITS_H

#include <stdio.h>


/* my bit manipulating macros: num is the number to work on */
/* pos is the required position of the bit in num */
/* val is the bit value to set at pos */
#define _getBit(num, pos)	(((num) >> ((pos) - 1)) & 1)
#define _setBit(num, pos, val)	((num) | (1 << ((pos) - 1)))
#define _clearBit(num, pos)	((num) & (~(1 << ((pos) - 1))))


#endif	/* _BITS_H */
