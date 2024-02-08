#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,co=0;
    cin>>t;
    char c[100];
    cin>>c;
    for(i=0;i<t;i++)
    {
        if(c[i]==c[i+1])
        {
            co++;
        }
    }
    cout<<co<<endl;
}

