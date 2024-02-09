#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0,sum=0;i<n;i++)
        {
            sum=sum+pow(2,i);
        }

        cout<<sum<<endl;
    }

}
