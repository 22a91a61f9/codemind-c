#include<stdio.h>
int main()
{
    int n,tem,count=0;
    scanf("%d",&n);
    int arr[100],i=0;
    while(n>0)
    {
        tem=n%10;
        arr[i++]=tem;
        n=n/10;
        count++;
    }
    for(i=count-1;i>=0;i--)
    {
        if(arr[i]==6)
        {
            arr[i]=9;
            break;
        }
    }
    for(i=count-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    
}