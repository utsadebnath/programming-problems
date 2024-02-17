#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int count=1;
    if(a==b&&a==c);
    else if (a==b&&a!=c)
    {
        count++;
    }
    else if (a!=b&&a==c)
    {
        count++;
    }
    else if (b==c&&b!=a)
    {
        count++;
    }
    else
    {
        count=3;
    }
    cout<<count;
    
}


