#include <stdio.h>

typedef struct 
{
	char A[10];
	int B;
	float C;
	
} struct_info;


void main()
{
	struct_info *ptr = NULL;   
	ptr++;
	printf("Size of structure  =  %d\n",ptr);
}
/*
struct 
{
	char A[10];
	int B;
	float C;	
} struct_info;

void main()
{
	int first,last;
	first = &struct_info[0].Name;
	last = &struct_info[1].Name;
	printf("Size of structure  =  %d\n",last-first);
}*/	
