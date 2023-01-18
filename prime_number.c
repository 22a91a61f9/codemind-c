#include<stdio.h>
int main()
{
    int n,i,nm=0;
    scanf("%d",&n);
    if(n==0 || n==1)
    nm=1;
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            nm=1;
            break;
        }
    }
    if(nm==0)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}