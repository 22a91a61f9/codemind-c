#include<stdio.h>
int main()
{
    int N,rev=0,rem;
    scanf("%d",&N);
    while(N!=0)
    {
        rem=N%10;
        rev=rev*10+rem;
        N/=10;
    }
    printf("%d",rev);
}