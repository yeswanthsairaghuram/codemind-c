#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,z,b;
    scanf("%d%d%d",&x,&y,&m);
    z=pow(x,y);
    b=z%m;
    printf("%d",b);
    
}