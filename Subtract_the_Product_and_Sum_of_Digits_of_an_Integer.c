#include<stdio.h>
int main()
{
    int n,rem,sum=0,mul=1;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        mul=mul*rem;
        n=n/10;
    }
    printf("%d",mul-sum);
}