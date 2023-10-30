#include "main.h"

/**
 * print_class - Prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 *
 * Description: The ELF class is one of ELFCLASSNONE,
 *ELFCLASS32, or ELFCLASS64.
 */
void print_class(unsigned char *e_ident)
{
	int elf_class = e_ident[EI_CLASS];

	printf("Class:                             ");

	switch (elf_class)
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_class);
	}
}
