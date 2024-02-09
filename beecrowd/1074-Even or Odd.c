#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,x,i;
    scanf("%d",&x);
    for (i = 1; i <=x; i++)
    {
        scanf("%d",&n);
        if(n==0)
        printf("NULL\n");
        if (n%2==0 && n<0)
        {
            printf("EVEN NEGATIVE\n");
        }
        if (n%2==0 && n>0)
        {
            printf("EVEN POSITIVE\n");
        }
        if (n%2!=0 && n>0)
        {
            printf("ODD POSITIVE\n");
        }
        if (n%2!=0 && n<0)
        {
            printf("ODD NEGATIVE\n");
        }
        
        
    }
    
    return 0;
}
