#include<stdio.h>
int main()
{
    int n,sq,t,d,i,c=0,s=0,p=0;
    scanf("%d",&n);
    t=n;
    sq=n*n;
    while(n!=0)
    {
        d=n%10;
        n/=10;
        c++;
    }
    for(i=0;i<c;i++)
    {
        d=sq%10;
        sq/=10;
        s=s*10+d;
    }
    while(s!=0)
    {
        d=s%10;
        s/=10;
        p=p*10+d;
    }
    if(t==p)
    {
         printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}