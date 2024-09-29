#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,n;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        sum=sum+ar[i];
    }
    cout<<sum<<endl;


}
