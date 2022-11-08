#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define UNUSED __attribute__((unused))
#define BUFSIZE 1024

void cp_file(int fd_from, int fd_to, char *argv[]);

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: if incorrect number of arguments, exits with code 97
 * if file_to already exists, it will be truncated
 * if file_from doesn't exist or can't be read from, exits with code 98
 * if file_to cannot be created or written to, exits with code 99
 * if a file descriptor could not be closed, exits with code 100
 * Permissions of the created file: rw-rw-r--.
 * if file_to exist, the permissions will not be changed
 * Return: 0 if successfull
 */
int main(UNUSED int argc, UNUSED char *argv[])
{
	int fd_from = 0, fd_to = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can\'t read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can\'t write to %s\n", argv[2]);
		exit(99);
	}

	cp_file(fd_from, fd_to, argv); /* does the main copying of file */

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can\'t close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can\'t close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}

/**
 * cp_file - copies the contents of fd_from to fd_to
 * @fd_from: file descriptor to read from
 * @fd_to: file descriptor to write to
 * @argv: argument vector for inputs
 *
 * Return: nothing
 */
void cp_file(int fd_from, int fd_to, char *argv[])
{
	char buffer[BUFSIZE];
	int bytes = 0;

	while (1)
	{
		bytes = read(fd_from, buffer, BUFSIZE);
		if (bytes == 0)
		{
			break;
		}
		else if (bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can\'t read from file %s\n", argv[1]);
			exit(98);
		}
		bytes = write(fd_to, buffer, bytes);
		if (bytes == 0 || bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can\'t write to %s\n", argv[2]);
			exit(99);
		}
	}
}
