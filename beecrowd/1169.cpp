#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i,x;
    long long res;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        res= pow(2,x)/12000.0;
        cout<<res<<" kg"<<endl;
    }
}
