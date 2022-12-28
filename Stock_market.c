#include<stdio.h>
int main(){
 int n,p,l;
 scanf("%d",&n);
    for( int i=1;i<=n;i++)
    {
    scanf("%d%d",&p,&l);
    if(p>l)
    {
        printf("LOSS
");
        
    }
    else if(p==l)
    
    {
        printf("NEUTRAL
");
    }
    else if(p<l)
    {
        printf("PROFIT
");
    }
  }
}