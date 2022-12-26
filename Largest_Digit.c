#include<stdio.h>
int main()
{
    int n,i,rem=0,large=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        if(rem>large)
        {
            large=rem;
        }
        n=n/10;
    }
    {
        printf("%d",large);
    }
}