//Program1: To print size of structure

// Date : 22-11-2016
#include<stdio.h>

#pragma pack (2)

struct frame_1	//frame structure of ATM segmentation
{

 	unsigned char HEC;
	unsigned char CLP:1;
	unsigned char PTI:3;
	unsigned short int VCI:16;
	unsigned char VPI:8;
	unsigned char GFC:4;
};

struct frame_2	//Frame formate of tcp
{
	unsigned short int source_port;
	unsigned short int destination_port;
	unsigned int sequence_number;
	unsigned int acknowledge_number;
	unsigned char header_length:4;
	unsigned char reserved:6;
	unsigned char code_bits:6;
	unsigned short int window;
	unsigned short int checksum;
	unsigned short int urgent;
};

struct frame_3	// frame formate
{
	unsigned char version:4;
	unsigned char header_length:4;
	unsigned char service_type;
	unsigned short int total_length;
	unsigned short int identification;
	unsigned short int flags:4;
	unsigned short int fragment_offset:12;
	unsigned char ttl;
	unsigned char protocol;
	unsigned short int header_checksum;
	unsigned int souce_ip;
	unsigned int destination_ip;
	unsigned int opt:20;
	unsigned int pad:12;
};

int main()
{
	printf("Size of frame 1: %d\n", sizeof(struct frame_1));
	printf("Size of frame 2: %d\n", sizeof(struct frame_2));
	printf("Size of frame 3: %d\n", sizeof(struct frame_3));

	return 0;
}
