#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int s=a+b;
    int d=a-b;
    int p=a*b;
    int q=a/b;
    int r=a%b;
    printf("Sum:%d
",s);
    printf("Difference:%d
",d);
    printf("Product:%d
",p);
    printf("Quotient:%d
",q);
    printf("Remainder:%d
",r);
    
}