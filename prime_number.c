#include<stdio.h>
int prime(int);
void main()
{
	int num,flge;
	printf("Enter the numbre to find Prime or not : ");
	scanf("%d",&num);
	flge=prime(num);
	if(flge==0)
	{
		printf("Given Number %d is Prime Number\n",num);
	}
	else
	{
		printf("Given Number %d is Not a Prime Number\n",num);
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
