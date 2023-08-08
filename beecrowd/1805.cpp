#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int n,m,sum=0;
    cin>>m>>n;
    sum=(m + n) * (n-m+1)/2;
     cout<<sum<<endl;
}
