/*Write a c program using arrays,DMA,functions,pointers to take subjects and marks from an user and print the subjects and marks*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int prime(int);

void main()
{
	char temp[20];
	char *ptr[5];
	int marks[5];
	int *ptr_marks[5];
	int length,num_of_sub,i,num;
	printf("Enter Number of Subjects : ");
	scanf("%d",&num_of_sub);
	
	for(i=0;i<num_of_sub;i++)
	{
		printf("\nSubject Name - ");
		scanf("%s",temp);
		printf("\nSubject Marks -");
		scanf("%d",&marks[i]);
		length = strlen(temp);
		ptr[i]=(char*) malloc(sizeof(char)*(length+1));
		ptr_marks[i]=(int*) malloc(sizeof(int));
		strcpy(ptr[i],temp);
		ptr_marks[i]=&marks[i];
	}
	for(i=0;i<num_of_sub;i++)
	{
		num=*ptr_marks[i];
		printf("\n%s %d",ptr[i],num);
		prime(num)==0 ? printf("(Prime)\n"):printf("(Non Prime)\n");
		
		free(ptr[i]);
	}
	
	
}

int prime(int num)
{
	int i,flge=0;
	if(num <=2 || num%2 == 0)
	{
		flge=1;
	}
	else
	{
		for(i=3;i<num/2;i++)
		{
			if(num%i==0)
			{
				flge=1;
				break;
			}
		}
	}	
	return flge;
}						
