#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file and/or writes data to it
 * @filename: the name of the file to create
 * @text_content: a null terminated string to write to the file
 *
 * Description: The created file must have those permissions: rw-------
 * if the file already exists do not change the permissions
 * if the file already exists, truncate it
 * Return: 1 on success
 * -1 on failure (file can not be created,
 *  file can not be written, write fails, etc...)
 *  if filename is NULL return -1
 *  if text_context is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytes = 0;
	int fd_write = 0;
	int count = 0;

	if (!filename)
	{
		return (-1);
	}
	fd_write = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd_write == -1)
	{
		return (-1);
	}

	for (count = 0; text_content && text_content[count]; count++)
	{
		bytes = write(fd_write, &text_content[count], sizeof(char));
		if (!(bytes > 0))
		{
			break;
		}
	}

	close(fd_write);

	return (1);
}
