#include<stdio.h>
int main()
{
    int x,y,z,a;
    scanf("%d%d",&x,&y);
    z=(x*1)+(y*2);
    if(z%2==0)
    {
        if(x==0 && y%2!=0)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }
    }
    else
    {
        printf("NO");
    }
}