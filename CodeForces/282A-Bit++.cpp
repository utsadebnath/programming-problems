#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0,i,t;
    cin>>t;
    string s;
    for(i=0;i<t;i++)
    {
        cin>>s;
        if(s[1]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }

    cout<<x<<endl;

}
