#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file to append text
 * @text_content: a null terminated string to add at the end of the file
 *
 * Description: Does not create the file if it does not exist
 * Return: 1 on success
 * -1 on failure (file can not be written, write fails, etc...)
 *  if filename is NULL return -1
 *  -1 if the file does not exist or if permission to write to it is denied
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t bytes = 0;
	int fd_append = 0;
	int count = 0;

	if (!filename)
	{
		return (-1);
	}
	fd_append = open(filename, O_WRONLY | O_APPEND);
	if (fd_append == -1)
	{
		return (-1);
	}

	for (count = 0; text_content && text_content[count]; count++)
	{
		bytes = write(fd_append, &text_content[count], sizeof(char));
		if (!(bytes > 0))
		{
			break;
		}
	}

	close (fd_append);

	return (1);
}
