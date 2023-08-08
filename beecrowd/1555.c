#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n,r,b,c,x,y,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        r = 9*pow(x,2)+pow(y,2);
        b = 2*pow(x,2)+25*pow(y,2);
        c = -100*x +pow(y,3);

        if (r>b && r>c)
        {
            printf("Rafael ganhou\n");
        }
        else if (b>r && b>c)
        {
            printf("Beto ganhou\n");
        }
        else
        printf("Carlos ganhou\n");
        
    }
            
    return 0;
}
