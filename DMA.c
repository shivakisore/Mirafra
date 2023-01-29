/*Write a c program using arrays,DMA,functions,pointers to take subjects and marks from an user and print the subjects and marks*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char temp[20];
	char *ptr[5];
	int length,num_of_sub,i;
	printf("Enter Number of Subjects : ");
	scanf("%d",&num_of_sub);
	
	for(i=0;i<num_of_sub;i++)
	{
		printf("\nSubject Name - ");
		scanf("%s",temp);
		length = strlen(temp);
		ptr[i]=(char*) malloc(sizeof(char)*(length+1));
		strcpy(ptr[i],temp);
	}
	for(i=0;i<num_of_sub;i++)
	{
		printf("\n%s\n",ptr[i]);
	}
}			
