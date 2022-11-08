#ifndef _MY_MAIN_H
#define _MY_MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);


#endif	/* _MY_MAIN_H */
