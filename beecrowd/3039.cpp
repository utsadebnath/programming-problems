#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string a,b;
    cin>>t;
    int mcount=0,fcount=0;
    while(t--)
    {

       cin>>a>>b;
       if(b=="M")
       {
           mcount++;
       }
       if(b=="F")
       {
           fcount++;
       }
    }
    cout<<mcount<<" carrinhos\n"<<fcount<<" bonecas\n";

}
