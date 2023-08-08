#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k,c=0;
    int a[50];
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(a[k]<=a[i] && a[i]!=0)
        {
            c++;
        }
    }
    cout<<c<<endl;
}
