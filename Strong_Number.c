#include<stdio.h>
int main()
{
    int n,i,fact,rem,sum=0;
    scanf("%d",&n);
    int a=n;
    while(n!=0)
    {
        i=1,fact=1;
        rem=n%10;
        while(i<=rem)
        {
            fact=fact*i;
            i++;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==a)
    {
        printf("The number %d is a strong number",a);
    }
    else
    {
        printf("The number %d is not a strong number",a);
    }
}