#include<stdio.h>
int length(int);
int armstrong(int);

void main()
{
	int num,value;
	printf("Enter a number to find Armstrong or Not : ");
	scanf("%d",&num);
	value = armstrong(num);
	if(num == value)
	{
		printf("Given Number %d number is Armstrong number\n",num);
	}	
	else
	{
		printf("Given Number %d number is Not a Armstrong number\n",num);
	}
}
		
int armstrong(int num)
{
	int count,i,j,sum=0,pro,rem;
	count = length(num);
	
	for(i=1;i<=count;i++)
	{
		rem=num%10;
		pro=1;
		for(j=1;j<=count;j++)
		{
			pro = pro * rem;
		}
		sum=sum+pro;
		num=num/10;
	}
	return sum;
}

int length(int num)
{
	int count=0;
	while(num%10 !=0 || num >> 0)
	{
		count++;
		num=num/10;
	}
	return count;
}		
		
				
