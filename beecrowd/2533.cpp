#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c,i;
    while(cin>>t)
    {
        int nsum=0,csum=0;
        for(i=0;i<t;i++)
        {
            cin>>n>>c;
            nsum=nsum+(n*c);
            csum=csum+c;
        }
        cout<<fixed<<setprecision(4)<<nsum/(csum*100.0)<<endl;

    }
}
