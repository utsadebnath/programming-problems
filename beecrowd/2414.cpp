#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,res=0;
    while(cin>>a && a!=0)
    {
        res=max(res,a);
    }
    cout<<res<<endl;
}
