#include<stdio.h>
#define MAX 32

void main()
{
	char data[MAX];
	int i=0,j=0,temp;
	printf("Enter any Word to  :");
	scanf("%s",data);
	for(i=0;data[i]!='\0';i++)
	{
		for(j=i+1;data[j]!='\0';j++)
		{
			if(data[i]< data[j])
			{
				temp=data[i];
				data[i]=data[j];
				data[j]=temp;
			}
		}
	}
	
	printf("Data after sorting is :- \n");
	printf("\t%s\n",data);
}				
	
	
