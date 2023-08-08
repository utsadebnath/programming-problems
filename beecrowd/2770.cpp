#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int x,y,m,xi,yi,i;

    while(scanf("%d %d %d",&x,&y,&m) !=EOF)
    for(i=0;i<m;i++)
    {
        cin>>xi>>yi;
        if((xi<=x&&yi<=y)||(xi<=y&&yi<=x))
        {
            printf("Sim\n");
        }
        else
        {
            printf("Nao\n");
        }
    }
}
