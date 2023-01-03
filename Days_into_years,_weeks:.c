#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int y=a/365;
    int w=(a%365)/7;
    printf("%d
%d",y,w);
    
}