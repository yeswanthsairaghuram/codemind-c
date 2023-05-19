#include<stdio.h>
int main()
{
    int n,sqr,rem,sum=0;
    scanf("%d",&n);
    sqr=n*n;
    while(sqr>0)
    {
        rem=sqr%10;
        sum+=rem;
        sqr/=10;
    }
    if(n==sum)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    
}