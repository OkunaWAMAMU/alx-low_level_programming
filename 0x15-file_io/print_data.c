#include "main.h"

/**
 * print_data - Prints the data of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 *
 * Description: The ELF data type can be ELFDATANONE,
 *ELFDATA2LSB, or ELFDATA2MSB.
 */
void print_data(unsigned char *e_ident)
{
	int elf_data = e_ident[EI_DATA];

	printf("Data:                              ");

	switch (elf_data)
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_data);
	}
}
