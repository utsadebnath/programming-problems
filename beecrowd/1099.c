#include <stdio.h>

int main()
{
    int n,x,y,i,j,sum=0;
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        scanf("%d%d",&x,&y);
        if(x>y){
            for(i=y+1,sum=0;i<x;i++)
            if(i%2!=0){
              sum+=i;
            }
            printf("%d\n",sum);
        }
         if(x<y){
            for(i=x+1,sum=0;i<y;i++)
            if(i%2!=0){
              sum+=i;
            }
            printf("%d\n",sum);
        }
        if(x==y){
                sum=0;
            printf("%d\n",sum);
        }
    }

    return 0;//end line
}
