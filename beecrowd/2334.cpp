#include<iostream>
using namespace std;
int main()
{
    unsigned long long n;
    while(cin>>n)
    {

        if(n==-1)
            break;
        if(n==0)
           cout<<"0\n";

       else
           cout<<n-1<<endl;
    }
}
