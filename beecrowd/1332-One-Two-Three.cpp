#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,i;
    char s[6];
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s;
        if(strlen(s)==5)
            cout<<"3"<<endl;
        else if(s[0]=='t' && s[1]=='w' || s[1]=='w' && s[2]=='o' || s[0]=='t' && s[2]=='o')
            cout<<"2"<<endl;
        else
            cout<<"1"<<endl;
    }
}
