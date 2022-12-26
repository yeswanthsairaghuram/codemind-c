#include<stdio.h>
int main()
{
    int a,r,n,sum=0;
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        r=a%10;
        sum=sum*10+r;
        a=a/10;
    }
    if(n==sum)
    {
        printf("True");
    }
    else if(n!=sum)
    {
        printf("False");
    }
    
}