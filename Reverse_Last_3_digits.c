#include<stdio.h>
int main()
{
    int n,r,rev=0,m,a,tc,t1;
    scanf("%d",&n);
    m=n%1000;
    a=m;
    while(m!=0)
    {
        r=m%10;
        rev=(rev*10)+r;
        m=m/10;
    } 
    tc=n-a;
    t1=tc+rev;
    printf("%d",t1);
}