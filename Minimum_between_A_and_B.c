#include<stdio.h>
int main()
{
    int a,b,arr[100],n,i,min=100,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            if(min>arr[i])
            {
                min=arr[i];
                cnt++;
            }
        }
    }
    if(cnt!=0)
    {
        printf("%d",min);
    }
    else
    {
        printf("-1");
    }
}