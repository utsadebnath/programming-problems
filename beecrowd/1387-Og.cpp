#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c;
     cin>>a>>b;
    while(a!=0 && b!=0)
    {
        c=a+b;
        cout<<c<<endl;
        cin>>a>>b;
    }
    return 0;
}
