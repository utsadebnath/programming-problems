#include<stdio.h>
int main(int argc, char const *argv[])
{
    float n, sum=0;
    int count=0;
    for(int i=1;i<=6;i++)
    {
        scanf("%f",&n);
        if(n>0)
        {
            count =count+1;
            sum=sum+n;
        }

    }
    float avg =sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",avg);
    return 0;
}
