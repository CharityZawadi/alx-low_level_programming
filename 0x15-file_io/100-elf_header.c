#define _GNU_SOURCE
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include <elf.h>
#include <string.h>

/**
 * display_elf_header - Display information from an ELF header
 * @header: A pointer to the ELF header
 */

void display_elf_header(Elf64_Ehdr *header);

/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 on success, 98 on failure
 */
int main(int ac, char **av)
{
int fd;
Elf64_Ehdr ehdr;

if (ac != 2)
{
dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", av[0]);
return (98);
}

fd = open(av[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't open file %s\n", av[1]);
return (98);
}

if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]);
close(fd);
return (98);
}

if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0)
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
close(fd);
return (98);
}

display_elf_header(&ehdr);
close(fd);
return (0);
}

/**
 * display_elf_header - Display information from an ELF header
 * @header: A pointer to the ELF header
 */
void display_elf_header(Elf64_Ehdr *header)
{
char *class = "UNKNOWN";
char *data = "UNKNOWN";
int i;

if (header->e_ident[EI_CLASS] == ELFCLASS64)
class = "ELF64";
else if (header->e_ident[EI_CLASS] == ELFCLASS32)
class = "ELF32";

if (header->e_ident[EI_DATA] == ELFDATA2LSB)
data = "2's complement, little endian";
else if (header->e_ident[EI_DATA] == ELFDATA2MSB)
data = "2's complement, big endian";

printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x%s", header->e_ident[i], (i < EI_NIDENT - 1) ? " " : "\n");
printf("  Class:                             %s\n", class);
printf("  Data:                              %s\n", data);
printf("  Version:                           %d (current)\n",
header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            UNIX - System V\n");
printf("  ABI Version:                       %d\n",
header->e_ident[EI_ABIVERSION]);
printf("  Type:                              EXEC (Executable file)\n");
printf("  Entry point address:               0x%lx\n",
(unsigned long)header->e_entry);
}

