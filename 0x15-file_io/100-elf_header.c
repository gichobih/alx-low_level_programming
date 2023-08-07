#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>

#define MAGIC_NUM_BYTES 16

/* ELF header structure */
typedef struct
{
    unsigned char e_ident[MAGIC_NUM_BYTES];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} Elf64_Ehdr;

/* Function to display ELF header information */
void display_elf_header(const Elf64_Ehdr *ehdr)
{
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < MAGIC_NUM_BYTES; ++i)
    {
        printf("%02x ", ehdr->e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             %s\n", (ehdr->e_ident[4] == 1) ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", (ehdr->e_ident[5] == 1) ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", ehdr->e_version);
    printf("  OS/ABI:                            ");
    switch (ehdr->e_ident[7])
    {
    case 0:
        printf("UNIX - System V\n");
        break;
    case 1:
        printf("HP-UX\n");
        break;
    case 2:
        printf("NetBSD\n");
        break;
    case 3:
        printf("Linux\n");
        break;
        // ... Add more OS/ABI mappings here
    default:
        printf("<unknown: %d>\n", ehdr->e_ident[7]);
    }
    printf("  ABI Version:                       %d\n", ehdr->e_ident[8]);
    printf("  Type:                              ");
    switch (ehdr->e_type)
    {
    case 1:
        printf("REL (Relocatable file)\n");
        break;
    case 2:
        printf("EXEC (Executable file)\n");
        break;
    case 3:
        printf("DYN (Shared object file)\n");
        break;
        // ... Add more type mappings here
    default:
        printf("Unknown\n");
    }
    printf("  Entry point address:               0x%lx\n", ehdr->e_entry);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    /* Open the ELF file */
    int fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        perror("open");
        return 98;
    }

    /* Read the ELF header */
    Elf64_Ehdr ehdr;
    if (read(fd, &ehdr, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
    {
        perror("read");
        close(fd);
        return 98;
    }

    /* Display ELF header information */
    display_elf_header(&ehdr);

    /* Close the file descriptor */
    close(fd);

    return 0;
}

