#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,len,t;
    char s[100];
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s;
        len=strlen(s);
        if(len>0&&len<=25)
        {
            cout<<"Y"<<endl;
        }
        else
        {
            cout<<"N"<<endl;
        }
    }
}
