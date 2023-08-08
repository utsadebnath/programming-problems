#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,count=0;
    double n;
    for(i=1;i<=6;i++)
    {
        scanf("%lf",&n);
        if(n>0)
        count++;
    }
    printf("%d valores positivos\n",count);
    return 0;
}
