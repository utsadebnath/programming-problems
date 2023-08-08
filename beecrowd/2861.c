#include <stdio.h>
#include<string.h>

int main()
{
    int c,i;
    char sen[1000];

    scanf("%d",&c);

    for(i=0;i<c;i++)
    {
        scanf("\n");
        scanf("%[^\n]%*c",sen);
        printf("gzuz\n");
    }

    return 0;
}