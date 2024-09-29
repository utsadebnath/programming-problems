#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,m,a;
    cin>>h>>m;
    a=0.5*(60*h-11*m);
    if(a>180)
    {
        a=360-a;
    }
    cout<<a<<endl;
}
