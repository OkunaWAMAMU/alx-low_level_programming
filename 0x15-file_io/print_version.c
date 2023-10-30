#include "main.h"

/**
 * print_version - Prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 *
 * Description: The ELF version is often EV_CURRENT.
 */
void print_version(unsigned char *e_ident)
{
	int elf_version = e_ident[EI_VERSION];

	printf("  Version:                           %d", elf_version);

	switch (elf_version)
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
