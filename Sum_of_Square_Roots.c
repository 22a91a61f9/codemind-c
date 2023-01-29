#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float sum=0;
    for(a;a<=b;a++)
    {
        sum=sum+sqrt(a);
    }
    printf("%0.2f",sum);
}