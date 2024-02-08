#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double n,m,a;
    long long ans;
    while(cin>>n>>m>>a)
    {
         ans=ceil(n/a)*ceil(m/a);
        cout<<ans<<endl;
    }
}
