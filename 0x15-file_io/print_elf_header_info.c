#include "main.h"
/**
 * print_elf_header_info -displays information in te elf
 *
 * Return: no value
 */
void print_elf_header_info(Elf64_Ehdr *elf_header)
{
        printf("  Magic:   ");
        for (int i = 0; i < EI_NIDENT; i++) {
                printf("%02x ", elf_header->e_ident[i]);
        }
        printf("\n");
        printf("  Class:                             %s\n",elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
        printf("  Data:                              %s\n",
           elf_header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" : "2's complement, big-endian");
        printf("  Version:                           %d (current)\n", elf_header->e_ident[EI_VERSION]);
        printf("  OS/ABI:                            %d\n", elf_header->e_ident[EI_OSABI]);
        printf("  ABI Version:                       %d\n", elf_header->e_ident[EI_ABIVERSION]);

        if (elf_header->e_type == ET_NONE)
        {
                printf("  Type:                              %s\n", "NONE (Unknown type)");
}
        else if (elf_header->e_type == ET_EXEC)
        {
                printf("  Type:                              %s\n", "EXEC (Executable file)");
        }
        else if (elf_header->e_type == ET_DYN)
        {
                printf("  Type:                              %s\n", "DYN (Shared object file)");
        }
        else if (elf_header->e_type == ET_REL)
        {
                printf("  Type:                              %s\n", "REL (Relocatable file)");
        }
        printf("  Entry point address:               0x%lx\n", (unsigned long)elf_header->e_entry);
}

