#include<stdio.h>
#include<math.h>
int main()
{
    int num,i;
    float fvar;
    scanf("%d",&num);
    fvar=sqrt((double)num);
    i=fvar;
    if(i==fvar)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

