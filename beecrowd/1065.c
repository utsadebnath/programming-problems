#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,count=0;
    for(int i=1;i<=5;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        count =count+i;
    }
    printf("%d valores pares\n",count);
    return 0;
}
