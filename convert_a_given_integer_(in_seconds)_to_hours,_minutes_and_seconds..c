#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int h=a/3600;
    int m=(a%3600)/60;
    int s=a%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
}