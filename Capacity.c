#include<stdio.h>
int main()
{
    int s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    int cap=2*s*t*b*512;
    int kb=cap/1024;
    printf("%d KB",kb);
    
}
