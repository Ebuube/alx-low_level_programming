#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file to append text to
 * @text_content: what to append
 *
 * Description: Doesn't create the file if it does not exist
 * Return: 1 on success
 * -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_write = 0;

	if (!filename)
	{
		return (-1);
	}
	fd_write = open(filename, O_WRONLY | O_APPEND);
	if (fd_write == -1)
	{
		return (-1);
	}
	while (text_content)
	{
		bytes = write(fd_write, text_content, 1);
		if (bytes == 0)
		{
			/* EOF reachead */
			break;
		}
		else if (bytes == -1)
		{
			/* permission to write denied */
			return (-1);
		}
		text_content++;
	}

	close(fd_write);
	return (1);
}
