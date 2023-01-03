#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,f=0;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            if(i%2==0)
            f=1;
            else
            {
                f=0;
                break; 
            }
        }
    }
    if(f==1)
    printf("True");
    else 
    printf("False");
}