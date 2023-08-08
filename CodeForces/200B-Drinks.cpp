#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,t,sum=0,i;
    cin>>t;
   for(i=0;i<t;i++)
    {
        cin>>a;
        sum=sum+a;
    }
    cout<<fixed<<setprecision(12)<<sum/t;
}
