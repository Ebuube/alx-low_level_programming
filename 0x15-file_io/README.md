```
ONWUTA EBUBE GIDEON
```
# This File Contains a Description of The Files in This Directory

The main.h is a header file that contains all the function prototypes and the neccessary data structures (if any) for the functions here

The file 0-read\_textfile.c contains a C function that reads a text file and prints it to POSIX standard output.
Prototype: ssize\_t read\_textfile(const char \*filename, size\_t letters);
Where letters is the number of letters it should read and print
returns the actual number of letters it should read and print
if the file can not be opened or read, return 0
if filename is NULL return 0
if write fails or does not write the expected amount of bytes, return 0

The file 1-create\_file.c contains a C function that creates a text file
Prototype: `int create\_file(const char \*filename, char \*text\_content);`
where `filename` is the name of the file to create and `text\_content` is a NULL terminated string to write to the file
Returns:; `1` on success, `-1` on failure (file can not be created, file can not be written, `write` "fails", etc...)
The created file must have those permissions: `rw-------`, if the file already exists do not change the permissions.
if the file already exists, truncate it
if the `filename` is `NULL` return `-1`
if `text_content` is `NULL` create an empty file


