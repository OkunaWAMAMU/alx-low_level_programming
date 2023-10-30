#include "main.h"

/**
 * exit_with_message - Print an error message to stderr and exit with a code.
 * @code: The exit code.
 * @message: The error message to print.
 */
void exit_with_message(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * open_source_file - Open the source file for reading.
 * @source_file: The path of the source file to open.
 *
 * Return: The file descriptor for the source file.
 */
int open_source_file(const char *source_file)
{
	int fd = open(source_file, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_file);
		exit(98);
	}
	return (fd);
}

/**
 * create_destination_file - Create or open the destination file for writing.
 * @destination_file: The path of the destination file to create/open.
 *
 * Return: The file descriptor for the destination file.
 */
int create_destination_file(const char *destination_file)
{
	int fd = open(destination_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", destination_file);
		exit(99);
	}
	return (fd);
}

/**
 * copy_file - Copy the content of one file to another.
 * @fd_from: The source file descriptor.
 * @fd_to: The destination file descriptor.
 */
void copy_file(int fd_from, int fd_to)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to the destination file\n");
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from the source file\n");
		exit(98);
	}
}

/**
 * main - Entry point for the cp program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or exit with error codes:
 * - 97 if the number of arguments is incorrect
 * - 98 if there are issues reading from the source file
 * - 99 if there are issues writing to the destination file
 * - 100 if there are issues closing file descriptors
 */
int main(int argc, char *argv[])
{
	int fd_from = open_source_file(argv[1]);
	int fd_to = create_destination_file(argv[2]);
	
	if (argc != 3)
	{
		exit_with_message(97, "Usage: cp file_from file_to");
		copy_file(fd_from, fd_to);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor for %s\n", argv[1]);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor for %s\n", argv[2]);
		exit(100);
	}


	return (0);
}
