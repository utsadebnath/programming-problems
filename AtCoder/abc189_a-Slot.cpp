#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s[0]==s[1]&&s[1]==s[2]&&s[2]==s[0])
    {
        cout<<"Won"<<endl;
    }
    else
    {
        cout<<"Lost"<<endl;
    }
    
}