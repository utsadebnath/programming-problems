#include <stdio.h>
int main()
{
    int N,a,m=1;
    scanf("%d", &N);
    for(a=N;a>=1;a--)
        m*=a;
    printf ("%d\n",m);
    return 0;
}
