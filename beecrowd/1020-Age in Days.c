#include<stdio.h>
int main(int argc, char const *argv[])
{
    int y,m,d;
    scanf("%d",&d);
    y=d/365;
    m=d%365/30;
    d=d%365%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    return 0;
}
