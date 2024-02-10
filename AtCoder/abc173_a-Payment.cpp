#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    while(cin>>N)
    {
        if(N%1000)
        {
           cout<<1000-N%1000<<endl;
        }
        else
        {
            cout<<0<<endl;
        }

    }

}
