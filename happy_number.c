#include<stdio.h>
int happy(int n)
{
    int rem=0,sum=0;
    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem);
        n=n/10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int result=n;
    while(result!=1 && result!=4)
    {
    result=happy(result);
    }
    if(result==1)
    {
        printf("True");
    }
    else if(result==4)
    {
        printf("False");
    }
}