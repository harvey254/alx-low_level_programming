
#include "main.h"
/**
 * main -
 *
 * Return: Success(0), -1 otherwise
 */

int main(int argc, char *argv[])
{
	const char *elf_filename = argv[1];
	int fd = open(elf_filename, O_RDONLY);
	Elf *e;
	Elf64_Ehdr *elf_header = elf64_getehdr(e);
	
	if (argc != 2)
	{
		dprintf(2, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	if (fd == -1)
	{
		dprintf(2, "Error: Cannot open file %s\n", elf_filename);
		return (98);
	}
	if (elf_version(EV_CURRENT) == EV_NONE)
	{
		dprintf(2, "Error: ELF library initialization failed\n");
		return (98);
	}
	e = elf_begin(fd, ELF_C_READ, NULL);
	if (e == NULL)
	{
		dprintf(2, "Error: Cannot read ELF file %s\n", elf_filename);
		close(fd);
		return (98);
	}
	if (elf_header == NULL)
	{
		dprintf(2, "Error: Cannot read ELF header from %s\n", elf_filename);
		elf_end(e);
		close(fd);
		return (98);
	}
	if (elf_kind(e) != ELF_K_ELF)
	{
		dprintf(2, "Error: %s is not an ELF file\n", elf_filename);
		elf_end(e);
		close(fd);
		return (98);
	}
	print_elf_header_info(elf_header);
	elf_end(e);
	close(fd);
	return (0);
}
