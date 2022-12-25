#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,k,d,m;
    scanf("%d",&n);
    m=n;
    while(n)
    {
        d=log10(n)+1;
        k=n%10;
        s=s+pow(k,d);
        n/=10;
    }
    if(m==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}