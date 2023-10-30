#include "main.h"

/**
 * display_elf_header - Display the ELF header information.
 * @elf_fd: File descriptor for the ELF file.
 */
void display_elf_header(int elf_fd)
{
	Elf64_Ehdr header;

	if (read(elf_fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		dprintf(STDERR_FILENO, "Error: Unable to read ELF header\n");
		exit(98);
	}

	print_magic(header.e_ident);
	print_class(header.e_ident);
	print_data(header.e_ident);
	print_version(header.e_ident);
	print_osabi(header.e_ident);
	print_abi(header.e_ident);
	print_type(header.e_type, header.e_ident);
	print_entry(header.e_entry, header.e_ident);
}
/**
 * main - Entry point for the elf_header program.
 * @argc: The number of arguments provided.
 * @argv: An array of strings containing the arguments.
 *
 * Description:
 *   - Displays the information contained in the ELF header at
 * the start of an ELF file.
 *   - Validates the input arguments and opens the ELF file.
 *   - Calls the display_elf_header function to print the ELF
 * header information.
 *
 * Return:
 *   - 0 on success.
 *   - 98 on error (e.g., file not found, invalid arguments, etc.).
 */
int main(int argc, char *argv[])
{
	int elf_fd;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	elf_fd = open(argv[1], O_RDONLY);
	if (elf_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}

	display_elf_header(elf_fd);

	if (close(elf_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
		exit(98);
	}

	return (0);
}
