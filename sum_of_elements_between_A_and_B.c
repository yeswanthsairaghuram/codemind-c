#include<stdio.h>
int main()
{ 
    int a,b,i,n,arr[100],x,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(b<=arr[i] && a>=arr[i] || a<=arr[i] && b>=arr[i])
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}