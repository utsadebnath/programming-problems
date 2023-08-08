#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,pcount=0,ncount=0,t,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n==0)
        {
            pcount++;
        }
        if(n==1)
        {
            ncount++;
        }
    }
    if(pcount>ncount)
    {
        cout<<"Y"<<endl;
    }
    else
    {
        cout<<"N"<<endl;
    }
}

