#include<stdio.h>
int main(){
    int a,f,s,sum,n,m;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        scanf("%d%d",&n,&m);
        f=n*5;
        s=m*7;
        sum=f+s;
        printf("%d
",sum);
    }
}