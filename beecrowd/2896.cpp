#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,k,i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>k;
        cout<<(n/k)+(n%k)<<endl;
    }
    return 0;
}