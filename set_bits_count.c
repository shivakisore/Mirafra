#include <stdio.h>
int  count_set_bits(int n);

void main()
{
    int n = 8;
    printf("Number of Set Bit's in given integer(%d) are %d.\n", n,count_set_bits(n));
}

int count_set_bits(int n)
{
    
    if (n == 0)
    {
        return 0;
    } 
    else
    {
        return (n & 1) + count_set_bits(n >> 1);
    }    
}
