//readelf.c

//Readelf implimentation : ELF Header, Section Header, Symbol Table

//Author : Karthik

//DOC : 27/12/16

#include "header.h"
 
int main(int argc, char *argv[])
{ 
	FILE *fp;			//File handler for the file to read
	Elf32_m_Ehdr buf;	//Instance of the structure for ELF header
	int i;				//Looping Variable
	Elf32_m_Shdr shbuf; //Instance of the structure for Section Header
	char *ptr;
	
	ptr = (char *) malloc(sizeof(char *) *N_MAX);	
	// To validate the command line input number of files
	if(argc != 2)
	{
		printf("Enter proper command again\n");
		return;
	}
	
	if( NULL == (fp = fopen(argv[1], "r+")))
	{
		printf("Unsuccessful file open\n");
		return;
	}
//	printf("file opened successfully\n");
	fread(&buf, sizeof(buf), 1 ,fp);	

	//To check whether the given file is of valid type
	if(buf.m_e_ident[0] != 0x7f)
	{
		printf("Error: Invalid file\n");
		return ;
	}
	
	// ELF Header 
	printf("ELF Header:\n");
	
	//Magic number output
	printf("Magic:\t");
	for( i = 0; i < 16; i++)
	{
		printf("%.2x ", buf.m_e_ident[i]);
	}
	
	// Class of ELF Header
	printf("\nClass:\t\t\t\tELF");
	switch(buf.m_e_ident[4])
	{
		case 1 : printf("32\n");
				 break;
		
		case 2 : printf("64\n");
				 break;

		default: printf("Invalid class\n");
				 break;
	}

	// Data of ELF Header
	printf("Data:\t\t\t\t");
	switch(buf.m_e_ident[5])
	{
		case 0 : printf("Unknown Data format\n");
				 break;

		case 1 : printf("2's complement, little endian\n");
				 break;
	
		case 2 : printf("2's complement, Big endian\n");
				 break;

		default: printf("Invalid\n");
				 break;
	}
	
	//Version of the ELF Header
	printf("Version:\t\t\t");
	if( buf.m_e_ident[6] == 1 )
	{
		printf("1 (Current)\n");
	}
	else {
		printf("Invalid Version\n");
	}

	//Operating System/ABI
	printf("OS/ABI:\t\t\t\t");
	switch(buf.m_e_ident[7])
	{
		case 0 : printf("UNIX System V ABI.\n");
				 break;
		
		case 1 : printf("UNIX System V ABI.\n");
				 break;
		
		case 3 : printf("HP-UX ABI.\n");
				 break;
	
		case 4 : printf("NetBSD ABI.\n");
				 break;
	
		case 5 : printf("Linux ABI\n.");
				 break;
	
		case 6 : printf("Solaris ABI.\n");
				 break;

		case 7 : printf("IRIX ABI.\n");
				 break;

		case 8 : printf("FreeBSD ABI.\n");
				 break;

		case 9 : printf("TRU64 UNIX ABI.\n");
				 break;

		case 10 : printf("ARM architecture ABI\n");
				  break;	
		
		case 11 : printf("Stand Alone (embedded) ABI\n");
				  break;
	
		default : printf("Error in the bit\n");
				  break;
	}

	//Version of the ABI
	printf("ABI Version:\t\t\t");	
	if(buf.m_e_ident[8] == 0)
	{
		printf("0\n");
	}
	
	//Type of the File
	printf("Type:\t\t\t\t");
	switch(buf.m_e_type)
	{
		case 0 : printf("An Unknown type\n");
				 break;

		case 1 : printf("REL (relocatable file)\n");
				 break;
		
		case 2 : printf("EXEC (Executbale file)\n");
				 break;
	
		case 3 : printf("OBJ (shared object)\n");
				 break;
	
		case 4 : printf("A core file\n");
				 break;

		default : printf("Invalid file\n");
	}
	
	//The MAchine or the Processor
	printf("Machine:\t\t\t");
	switch(buf.m_e_machine)
	{
		case 0 : printf("An Unknown machine\n");
				 break;

		case 1 : printf("AT&T WE 32100\n");
				 break;

		case 2 : printf("Sun Microsystems SPARC\n");
				 break;

		case 3 : printf("Intel 80386\n");
				 break;

		case 4 : printf("Motorola 68000\n");
				 break;

		case 5 : printf("Motorola 88000\n");
				 break;

		case 6 : printf("Intel 80860\n");
				 break;

		case 7 : printf("MIPS RS3000 (Big-endian only\n");
				 break;

		case 8 : printf("HP/PA\n");
				 break;

		case 9 : printf("SPARC with enhanced instruction set\n");
				 break;

		case 10: printf("PowerPC.\n");
				 break;
	
		case 11 : printf("PowerPC 64-bit\n");
				  break;

		case 12 : printf("IBM S/390\n");
				  break;

		case 13 : printf("Advanced RISC Machines\n");
				  break;

		case 14 : printf("Renesas SuperH\n");
				  break;
	
		case 15 : printf("SPARC v9 64-bit\n");
				  break;

		case 16 : printf("Intel Itanium\n");
				  break;

		case 17 : printf("AMD x86*64\n");
				  break;

		case 18 : printf("DEC Vax\n");
				  break;

		default : printf("Unknown machine\n");
				 break;
	}

	//Version
	printf("Version:\t\t\t");
	if(buf.m_e_version == 1)	
	{
		printf("0x1\n");
	}
	else
	{
		printf("Invalid\n");
	}

	//Entry Point address of virtual memory
	printf("Entry Point address:\t\t%x\n", buf.m_e_entry);
	//Size of ELF Header
	printf("Start of program headers:\t"
			"%d (bytes into file)\n",  buf.m_e_phoff);
	//The Decimal address of the start of section header
	printf("Start of section headers:\t"
			"%d (bytes into file)\n", buf.m_e_shoff);
	//Flags
	printf("Flags:\t\t\t\t0x%x\n", buf.m_e_flags);
	printf("size of this headers:\t\t%d (bytes)\n", buf.m_e_ehsize);
	//Size of program header
	printf("size of program headers:\t"
			"%d (bytes)\n", buf.m_e_phentsize);

	printf("Number of program headers:\t%d\n",buf.m_e_phnum);
	printf("Size of section Headers:\t"
			"%d (bytes)\n", buf.m_e_shentsize);

	printf("Number of section headers:\t%d\n", buf.m_e_shnum);
	printf("Sec. header string table index:\t"
			"%d\n", buf.m_e_shstrndx);

	//Section Header
	

	printf("\nSection Headers:\n");

	fseek(fp, buf.m_e_shoff ,SEEK_SET);
	
		printf("[Nr] Name\t\tType\tAddr\tOff\tSize\tES Flg\tLk Inf Al\n");
	for( i = 0; i < buf.m_e_shnum; i++)
	{
		fread(&shbuf, buf.m_e_shentsize, 1, fp);
		fseek(fp, buf.m_e_shoff ,SEEK_SET);
		fread(ptr, buf.m_e_shentsize *(1 +  buf.m_e_shnum), 1, fp);
		
/*
		switch(shbuf.m_sh_name)
		{
			case 0 : printf("\t\t\t");
					 break;
	
			case 27: printf(".interp\t");
					 break;

			case 35: printf(".note.ABI-tag");
					 break;

			case 49: printf(".note.gnu.build-i");
					 break;
	
			case 68: printf(".gnu.hash\t");
					 break;
	
			case 78: printf(".gnu.versio_r");
					 break;
			
			case 86: printf(".rel.dyn\t");
					 break;

			case 94: printf(".rel.plt\t");
					 break;

			case 107: printf(".init\t\t");
					 break;

			case 122: printf(".plt\t\t");
					 break;

			case 131: printf(".text\t\t");
					 break;
	
			case 140: printf(".fini\t\t");
					 break;

			case 135: printf(".rodata\t\t");
					 break;

			case 146: printf(".eh_frame_hdr\t");
					 break;

			case 152: printf(".eh_frame\t");
					 break;
	
			case 158: printf(".init_array\t");
					 break;

			case 166: printf(".fini_array\t");
					 break;

			case 180: printf(".jcr\t\t");
					 break;

			case 190: printf(".dynamic\t");
					 break;

			case 202: printf(".got\t\t");
					 break;
	
			case 214: printf(".got.plt\t");
					 break;
		
			case 219: printf(".data\t\t");
					 break;

			case 228: printf(".bss\t\t");
					 break;

			case 233: printf(".comment\t");
					 break;

			case 242: printf(".shstrtab\n
*/
		//printf("before pf\n");
		
	printf("[%d]\t%s\t", i, ptr);

		switch(shbuf.m_sh_type)
		{
			case 0 : printf("NULL\t\t");	
					 break;

			case 1 : printf("PROGBITS\t");
					 break;

			case 2 : printf("SYMTAB\t");	
					 break;
		
			case 3 : printf("STRTAB\t");
					 break;
			
			case 4 : printf("RELA\n");
					 break;
	
			case 5 : printf("HASH\n");
					 break;

			case 6 : printf("DYNAMIC\t");
					 break;

			case 7 : printf("NOTE\t");
					 break;

			case 8 : printf("NOBITS\t");
					 break;
	
			case 9 : printf("REL\t\t");
					 break;

			case 10: printf("SHLIB\t");
					 break;

			case 11: printf("DYNSIM\t");
					 break;

			case 0x70000000: printf("LOPROC\t");
							 break;

			case 0x7fffffff: printf("HIPROC\t");
							 break;

			case 0x80000000: printf("LOUSER\t");
							 break;
	
			case 0xffffffff: printf("HIUSER\t");
							 break;

			default: printf("%d\t", shbuf.m_sh_type);
					 break;
		}

		printf("%.8x %.8x", shbuf.m_sh_addr, shbuf.m_sh_offset);
		printf(" %.8x %.2x ", shbuf.m_sh_size, shbuf.m_sh_entsize);
		printf("%d  %d  ", shbuf.m_sh_flags, shbuf.m_sh_link);
		printf("%d  %d\n", shbuf.m_sh_info, shbuf.m_sh_addralign);
	}
 
	fclose(fp);
	printf("file closed successfully\n");
	return 0; 
}
