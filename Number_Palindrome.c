
	/*C program to enter any number and check whether the number is palindrome or not.*/


#include<stdio.h>
void main()
{
	int num,rev=0,rem,x,temp;
	printf("Enter any Number to verify the Number is Palindrome or Not  : ");
	scanf("%d",&num);
	temp=num;
	while(temp>10)
	{
		rem=temp%10;
		x=rem*10;
		rev=(rev*10)+x;
		temp=temp/10;
	}	
	
	rev=rev+temp;
	if(rev==num)
	{
		printf("Given Number(%d) is a PALINDROME(%d) \n",rev,num);
	}
	else
		printf("Given Number(%d) is Not a Palindrome(%d) \n",num,rev);	
}	
	
