#ifndef _MY_UTILITY_H
#define _MY_UTILITY_H

#include <stdio.h>
#include <string.h>

#define _todigit(c)	((c) - '0')
#define _isbin(c)	((((c) == '1') || ((c) == '0')) ? 1 : 0)

char *_rev_str(const char *str);


#endif	/* _MY_UTILITY_H */
