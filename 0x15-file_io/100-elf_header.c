#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
  * class - prints the class
  * @h: the header
  */
void class(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("  Class:                             ELF32\n");
			break;
		case ELFCLASS64:
			printf("  Class:                             ELF64\n");
			break;
		default:
			printf("none");
	}
}
/**
  * data - prints the data
  * @h: the header
  */

void data(Elf64_Ehdr h)
{
	printf("  Data:                              ");
	switch (h.e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("none\n");
	}
}
/**
  * version - prints the version
  * @h: the header
  */

void version(Elf64_Ehdr h)
{
	printf("  Version:                           %d", h.e_ident[EI_VERSION]);
	switch (h.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("%s\n", "");
	}
}
/**
  * OSABI2 - prints the OS/ABI
  * @h: the header
  */

void OSABI2(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		default:
			printf("<unknown: %x>\n", h.e_ident[EI_OSABI]);
	}
}

/**
  * OSABI - prints the OS/ABI
  * @h: the header
  */

void OSABI(Elf64_Ehdr h)
{
	printf("  OS/ABI:                            ");
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NETBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX\n");
			break;
		default:
			OSABI2(h);
	}
}
/**
  * ABIVER - prints the ABI version
  * @h: the header
  */

void ABIVER(Elf64_Ehdr h)
{
	printf("  ABI Version:                       %d\n", h.e_ident[EI_ABIVERSION]);
}
/**
  * type - prints the type
  * @h: the header
  */

void type(Elf64_Ehdr h)
{
	char *ptr = (char *)&h.e_type;
	int i = 0;

	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		i = 1;
	printf("  Type:                              ");
	switch (ptr[i])
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown>: %x", ptr[i]);
	}
}
/**
  * address - prints the address
  * @h: the header
  */

void address(Elf64_Ehdr h)
{
	int i = 0, length;
	char *ptr = (char *)&h.e_entry;

	printf("  Entry point address:               0x");
	if (h.e_ident[EI_CLASS] == ELFDATA2MSB)
	{
		length = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!ptr[i])
			i++;
		printf("%x", ptr[i]);
		i++;
		while (i <= length)
			printf("%02x", ptr[i++]);
		printf("\n");
	} else
	{
		length = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!ptr[length])
			length--;
		printf("%x", ptr[length]);
		length--;
		while (length >= 0)
			printf("%02x", ptr[length--]);
		printf("\n");

	}
}
/**
  * main - entry point
  * @argc: number of arguments
  * @argv: arguments array
  *
  * Return: always (0)
  */
int main(int argc, char *argv[])
{
	Elf64_Ehdr header;
	ssize_t bytes;
	int fd, i;

	if (argc != 2)
		dprintf(2, "Usage:  ./elf_header elf_filename\n"), exit(98);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		dprintf(2, "cannot open the file %s\n", argv[1]), exit(98);
	bytes = read(fd, &header, sizeof(header));
	if (bytes == -1)
		dprintf(2, "cannot read the file %s\n", argv[1]), exit(98);
	if (header.e_ident[0] != 0x7f || header.e_ident[1] != 'E'
			|| header.e_ident[2] != 'L' || header.e_ident[3] != 'F')
		dprintf(2, "%s is not a ELF file\n", argv[1]), exit(98);
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");
	class(header);
	data(header);
	version(header);
	OSABI(header);
	ABIVER(header);
	type(header);
	address(header);
	close(fd);
	if (fcntl(fd, F_GETFD) != -1)
		dprintf(2, "Cannot close the file %s\n", argv[1]), exit(98);
	return (0);
}
