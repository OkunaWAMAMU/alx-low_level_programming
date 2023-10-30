#include "main.h"
/**
 * create_file - Create a file and write text content to it.
 * @filename: The name of the file to be created or truncated.
 * @text_content: The text content to write to the
 *file (a null-terminated string).
 *
 * Return: 1 on success, -1 on failure
 *(file cannot be created, written, or other issues).
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		close(fd);
		if (bytes_written == -1 || (size_t)bytes_written != strlen(text_content))
		{
			return (-1);
		}
	}
	else
	{
		close(fd);
	}

	return (1);
}
