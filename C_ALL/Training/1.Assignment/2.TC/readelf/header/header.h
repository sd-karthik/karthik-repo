//myelf.h

//readelf implimentation

// Karthik

//DOC : 26/12/16

#include<stdio.h>
#include<stdlib.h>
#include<elf.h>

#define M_EI_NIDENT 16
#define EH_MAX 52
#define N_MAX 16

/* ELF Header*/	
typedef struct
{
	unsigned char m_e_ident[M_EI_NIDENT]; /* Magic number */
	Elf32_Half m_e_type;		/* Object files */
	Elf32_Half m_e_machine;		/* Architecture */
	Elf32_Word m_e_version;		/* Object file version */
	Elf32_Addr m_e_entry;		/* Entry point to virtual address */
	Elf32_Off m_e_phoff;		/* Program header table file offset */
	Elf32_Off m_e_shoff;		/* Section header table file offset */
	Elf32_Word m_e_flags;		/* Processor specific flags*/
	Elf32_Half m_e_ehsize;		/* ELF header size in bytes */
	Elf32_Half m_e_phentsize;	/* Program header table entry size*/
	Elf32_Half m_e_phnum;		/* Program header table entry count */
	Elf32_Half m_e_shentsize;	/* Section header table entry size*/
	Elf32_Half m_e_shnum;		/* Section header table entry count */
	Elf32_Half m_e_shstrndx;	/* Section header string table index*/

}Elf32_m_Ehdr;

typedef struct
{
  unsigned char m_e_ident[EI_NIDENT]; /* Magic number and other info */
  Elf64_Half    m_e_type;			/* Object file type */
  Elf64_Half    m_e_machine;      /* Architecture */
  Elf64_Word    m_e_version;      /* Object file version */
  Elf64_Addr    m_e_entry;        /* Entry point virtual address */
  Elf64_Off m_e_phoff;			/* Program header table file offset */
  Elf64_Off m_e_shoff;        	/* Section header table file offset */
  Elf64_Word   m_e_flags;        /* Processor-specific flags */
  Elf64_Half    m_e_ehsize;       /* ELF header size in bytes */
  Elf64_Half    m_e_phentsize;	/* Program header table entry size */
  Elf64_Half    m_e_phnum;        /* Program header table entry count */
  Elf64_Half    m_e_shentsize;	/* Section header table entry size */
  Elf64_Half    m_e_shnum;        /* Section header table entry count */
  Elf64_Half    m_e_shstrndx;     /* Section header string table index */
}Elf64_m_Ehdr;


/* Section Header */

typedef struct
{
  Elf32_Word    m_sh_name;      /* Section name (string table index)*/
  Elf32_Word    m_sh_type;      /* Section type */
  Elf32_Word    m_sh_flags;     /* Section flags */
  Elf32_Addr    m_sh_addr;      /* Section virtual addr at execution*/
  Elf32_Off m_sh_offset;  	    /* Section file offset */
  Elf32_Word    m_sh_size;        /* Section size in bytes */
  Elf32_Word    m_sh_link;        /* Link to another section */
  Elf32_Word    m_sh_info;        /* Additional section information */
  Elf32_Word    m_sh_addralign;	/* Section alignment */
  Elf32_Word    m_sh_entsize;     /* Entry size if section holds table */
} Elf32_m_Shdr;

typedef struct
{
  Elf64_Word    m_sh_name;        /* Section name (string tbl index) */
  Elf64_Word    m_sh_type;        /* Section type */
  Elf64_Xword   m_sh_flags;       /* Section flags */
  Elf64_Addr    m_sh_addr;        /* Section virtual addr at execution */
  Elf64_Off m_sh_offset;      	/* Section file offset */
  Elf64_Xword   m_sh_size;        /* Section size in bytes */
  Elf64_Word    m_sh_link;        /* Link to another section */
  Elf64_Word    m_sh_info;        /* Additional section information */
  Elf64_Xword   m_sh_addralign;   /* Section alignment */
  Elf64_Xword   m_sh_entsize;     /* Entry size if section holds table */
} Elf64_m_Shdr;

