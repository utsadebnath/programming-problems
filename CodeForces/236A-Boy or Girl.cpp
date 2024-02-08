#include<bits/stdc++.h>

using namespace std;
int main()
{
    int len,i;
    string s;
    cin>>s;
    len= s.length();
    sort(s.begin(),s.end());
    int count=0;
    for(i=0;i<len;i++)
    {
        if(s[i]!=s[i+1])
            count++;
    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
}
