#include<stdio.h>
int main()
{
    int a,b,s,d2;
    float c,d,s1,d1;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    s=a+b;
    d2=a-b;
    s1=c+d;
    d1=c-d;
    printf("%d %d
",s,d2);
    printf("%.1f %.1f",s1,d1);
}

