#include <stdio.h>
 
int main()
{
    int num,temp,flag;     
    printf("Enter an integer number: ");
    scanf("%d",&num);
     
    temp=num;
    flag=0;
    
    while(temp!=1)
    {
        if(temp%2!=0)
        {
            flag=1;
            break;
        }
        
        temp=temp/2;
    }
  
    if(flag==0)
        printf("%d is a number that is the power of 2.\n",num);
    else
        printf("%d is not the power of 2.\n",num);
      
    return 0;
}
