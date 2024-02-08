#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,a[3];
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        cout<<a[1]<<endl;
    }

}
