#include<stdio.h>
int main()
{
    int arr[100],n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            c++;
        }
    }
    if(c==n-1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}