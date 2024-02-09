#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i;
    double A[100];

    for(i=0;i<100;i++)
    {
        cin>>A[i];
    }

    for(i=0;i<100; i++)
    {
        if(A[i]<=10.0)
            printf("A[%d] = %.1lf\n",i, A[i]);
    }
}
