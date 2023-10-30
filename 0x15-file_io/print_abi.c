#include "main.h"

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF ABI version.
 *
 * Description: The ELF ABI version is an integer.
 */
void print_abi(unsigned char *e_ident)
{
	int abi_version = e_ident[EI_ABIVERSION];

	printf("  ABI Version:                       %d\n", abi_version);
}
