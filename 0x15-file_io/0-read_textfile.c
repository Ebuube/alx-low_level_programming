#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: the name of the file to read from
 * @letters: the number of letters it should read
 *
 * Description: If the file cannot be opened or read, returns 0
 * if filename is NULL return 0
 * Return: the actual number of letters or characters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes = 0;
	int fd_read = 0, out = 0;
	char c = 0;

	if (!filename)
	{
		return (0);
	}

	fd_read = open(filename, O_RDONLY);
	if (fd_read == -1)
	{
		return (0);
	}
	while (1)
	{
		bytes = read(fd_read, &c, 1 * sizeof(char));
		if ((!(bytes > 0)) || (letters == 0))
		{
			break;
		}
		write(STDOUT_FILENO, &c, 1 * sizeof(char));
		letters--;
		out++;
	}

	close(fd_read);
	return (out);
}
