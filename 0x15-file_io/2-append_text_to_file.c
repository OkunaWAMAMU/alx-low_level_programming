#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The text to append to the file.
 *
 * Return:
 * - 1 on success
 * - -1 on failure
 *
 * Description:
 * - This function opens the file with the given filename in append mode.
 * - If the file does not exist, it does not create a new file.
 * - If filename is NULL, the function returns -1.
 * - If text_content is NULL, it does not add anything to the file.
 * - If the file cannot be opened or if there are issues writing to the file,
 *   the function returns -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		close(fd);

		if (bytes_written == -1)
			return (-1);
	}
	else
	{
		close(fd);
	}

	return (1);
}
