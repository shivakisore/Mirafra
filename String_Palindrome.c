#include<stdio.h>
#define MAX 32

void main()
{
	char data[MAX];
	int i=0,j=0,length=0,flag=0;
	printf("Enter a string to check it is a Palindrome or Not :");
	scanf("%s",data);
	while (data[i] !='\0')
	{
		length++;
		i++;
	}
	j=length-1;
	
	for(i=0;i<length;i++)	
	{
		if(data[j]!=data[i])
		{
			flag++;
			break;
		}			
		j--;
	}
	
	if(flag==0)
	{
		printf("Given string is a Palindrome\n");
		
	}
	else
	{
		printf("Given string is a Not Palindrome\n");
		
	}
}		
