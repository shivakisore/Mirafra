#include<stdio.h>
#define MAX 32

void main()
{
	char data[MAX];
	int i=0,j=0,length=0;
	printf("Enter any Word to remove Vowels :");
	scanf("%s",data);
	
	while (data[i]!='\0')
	{
		if(data[i]=='a'|| data[i]=='e' || data[i]=='i' || data[i]=='o' || data[i]=='u' || data[i]=='A' || data[i]=='E' || data[i]=='I' || data[i]=='O' || data[i]=='U')
		{
			for(j=i;data[j]!='\0';j++)
			{
				data[j]= data[j+1];
			}
		}
		else
		{
			i++;
		}
	}	
	printf("\nString after removing Vowels %s",data);	
	printf("\n\n");	
}			
