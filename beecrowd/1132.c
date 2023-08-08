#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,a,b,sum=0;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a>b)
    for(i=b;i<=a;i++)
    {
        if(i%13==0)
        continue;
        sum=sum+i;
    }
     if (a<b)
    for(i=a;i<=b;i++)
    {
        if(i%13==0)
        continue;
        sum=sum+i;
    }
    printf("%d\n",sum);
    
    return 0;
}
