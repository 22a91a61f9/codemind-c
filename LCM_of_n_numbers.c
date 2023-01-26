#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        int X,Y,j;
        X=arr[i];
        Y=arr[i+1];
        for(j=1;j<=Y;j++)
        {
            int z=X*j;
            if(z%Y==0)
            {
                arr[i+1]=z;
                break;
            }
        }
    }
    printf("%d",arr[n-1]);
}