#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        string s;
        cin>>s;
        int m = s.length();
        if(m<=10)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }
    }
}
