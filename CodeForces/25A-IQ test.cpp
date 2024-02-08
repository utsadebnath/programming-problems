#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n[100],k,j,co=0,ce=0;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n[i];
    }
    for(i=1;i<=t;i++)
    {
        if(n[i]%2==1)
        {
            co++;
            j=i;
        }
        else if(n[i]%2==0)
        {
            ce++;
            k=i;
        }
    }
    if(ce==1)
    {
        cout<<k;
    }
    else
    {
        cout<<j;
    }
}
