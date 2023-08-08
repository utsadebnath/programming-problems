#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,i,s,c;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        s=i*i;c=i*i*i;
        cout<<i<<" "<<s<<" "<<c<<endl;
    }
    return 0;
}
