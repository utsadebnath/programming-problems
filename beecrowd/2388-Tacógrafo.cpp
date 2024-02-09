#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,t,v,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t>>v;
        sum=sum+(t*v);
    }
    cout<<sum<<endl;
}
