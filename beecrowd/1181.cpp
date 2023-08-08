#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,k;
    cin>>k;
    double n[12][12],sum=0.0;
    char c[2];
    cin>>c;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            cin>>n[i][j];
        }
    }
    for(j=0;j<12;j++)
    {
        sum=sum+n[k][j];
    }
    if(c[0]=='S')
    {
        printf("%.1lf\n",sum);
    }
    if(c[0]=='M')
    {
        printf("%.1lf\n",sum/12.0);
    }
}
