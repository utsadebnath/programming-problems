#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x, n1,n2,i;
    double res;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        scanf("%d %d",&n1,&n2);

        res = n1/(n2*1.00);
        if(n2==0)
        printf("divisao impossivel\n");
        else
        printf("%.1lf\n",res);
    }
    
    return 0;
}
