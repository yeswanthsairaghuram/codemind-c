#include<stdio.h>
int main()
{
    int rem,sum=0,mul=1,n;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        mul=mul*rem;
        n=n/10;
    }
    if(sum==mul)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}