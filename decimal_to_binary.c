/*////////--------Decimal to Binary-------///////*/

#include<stdio.h>
#define MAX 64
void main()
{
	int num,bin[MAX],i=0;
	printf("\nGive the Number to Convert Decimal to Binary : ");
	scanf("%d",&num);
	while(num !=0)
	{
		bin[i]=num%2;
		i++;
		num=num/2;
	}
	
	while(i>0)
	{
		i--;
		printf("%d",bin[i]);
	}
	
	printf("\n\n");		
}	
