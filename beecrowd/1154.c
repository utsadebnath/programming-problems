#include<stdio.h>
int main(int argc, char const *argv[])
{
    int count=0,n;
    double avg,sum=0;
    while(1)
    {
        scanf("%d",&n);
        if(n<0)
        break;
        sum=sum+n;
        count++;
    }
    avg=sum/count;
    printf("%.2lf\n",avg);
    return 0;
}
