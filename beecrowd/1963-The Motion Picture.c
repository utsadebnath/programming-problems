#include<stdio.h>
int main(int argc, char const *argv[])
{
    double a,b;
    scanf("%lf %lf",&a,&b);
    
    printf("%.2lf%%\n",100*(b-a)/a);
     return 0;
}
