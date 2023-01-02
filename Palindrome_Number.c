#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        int c,n,rev=0,old;
        scanf("%d",&n);
        old=n;
        while(n>0)
    {
        c=n%10;
        rev=rev*10+c;
        n=n/10;
    }
    if(old==rev)
    printf("True
");
    else
    printf("False
");
    }
    
}